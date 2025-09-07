# 安装Redis
+ 这里基于Linux系统来安装
可以看这个教程
[text](https://blog.csdn.net/qq_45784913/article/details/120678054)

## 1. 使用
1. 前台启动
`redis-server`
+ 注意配置系统变量
2. 指定配置文件启动
redis.conf
+ 我安装在 /usr/local/redis/redis-6.0.5
1. 注意先备份
`cp redis.conf redis.conf.bck`
2. 修改
bind 127.0.0.1 -> bind 0.0.0.0 //让任何IP都可以访问
daemonize yes //守护进程
requirepass //密码
port //端口
dir . //工作目录
databases //数据库数量
maxmemory 
logfile "redis.log" //日志
3. 启动
`redis-server /usr/local/redis/redis-6.0.5/redis.conf`
4. 验证
`ps -ef | grep redis`
5. 停止
`kill -9 进程号`
**设置开机自启动**
6. `vim /etc/systemd/system/redis.service`
```
[Unit]
Description=redis-server
After=network.target

[Service]
Type=forking
ExecStart=/usr/local/redis/bin/redis-server /usr/local/redis/etc/redis.conf
PrivateTmp=true

[Install]
WantedBy=multi-user.target
```
2. 重载系统服务(记忆 system control)
`systemctl daemon-reload`
3. 启动
`systemctl start redis`
4. 查看状态
`systemctl status redis`
5. 关闭
`systemctl stop redis`
6. 开机自启动
`systemctl enable redis`
7. 关闭自启动
`systemctl disable redis`

## 2. Redis客户端
### 2.1 命令行 redis-cli
redis-cli [options] [commonds]
**常见的options**
1. `-h 127.0.0.1` 指定要连接的IP地址
2. `-p 6379` 指定要连接的端口
3. `-a 123456` 指定访问密码(也可以进入后用 AUTH 命令)
### 2.2 图形化桌面
下面地址进行安装
https://github.com/lework/RedisDesktopManager-Windows/releases
### 2.3 编程客户端

***

## 3. 中文输出问题
1. 启动redis-cli时加上--raw
`redis-cli --raw` (不转义)