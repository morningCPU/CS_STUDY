# Linux 基础命令

## 1.linux 的目录结构

`linux` 只有一个根目录 `/`
+ 层次关系用 `/` 表示

***

## 2.linux 命令入门

### (1)linux命令基础
+ 通用格式 `command [-options] [parameter]`
command 命令
options 选项
parameter 参数，一般是命令指向的目标

### (2)ls命令

语法: `ls [-a -l -h] [url]`
+ 默认平铺列出内容
+ HOME目录: 当前账户目录 `/home/username`
+ `-a` all 所有文件
+ `-l` 列表显示
+ `-h` 列出带单位的文件大小(k,m,g)
+ 选项可以合在一起写 `ls -al`

***

## 3.cd命令

切换目录 `cd` (change directory)
语法: `cd [url]`
+ 直接写 `cd` 会切换到 HOME目录
+ `~` 是 HOME 目录

***

## 4.pwd命令

打印工作目录 `pwd` (print work directory)

***

## 5.路径
路径有相对路径、绝对路径
+ 相对路径 ：不以 `/` 开头，直接在当前工作目录开始
+ 绝对路径 ：从根目录`/`开始，所以以 `/` 开头

特殊路径符：
+ `.` 当前目录
+ `..` 上一级目录
+ `~` HOME目录
+ 写法示例 `cd ../../../`

***

## 6.mkdir命令
创建目录 `mkdir` (make directory)
语法: `mkdir [-p] url`
+ `-p` (parent) 自动创建不存在的目录
+ `mkdir 001/002/003` 如果001和002不存在的话就会报错
  要写成 `mkdir -p 001/002/003`

***

## 7.文件操作命令
+ touch
创建文件
语法：`touch url`
`d` 是文件夹 , `-` 是文件
+ cat
查看文件内容
语法: `cat url`
+ more
查看文件内容，和cat相比可以翻页
语法: `more url`
空格可以翻页，`q`退出
+ cp
复制粘贴 `cp` (copy)
语法 `cp [-r] url1 url2`
复制 url1 到 url2
只能复制到一级不存在的文件，不能复制到两级不存在的文件
+ mv
剪切粘贴 `mv` (move)
语法: `mv url1 url2`
移动 url1 到 url2
只能复制到一级不存在的文件，不能复制到两级不存在的文件
+ rm 
删除文件 `rm` (remove)
语法: `rm [-r -f] url`
+ -r 递归
+ -f 强制删除
+ 支持通配符

***

## 8.查找命令
+ which
查看使用的一系列命令的程序文件在哪
+ find 
搜索指定文件
语法：
找名字
`find st_url -name "name"`
找大小
`find st_url -size +|-n[kMG]`
+ `+` 是大于 ， `-` 是小于
+ n 大小
+ `k` kb,`M` Mb,`G` Gb

***

## 12.grep
查找文件内容 `grep`
语法: `grep [-n] 关键字 url`
+ -n 显示行号

***

## 13.wc
统计文件的行数、单词数量等
语法: `wc [-c -m -l -w] url`
+ `-c` 统计字节数
+ `-m` 统计字符数
+ `-l` 统计行数
+ `-w` 统计单词数


