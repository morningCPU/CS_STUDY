# KMP算法

## 1.模板：
**构建 next 数组：**

```
char s[N],p[M];
int next[M];
int n = strlen(s+1),m = strlen(p+1);
next[0] = next[1] = 0;
for(int i = 2,j=0;i<=m;++i)
{
    while(j && p[i]!=p[j+1])j = next[j];
    if(p[i] == p[j+1])j++;
    next[i] = j;
}
```

**通过 next 数组进行匹配**

```
for(int i = 1,j=0;i<=n;++i)
{
    while(j && s[i]!=p[j+1])j = next[j];
    if(s[i] == p[j+1])j++;
    if(j == m){
        ...
    }
}
```

***

# 2.字符串哈希
+   用一个数字代表一段字符串，从而降低字符串处理的复杂度
+   这个数字会很大，用 unsigned long long 类型,以便可以自然溢出（不变负数）
+   用进制数 base 规定这个数字的进制，一般是一个质数（比如 ：131）
+   哈希数组 h[i] 表示字符串 s[1~i] 的哈希值
+   采用类似前缀和的形式求出任意一个子串的哈希值
+   字符串Hash初始化
    typedef unsigned long long ull
    const ull base = 131;
    ull h[N];
    char s[N];
    for(int i = 1;i<=n;++i)
        h[i] = h[i-1] * base + s[i] - 'A' + 1;//要让 s[i] - 'A' + 1 > 0;可以直接用ASCII
+   获取子串s[l]~s[r]的Hash
    ull getHash(int l,int r)
    {
        return h[r] - h[l-1] * b[r - l + 1];//b[i]表示base的i次方
    }