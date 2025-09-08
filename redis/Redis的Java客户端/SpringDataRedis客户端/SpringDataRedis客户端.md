# SpringDataRedis
## 1. 简介
+ 提供 RedisTemplate 统一API来操作Redis

***

## 2. 快速入门
1. 引入依赖
```xml
<!-- redis依赖 -->
<dependency>
    <groupId>org.springframework.boot</groupId>
    <artifactId>spring-boot-starter-data-redis</artifactId>
</dependency>
<!-- 连接池依赖 -->
<dependency>
    <groupId>org.apache.commons</groupId>
    <artifactId>commons-pool2</artifactId>
</dependency>
```
2. 配置redis
```yaml
spring:
  data:
    redis:
      host: 192.168.56.6
      port: 6379
      password: 174.0925ang
      database: 2
      lettuce:
        pool:
          max-active: 8
          max-idle: 8
          min-idle: 0
          max-wait: 100ms
```
3. 注入RedisTemplate
```
@Autowired
private RedisTemplate redisTemplate;
```
4. 编写测试
```java
@SpringBootTest
class SpringdataApplicationTests {

    @Autowired
    private RedisTemplate redisTemplate;

    @Test
    void contextLoads() {
        redisTemplate.opsForValue().set("name","morning");
        String name = (String)redisTemplate.opsForValue().get("name");
        System.out.println("name = " + name);
    }

}
```

***

## 3. 操作API
1. opsForValue()
2. opsForHash()
3. opsForList()
4. opsForSet()
5. opsForZSet()

***

## 4. SpringDataRedis的序列化
+ 默认采用jdk序列化
+ 可读性差
+ 内存占用大
**改善方法**
1. key 用 StringRedisSerializer (适合字符串)
2. value 用 GenericJackson2JsonRedisSerializer (适合对象)
```java
package org.example.springdata.redis.config;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.data.redis.connection.RedisConnectionFactory;
import org.springframework.data.redis.core.RedisTemplate;
import org.springframework.data.redis.serializer.GenericJackson2JsonRedisSerializer;
import org.springframework.data.redis.serializer.RedisSerializer;

/**
 * ClassName: HelloWorld
 * Package: PACKAGE_NAME
 * Description:
 * &#064;Author  morning
 * &#064;Create  2025/6/5 21:11
 * &#064;Version  1.0
 */
@Configuration
public class RedisConfig {
    @Bean
    public RedisTemplate<String,Object> redisTemplate(RedisConnectionFactory connectionFactory){
        //创建RedisTemplate对象
        RedisTemplate<String, Object> template = new RedisTemplate<>();
        //设置连接工厂
        template.setConnectionFactory(connectionFactory);
        //创建JSON序列化工具
        GenericJackson2JsonRedisSerializer genericJackson2JsonRedisSerializer = new GenericJackson2JsonRedisSerializer();
        //设置Key序列化
        template.setKeySerializer(RedisSerializer.string());
        template.setHashKeySerializer(RedisSerializer.string());
        //设置Value序列化
        template.setValueSerializer(genericJackson2JsonRedisSerializer);
        template.setHashValueSerializer(genericJackson2JsonRedisSerializer);
        //返回
        return template;
    }
}
```
**使用**
+ 注意需要加入jackson依赖
```xml
<dependency>
    <groupId>com.fasterxml.jackson.core</groupId>
    <artifactId>jackson-databind</artifactId>
</dependency>
```
```java
@SpringBootTest
class SpringdataApplicationTests {

    @Autowired
    private RedisTemplate<String,Object> redisTemplate;

    @Test
    void contextLoads() {
        User user = new User(1,"小明",18);
        redisTemplate.opsForValue().set("uer",user);
    }

}
```

***

## 5. StringRedisTemplate
+ 为了节省内存空间,不会使用JSON序列化器来处理value,而是统一使用String序列化器,要求只能存储String类型的key和value,当需要存储Java对象时,手动完成对象的序列化和反序列化
+ 使用StringRedisTemplate