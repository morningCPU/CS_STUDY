# XML
## 1. 概述
XML(EXtensible Markup Language)可扩展标记语言
+ 用于写配置文件

***

## 2. 常用配置文件
1. properties
druid 
2. XML
Tomcat
3. YAML
SpringBoot
4. json

***

## 3. XML的使用
### 3.1 示例
```xml
<?xml version="1.0" encoding="UTF-8"?>
<students>
    <student>
        <name>张三</name>
        <age>18</age>
    </student>
    <student>
        <name>李四</name>
        <age>19</age>
    </student>
</student>
```
### 3.2 使用
1. 第一行
`<?xml version="1.0" encoding="UTF-8"?>`
前面什么都不要有,空格换行都不行
2. 有约束,用于限定内容
不用自己写,能自动导入
常用约束
+ dtd 简单,但约束不细致
+ schema 复杂但细致
3. 在idea中的使用
自己添加Add Frameworks Support
设置-> 菜单与控制栏 -> 添加 

***

## 4. 解析XML文件
使用 DOM4J
### 4.1 使用步骤
1. 导入jar包dom4j.jar
2. 创建解析器对象(SAXReader)
3. 解析xml获得Document对象
4. 获取根节点RootElement
5. 获取根节点下的子节点