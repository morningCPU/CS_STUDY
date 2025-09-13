# review
## 1. 启动
1. systemctl start redis (需要自己配置)
```
// 查看状态
systemctl status redis
// 关闭
systemctl stop redis
```
2. redis-cli (进入命令工具)
3. 输出中文问题
```
//输出原本字符,不转义
redis-cli --raw
```

***

## 2. redis常见数据结构
1. String
2. Hash
3. Link
4. Set
5. SortedSet

***

## 3. 通用命令
1. **select** index
```
select 0
```
2. **keys** pattern
* 匹配任意多个
? 匹配一个
[abc] 其中一个
[a-z] 其中一个
\ 转义
`keys *`
3. **del** key
`del name`
4. **exists** key
`exists name`
5. **expire** key seconds
`expire name 10`
6. **ttl** key
`ttl name`

***

## 4. String
1. **set** key value
`set name morning`
2. **get** key
`get name`
3. **mset** key1 value1 key2 value2
`mset age 18 pet dog`
4. **mget** key1 key2
`mget name age pet`
5. **incr** key
`incr age`
6. **incrby** key increment
`incrby age 2`
7. **incrbyfloat** key step
`incrbyfloat price 1.2`
8. **setnx** key value
`setnx friend lisi`
9. **setex** key seconds value
`setex name 10 morning`
也可以写为
`set name mornig ex 10`

***

## 5. Hash
1. **hset** key field1 value1 field2 value2 
`hset student name morning age 18`
2. **hget** key field
`hget student name`
3. **hmget** key field1 field2
`hmget student name age`
4. **hgetall** key
`hgetall student`
5. **hkeys** key
`hkeys student`
6. **hvals** key 
`hvals student`
7. **hincrby** key field increment
`hincrby student age 1`
8. **hsetnx** key field value
`hsetnx student pet dog`

***

## 6. List
1. **lpush** key element1 element2
`lpush list 2 1`
2. **rpush** key element2 element2
`rpush list 3 4`
3. **lpop** key count
`lpop list`
4. **rpop** key count
`rpop list`
5. **lrange** key start end
`lrange list 0 -1`
6. **lindex** key index
`lindex list 2`
7. **llen** key
`llen list`
8. blpop key1 key2 timeout
`blpop list 100`
9. brpop key1 key2 timeout
`rlpop list 100`

***

## 7. Set
1. **sadd** key member1 member2
`sadd set 1 2`
2. **srem** key member1 member2
`srem set 1 2`
3. **scard** key (返回个数)
`scard set`
4. **sismember** key member
`sismember set 1`
5. **smembers** key
`smembers set`
6. **sinter** set1 set2
`sinter set set2`
7. **sdiff** set1 set2
`sdiff set set2`
8. **sunion** set1 set2
`sunion set set2`

***

## 8. SortedSet
1. **zadd** key score1 member1 score2 member2
`zadd score 80 stu1 90 stu2`
2. **zrem** key member1 member2
`zrem score stu1 stu2`
3. **zscore** key member
`zscore score stu1`
4. **zrank** key member(输出排名)
`zrank score stu2`
5. **zcard** key
`zcard score`
6. **zcount** key min max (分数区间)
`zcount score 80 85`
7. **zincrby** key increment member
`zincrby score 2 stu1`
8. **zrange** key min max
`zrange score 0 -1`
9.  **zrangebyscore** key min max
`zrangebyscore score 0 100`
10. **zdiff**
`zdiff set1 set2`
11. **zinter**
`zinter set1 set2`
12. **zunion**
`zunion set1 set2`
+ 默认升序,降序要在z后加rev(reverse)

## key的分级格式
使用 `:`
`school:students:stu1`


**通用命令**
1. select
2. keys
3. del
4. exist
5. expire
6. ttl
**String**
1. set
2. get
3. mset
4. mget
5. setnx
6. setex
7. incr
8. incrby
9. incrbyfloat
**Hash**
1. hset
2. hget
3. hmget
4. hgetall
5. hkeys
6. hvals
7. hsetnx
8. hincrby
**List**
1. lpush
2. rpush
3. lpop
4. rpop
5. blpop
6. brpop
7. llen
8. lrange
9. lindex
**Set**
1. sadd
2. srem
3. scard
4. sismember
5. smembers
6. sinter
7. sdiff
8. sunion
**SortedSet**
1. zadd
2. zrem
3. zscore
4. zrank
5. zcard
6. zcount
7. zrange
8. zrangebyscore
9. zincrby
10. zinter
11. zdiff
12. zunion
+ 默认升序,降序在z后加上rev

***

## 9. jedis
1. 配置redis,slf4j-api,logback-classic
2. 配置连接池
3. 使用
**pom.xml**
```xml
<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="http://maven.apache.org/POM/4.0.0"
         xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 http://maven.apache.org/xsd/maven-4.0.0.xsd">
    <modelVersion>4.0.0</modelVersion>

    <groupId>org.example</groupId>
    <artifactId>JudisTest</artifactId>
    <version>1.0-SNAPSHOT</version>

    <properties>
        <maven.compiler.source>21</maven.compiler.source>
        <maven.compiler.target>21</maven.compiler.target>
        <project.build.sourceEncoding>UTF-8</project.build.sourceEncoding>
    </properties>

    <dependencies>
        <dependency>
            <groupId>redis.clients</groupId>
            <artifactId>jedis</artifactId>
            <version>6.0.0</version>
        </dependency>
        <dependency>
            <groupId>org.junit.jupiter</groupId>
            <artifactId>junit-jupiter</artifactId>
            <version>RELEASE</version>
            <scope>test</scope>
        </dependency>
        <dependency>
            <groupId>org.slf4j</groupId>
            <artifactId>slf4j-api</artifactId>
            <version>2.0.15</version>
        </dependency>
        <dependency>
            <groupId>ch.qos.logback</groupId>
            <artifactId>logback-classic</artifactId>
            <version>1.5.13</version>
        </dependency>
    </dependencies>

</project>
```

**JedisConnectionFactory.java**
```java
import redis.clients.jedis.Jedis;
import redis.clients.jedis.JedisPool;
import redis.clients.jedis.JedisPoolConfig;

import java.time.Duration;

/**
 * ClassName: HelloWorld
 * Package: PACKAGE_NAME
 * Description:
 * &#064;Author  morning
 * &#064;Create  2025/6/5 21:11
 * &#064;Version  1.0
 */
public class JedisConectionFactory {
    private static final JedisPool jedisPool;

    static{
        JedisPoolConfig jedisPoolConfig = new JedisPoolConfig();
        jedisPoolConfig.setMaxTotal(8);
        jedisPoolConfig.setMaxIdle(8);
        jedisPoolConfig.setMinIdle(0);
        jedisPoolConfig.setMaxWait(Duration.ofMillis(200));
        String ip = "192.168.56.6";
        int port = 6379;
        int waitTime = 1000;
        String password = "174.0925ang";
        jedisPool = new JedisPool(jedisPoolConfig,ip,port,waitTime,password);
    }

    public static Jedis getJedis(){
        return jedisPool.getResource();
    }
}
```

**test.java**
```java
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import redis.clients.jedis.Jedis;

import java.util.Set;

/**
 * ClassName: HelloWorld
 * Package: PACKAGE_NAME
 * Description:
 * &#064;Author  morning
 * &#064;Create  2025/6/5 21:11
 * &#064;Version  1.0
 */
public class test1 {
    private Jedis jedis;

    @BeforeEach
    void setup(){
        jedis = JedisConectionFactory.getJedis();
        jedis.select(0);
    }

    @Test
    public void test(){
        jedis.sadd("set","1","2");
        long len = jedis.scard("set");
        System.out.println(len);
        Set<String> set = jedis.smembers("set");
        for(var i : set){
            System.out.println(i);
        }
    }

    @AfterEach
    void over(){
        if(jedis!=null){
            jedis.close();
        }
    }
}

```

***
## 10. SpringDataRedis

