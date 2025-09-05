# Tomcat
## 1. 简介
+ 服务器软件,专门用于运行web应用
**常见的javaweb服务器**
1. Tomcat
2. jetty
3. JBoss
4. GlassFish
5. Resin
6. Weblogic
7. Websphere

***

## 2. TomCat常见目录
创建系统变量要有CATALINA_HOME
+ bin 命令目录
+ conf 配置文件
logging.properties 日志配置文件
server.xml 服务器配置
tomcat-users.xsd 配置账号密码
web.xml 项目部署
+ lib
+ webapps 项目
+ logs 日志文件
+ temp 临时文件
+ work
与jsp技术有关,但几乎不使用

***

## 3. Tomcat_WebAPP的标准结构
```
+ app 本应用根目录
    + index.html
      ...html
    + static(非必要)
        + img
            - ...图片
        + js
            - ...js
        + css
            - ...css
    + WEB-INF 受保护的资源,不可以通过浏览器直接访问的资源
        + classes 字节码文件根路径
        + lib 第三方包
        - web.xml 当前项目配置文件
```
+ 访问一个项目如果没有写具体资源会默认访问index文件

***

## 4. WEB项目部署的方式
1. 直接将编译好的项目放在webapps目录中
2. 将编译好的项目打包成war包放在webapps目录下,tomcat启动后会自动解压
3. 可以将项目放在非webapps的其他目录下,在tomcat中通过配置文件指向app的实际磁盘路径
### 4.1 方法三的实现
1. 在tomcat的conf下创建Catalina/localhost目录,并在该目录下准备一个name.xml文件(和项目名一致)
```xml
<!-- path 访问项目的路径 -->
<!-- docBase 项目在磁盘中的实际路径 -->
<Context path="/app" docBase="D:\mywebapps\app"> 
```

***
## 5. 配置账户
```
<role rolename="admin-gui"/>
<role rolename="admin-script"/>
<role rolename="manager-gui"/>
<role rolename="manager-script"/>
<role rolename="manager-jmx"/>
<role rolename="manager-status"/>
<user 	username="admin" 
		password="admin" 
		roles="admin-gui,admin-script,manager-gui,manager-script,manager-jmx,manager-status"
/>
```

***
## 6. IDEA中开发并部署运行WEB项目
### 6.1 IDEA关联本地Tomcat
setting -> 构建 -> 应用程序服务器
+ 选择路径是bin的上一层
### 6.2 使用idea创建一个javaWeb工程
1. 为项目添加tomcat依赖
2. 添加 web 框架
3. 删除web中的index文件
### 6.3 使用idea将工程构建成一个可以发布的app
1. html,css,js代码写在web中
2. java代码写在src中
3. build -> build artifact
### 6.4 使用idea将构建好的app部署到tomcat中
1. 编辑配置