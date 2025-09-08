# Jedis客户端
## 1. 快速入门
Jedis官网 https://github.com/redis/jedis
1. 引入依赖 （dependencies中）
```xml
<dependency>
    <groupId>redis.clients</groupId>
    <artifactId>jedis</artifactId>
    <version>6.0.0</version>
</dependency>
```
2. 建立连接
```java
private Jedis jedis;

@BeforeEach //单元测试
void setUp(){
    //建立连接
    jedis = new Jedis("redis所在机器ip",6379);
    //设置密码
    jedis.auth("...");
    //选择库
    jedis.select(0);
}
```
3. 测试
```java
@Test
void testString(){
    //插入数据
    String result = jedis.set("name","morning");
    System.out.println("result = " + result);
    //获取数据
    String name = jedis.get("name");
    System.out.println("name = " + name);
}
```
4. 释放资源
```java
@AfterEach
void tearDown(){
    //释放资源
    if(jedis!=null){
        jedis.close();
    }
}
```

**整体代码**
1. pom.xml
```xml
<?xml version="1.0" encoding="UTF-8"?>
<project xmlns="http://maven.apache.org/POM/4.0.0"
         xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
         xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 http://maven.apache.org/xsd/maven-4.0.0.xsd">
    <modelVersion>4.0.0</modelVersion>

    <groupId>org.example</groupId>
    <artifactId>redis</artifactId>
    <version>1.0-SNAPSHOT</version>

    <properties>
        <maven.compiler.source>21</maven.compiler.source>
        <maven.compiler.target>21</maven.compiler.target>
        <project.build.sourceEncoding>UTF-8</project.build.sourceEncoding>
    </properties>
    <dependencies>
        <dependency>
            <groupId>org.junit</groupId>
            <artifactId>junit-bom</artifactId>
            <version>5.11.4</version>
            <scope>test</scope>
        </dependency>
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
    </dependencies>

</project>
```
2. JedisTest.java
```java
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import redis.clients.jedis.Jedis;

import java.util.HashMap;

/**
 * ClassName: HelloWorld
 * Package: PACKAGE_NAME
 * Description:
 * &#064;Author  morning
 * &#064;Create  2025/6/5 21:11
 * &#064;Version  1.0
 */
public class JedisTest {
    private Jedis jedis;
    @BeforeEach
    public void set(){
        //1. 建立连接
        jedis = new Jedis("192.168.56.6",6379);
        //2. 设置密码
        jedis.auth("174.0925ang");
        //3. 选择库
        jedis.select(1);
    }

    @Test
    public void test(){
        jedis.hset("student1","id","1");
        jedis.hset("student1","name","morning");
        jedis.hset("student2","id","2");
        jedis.hset("student2","name","tom");
    }

    @AfterEach
    public void over(){
        if(jedis != null){
            jedis.close();
        }
    }
}

```

***

## 2. Jedis连接池
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
        //最大连接
        jedisPoolConfig.setMaxTotal(8);
        //最大空闲连接
        jedisPoolConfig.setMaxIdle(8);
        //最小空闲连接
        jedisPoolConfig.setMinIdle(0);
        //设置最长等待时间ms
        jedisPoolConfig.setMaxWait(Duration.ofMillis(200));
        jedisPool = new JedisPool(jedisPoolConfig,"192.168.56.6",6379,1000,"174.0925ang");
    }

    //获取Jedis对象
    public static Jedis getJedis(){
        return jedisPool.getResource();
    }
}

```