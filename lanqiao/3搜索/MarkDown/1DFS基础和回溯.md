# 回溯法
## 1.简介
回溯法一般使用 DFS 实现
当使用 DFS 遍历的图或者树没有存储下来而是进行隐式处理，那就是回溯法

***

## 2.搜索树
+   排列型搜索树 
+   子集型搜索树

***

## 3.实现方法
+   DFS 使用栈或递归来管理节点的遍历顺序，一般使用递归

***

## 4.回溯法模板
```
int a[N];
bool vis[N];

void dfs(int dep)
{
    if(dep == n+1)
    {
        for(int i = 1;i<=n;++i)cout << a[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = 1;i<=n;++i)
    {
        if(vis[i])continue;
        vid[i] = true;
        a[dep] = i;
        dfs(dep+1);
        vis[i] = false;//恢复现场
    }
}
```


