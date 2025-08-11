# 01Trie

## 1.介绍
+ 每个叶子结点对应一个二进制数，通过根出发到该节点的路径来表示
深度小的为高位
+ 通常用于解决最大异或对问题 (max(a[i]^a[j]))
+ 支持操作
1.插入元素x
2.查询01Trie中与x异或后的结果最大的元素
3.查询比x更大的元素的个数，可用于解决逆序对问题

***

## 2.相关概念
```
N = n*log(n)
int e[N];//e[i] 表示结点i的权值，即有多少个元素经过该结点
int son[N][2];//son[i][0]表示左孩子(0)，son[i][1]表示右孩子(1)
int tot = 2;//用于动态扩展
```

***

## 3.01Trie插入
```
void insert(int x)
{
    int o = 1;
    e[o] ++;
    for(int i = 30;i>=0;--i)
    {
        int y = x >> i & 1;
        if(!son[o][y])son[o][y] = tot++;
        o = son[o][y];
        e[o] ++;
    }
}
```

***

## 4.查询Trie中与x异或的最大值
```
int query(int x)
{
    int mx = 0, o = 1;
    for(int i = 30;i>=0;--i)
    {
        int y = x >> i & 1;
        if(son[o][!y])o = son[o][!y],mx |= (1ll << i);
        else o = son[o][y];
    }
    return mx;
}
```

***

## 5.查询Trie中比x大的元素的个数
int biger(int x)
{
    int cnt = 0,o = 1;
    for(int i = 30;i >= 0;--i)
    {
        int y = x >> i & 1;
        if(y == 0)cnt += e[son[o][1]];
        if(!son[o][y])break;
        o = son[o][y];
    }
    return cnt;
}