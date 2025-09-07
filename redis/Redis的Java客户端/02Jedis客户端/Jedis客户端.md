# Jedis客户端
## 1. 快速入门
Jedis官网 https://github.com/redis/jedis
1. 引入依赖
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