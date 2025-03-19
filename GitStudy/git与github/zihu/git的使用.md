# git 

## 1.git 是什么
分布式版本控制系统，用于跟踪文件和项目的变更，方便多人协作开发。
就是用于保存和管理文件的，能够记录文件的变化，便于回溯

***

## 2.git 的相关知识
+ 版本库(repository)
`.git`文件夹(或者说目录),git 管理的内容都在这里
<!-- ![git001](images/git的使用/git001.jpg "git001") -->
大家创建好仓库后可能发现没有，因为`.git`是一个隐藏文件夹
可以通过下面的操作让它显示：
<!-- ![git002](images/git的使用/git002.jpg "git002") -->

+ 工作区(working directory)
`.git` 之外的其他内容，也就是你自己写的内容
<!-- ![git003](images/git的使用/git003.jpg "git003") -->

下面再详细介绍一下版本库：
版本库里主要有暂存区,分支，HEAD指针
<!-- ![git004](images/git的使用/git004.jpg "git004") -->

+ 暂存区(index)
临时存放的位置，用 `add` 添加(这个下面会将操作)，还没有添加到仓库中

+ 仓库(repository)
里面关键是一些分支，比如 `master` 主分支，一开始默认创建的分支
还有其他自己创建的分支，版本信息就在这些分支里

+ HEAD指针
当使用 `commit` 提交暂存区中的内容时，就会将这些内容提交到HEAD指向的位置
(一般是指向了一个分支的末尾，也就是最新的内容)

***

## 3.git 自学推荐资源推荐
1.gitee的一个图形化学习
https://help.gitee.com/learn-Git-Branching/?locale=zh_CN
2.系统自学教程
https://www.bookstack.cn/read/backlog-git-tutorial/
3.当然少不了bilibili

***

## 4.本地使用 git (准备工作)
(1) **创建仓库**
随便找个位置新建一个文件夹就可以
<!-- ![git005](images/git的使用/git005.jpg "git005") -->

(2) **打开git**
进入文件夹，打开git，这时可以注意到git的初始操作位置就是打开git的位置
<!-- ![git006](images/git的使用/git006.jpg "git006") -->

(3) **初始化仓库**
输入 `git init`
可以看到创建了.git文件夹，这时就初始化好了
如果你没有看到，记得打开隐藏文件的显示，请翻看上文
<!-- ![git007](images/git的使用/git007.jpg "git007") -->

(4) **设置用户的姓名和邮箱**
如果是第一次使用还要设置用户的姓名和邮箱，不然无法使用随便写就可以自己记得就行
```
git config user.name "name"
git config user.email "email"
```
那如果万一忘了怎么办，没关系，可以随时查找
```
git config user.name
git config user.email
```
通过 `git config -l` 也可以配置，一开始还是不要这么做
你可能都不知道怎么退出(输入q,回车可以退出)

+ 好了，准备工作完毕，现在可以正式使用 git 了

***

## 5.本地使用 git (具体操作)

(1) **工作流程**
<!-- ![git004](images/git的使用/git004.jpg "git004") -->
本地工作要关注三个部分，工作区(workspace)，暂存区(index)，仓库(repository)
+ 数据的流向是:
workspace  - `add` -> index - `commit` -> repository

(2) **加入暂存区**
数据首先要进入暂存区才能从暂存区放入仓库(这给了你反悔的机会，后面可以学)
+ 主要有两种方式
    1. `git add 文件名` ：指定文件添加
    2. `git add .`(注意add后面要有空格)：添加全部改动过文件
这里可能你会有疑惑，用`add .`万一有些文件你不想add呢，这时就要用到`.gitignore`文件了
可以指定不 add 一些类型的文件(这里就不详细介绍了)

下面实际操作一下：
用 `touch` 新建一个文件(touch 可以创建文件，mkdir 可以创建文件夹)
用 `git status` 查看状态
Untracked files 未跟踪文件就是说还没有 add
<!-- ![git008](images/git的使用/git008.jpg "git008") -->
可以看见成功创建了一个 `001.txt` 文件
<!-- ![git009](images/git的使用/git009.jpg "git009") -->
用 `git add .`
可见没有 Untracked files了
<!-- ![git010](images/git的使用/git010.jpg "git010") -->
再看一下add指定文件
创建了 002.txt 和 003.txt两个文件
<!-- ![git011](images/git的使用/git011.jpg "git011") -->
单独 add 002.txt
可见只有 002 被添加了，003依旧是Untracked
<!-- ![git012](images/git的使用/git012.jpg "git012") -->

(3) 放入仓库
使用 `git commit -m"提交说明"` 提交暂存区中的内容
记得用写 `-m"提交说明"` 不然会进入 vim 编辑器让你写的
加一句，这里的 commit 是将暂存区内容放到了HEAD指针指向的位置(现在不用管，直接写就行)
具体操作：
可见成功放入仓库
<!-- ![git013](images/git的使用/git013.jpg "git013") -->
那这个提交说明到底有什么用呢
主要是用于写日志，用 `git log`可以查看
可见会显示提交人的姓名，邮箱，提交日期和提交说明
<!-- ![git014](images/git的使用/git014.jpg "git014") -->

主要是 `git add .` 和 `git commit -m"提交说明"` 会这两个就好了

***

## 6.远程仓库
git 的完整使用一般是像下面：
<!-- ![git015](images/git的使用/git015.jpg "git015") -->
相比上面的本地操作多了一个远程仓库(remote)
+ 这个远程仓库就是 `gitee` 和 `github` 等代码管理平台
下面通过 github 进行介绍

(1) 注册 github
进入 https://github.com/
点击 sign up
<!-- ![git016](images/git的使用/git016.jpg "git016") -->
按要求注册登陆就行

(2) 新建仓库
点击右上角加号，再点击 New repository
<!-- ![git017](images/git的使用/git017.jpg "git017") -->
设置仓库名
<!-- ![git018](images/git的使用/git018.jpg "git018") -->
填写仓库的描述
<!-- ![git019](images/git的使用/git019.jpg "git019") -->
选择公有还是私有
<!-- ![git020](images/git的使用/git020.jpg "git020") -->
是否添加README文件(说明文档)
选择`.gitignore` 的模版
选择法律文件(相当于产权说明)
<!-- ![git021](images/git的使用/git021.jpg "git021") -->

(3) 克隆到本地
+ 注意git要先设置用户名和邮箱

用 `git clone https/ssh`
这里先介绍 https 的方法，一般使用 ssh ，但是 ssh 需要配置，就下面再详细讲
按照下面的步骤复制好地址
<!-- ![git022](images/git的使用/git022.jpg "git022") -->
用 `git clone https` 克隆仓库(点击鼠标中间可以粘贴剪切板的内容)
<!-- ![git023](images/git的使用/git023.jpg "git023") -->
成功克隆仓库
<!-- ![git024](images/git的使用/git024.jpg "git024") -->
用 `git push` 将本地仓库的内容推送到远程仓库
<!-- ![git025](images/git的使用/git025.jpg "git025") -->
这个时候你后发现他要你授权(不好意思没截图到)，选择第一个用浏览器打开就好
本来是要将本地仓库和远程仓库进行一个绑定的，但是这里自动绑定了，直接用就可以

***

## 7.SSH

(1) **SSH是什么**
SSH（Secure Shell）是一种网络协议，用于通过不安全的网络（如互联网）安全地访问和管理远程计算机。它通过加密的方式保护数据传输，确保通信过程中的隐私和完整性。
这里我们只用知道设置了这个就不用输入密码就可以

(2) **生成SSH私钥和公钥**    
打开终端                                       
使用下面这条指令生成sshkey:
```
ssh-keygen -t ed25519 -C "name"  
```
然后按三次回车
+ name随便写，可以使用邮箱

下面解释一下(也可以不用管)
`ssh-keygen` 是SSH 密钥生成工具的命令名称，用于创建新的 SSH 密钥对(公钥和私钥)
`-t` 用于指定密钥的类型
`ed25519` 是一种加密算法
`-C "name"` 添加一个注释

+ 密钥默认保存在 `C:/用户/用户名/.ssh` 里
上面是私钥，下面是公钥
<!-- ![git026](images/git的使用/git026.jpg "git026") -->

(3) **复制公钥**
+ 方法一：
打开上面的`.pub`文件复制就可以
+ 方法二：
打开git输入：`cat ~/.ssh/id_ed25519.pub`
其实就是打印文件内容，注意用git的终端，不要用cmd，cat 是linux的命令，windows没用

(4) **将公钥加入 github**
点击右上角头像
<!-- ![git027](images/git的使用/git027.jpg "git027") -->
点击settings
<!-- ![git028](images/git的使用/git028.jpg "git028") -->
点击 SSH and GPG keys , 点击新建
<!-- ![git029](images/git的使用/git029.jpg "git029") -->
输入公钥名称(自己取的)和公钥
<!-- ![git030](images/git的使用/git030.jpg "git030") -->

(5) **测试是否连接成功**
终端输入命令:`ssh -T git@github.com`
这样显示就成功了
第一次连接会让你确认是否可信，输入yes就可以了
<!-- ![git031](images/git的使用/git031.jpg "git031") -->

(6) **使用ssh**
这里选择ssh，其他操作都一样
<!-- ![git032](images/git的使用/git032.jpg "git032") -->









