# github 工作流

+ 这里的远程仓库通过 `github` 实现

## 1.初始状态
<!-- ![001](images/github标准工作流_1/001.jpg "001") -->
一开始是这样的
其中 `remote` 是远程仓库，
`git` 是本地的git, 
`disk` 是本地磁盘上的内容(也就是你git工作区中的内容)
remote 有一个初始分支，也就是主分支 `master`,
里面已经有一些`commit`，抽象为`init`

***

## 2.克隆仓库
<!-- ![002](images/github标准工作流_1/002.jpg "002") -->
使用 `git clone https://github.com/mondayCPU/githubtry.git` 克隆仓库(随便搞的一个位置)
克隆相当于把所有git的内容都搬下来了
所以 git 和 disk 中都有内容

***

## 3.新建分支
多人工作最好采用在要修改的分支新建一个分支的方法
当工作完成后再合并分支到要修改的分支
这样做是为了不破坏原来的分支，并且修改分支是也不会影响原来分支的正常工作
<!-- ![003](images/github标准工作流_1/003.jpg "003") -->
使用 `git checkout -b mybranch` 命令
实现新建一个 `mybranch` 分支,并切换到 `mybranch` 分支
+ 这里用一种颜色表示一个分支的内容
但要注意一条分支从到尾可能有的地方与其他分支共享，颜色可能不同
比如这里 `init` 就是 `master` 和 `mybranch` 共享的
+ 可以看到 `mybranch` 有一个蓝色边框，文中用这表示选中的分支
+ 从 Git 2.23 版本开始
可以使用 `git switch -c mybranch` 功能相同
git switch 被引入作为 git checkout 的替代命令，
`switch`专门用于切换分支和创建新分支，可以让语义更清晰

***

## 4.查看改变
<!-- ![004](images/github标准工作流_1/004.jpg "004") -->
在工作区的修改是在修改disk中的内容
如果没有 `commit` ，那么git中的内容就会和disk中的内容有差异
可以用 `git diff` 命令查看这个改变
+ 下面具体演示一下：

这是原本的内容,已经`commit`过了(也就是所git 和 disk 中的内容一样)
<!-- ![004_1](images/github标准工作流_1/004_1.jpg "004_1") -->
可见执行 `git diff` 之后没有任何的内容
<!-- ![004_2](images/github标准工作流_1/004_2.jpg "004_2") -->
下面修改了一些地方但没有`commit`，可见会输出git 和 disk 中不同的地方
<!-- ![004_3](images/github标准工作流_1/004_3.jpg "004_3") -->
+ vscode 中也可以查看，更方便点

***

## 5.提交git
<!-- ![005](images/github标准工作流_1/005.jpg "005") -->
使用 `git add .` 将全部文件添加到暂存区
使用 `git commit -m"abc"` 将暂存区中的内容添加到git
+ 可以使用 `git add 文件名` 添加具体的文件
+ `-m"abc"` abc 是备注的内容
+ 这时 `master` 分支内容为 `init`
+ `mybranch` 分支内容为 `init` `new`

***

## 6.推送远程仓库
<!-- ![006](images/github标准工作流_1/006.jpg "006") -->
因为这是一个多人工作，所以这里假设这里其他人提交了一个 `updata`
通过 `git push origin mybranch` 将 `mybranch` 分支中的内容推送到远程仓库
+ `origin` 是远程仓库名(默认是 origin)
+ `mybranch` 是分支名

***

## 7.更新本地git
<!-- ![007](images/github标准工作流_1/007.jpg "007") -->
因为这时远程仓库中有了一个新的提交，所以要先更新本地git
从而方便下一步将自己修改代码加入最新的状态中看是否正常
又因为远程仓库的更新一般都是结束在主分支`master`，所以这里更新`master`
先 `git checkout master` 切换到 `master`(也可以写`git switch master`)
+ 可以用 `git branch` 查看当前所在的分支

然后用 `git pull origin master` 拉取远程仓库中的 `master`

***

## 8.合并分支
<!-- ![008](images/github标准工作流_1/008.jpg "008") -->
下面要做的就是将自己的修改并入最新的修改中
也就是把 `new` 放到 `updata` 之后
这里通过 `rebase` 实现,当然 `merge` 也可以
先切换到 `mybranch` 分支 ：`git checkout mybranch`
在使用 `git rebase master` 进行合并
可以发现`rebase`的作用是更新指定分支内容到所在分支
灰色的`new`表示删除，这里其实是相当于删除了，其实还在
+ `master` 分支内容为：`init` `updata`
+ `mybranch` 分支内容为： `init` `updata` `new`

***

## 9.更新远程仓库
<!-- ![009](images/github标准工作流_1/009.jpg "009") -->
使用 `git push -f origin mybranch` 更新远程仓库的 `mybranch` 分支
这里要强制推送
因为` rebase` 会改变提交历史，
在本地执行 rebase 后，本地分支的提交历史与远程分支的提交历史不再一致
所以要强制推送 `-f` 才能成功
也不用担心强制推送不安全，这里推送的 `mybranch` 分支本来就是你自己写的
并不会影响其他人的工作

***
## 10.远程仓库进行合并
<!-- ![010](images/github标准工作流_1/010.jpg "010") -->
完成代码的编写后就可以在`github`发起 `pull request`,这时你的操作其实就结束了
<!-- ![009](images/github标准工作流_2/009.jpg "009") -->
这是项目的管理者就需要核验修改，没问题就可以 `squash and merge`
`squash and merge` 可以多个提交压缩成一个单一的、有意义的提交，
从而使提交历史更加清晰和易于理解

***

## 11.删除创建的分支
<!-- ![011](images/github标准工作流_1/011.jpg "011") -->
+ 首先是远程分支的删除

点击 `branches` 进入分支管理
<!-- ![014](images/github标准工作流_1/014.jpg "014") -->
删除这个不需要的分支 `fix` (就是例子里的 mybranch ,抱歉这里名字我用的不一样)
<!-- ![015](images/github标准工作流_1/015.jpg "015") -->

+ 然后删除本地 `git` 中的 `mybranch` 分支
先切换到 `master` 分支：`git checkout master`
然后删除 `mybranch` 分支 ： `git branch -D mybranch`

下面是删除好的结果：
<!-- ![012](images/github标准工作流_1/012.jpg "012") -->

***

## 12.同步本地 git
<!-- ![012](images/github标准工作流_1/012.jpg "012") -->
从上图可以发现 `romote` 中的 `master` 分支和 `git` 中的 `master` 分支不同
于是需要更新本地 `git`
<!-- ![013](images/github标准工作流_1/013.jpg "013") -->
通过 `git pull origin master` 进行更新
可见这时 `remote`,`git`和`disk`中的内容都一致了

***

## 13.完整示意图
<!-- ![git标准工作流](images/github标准工作流_1/git标准工作流.png "git标准工作流") -->






















