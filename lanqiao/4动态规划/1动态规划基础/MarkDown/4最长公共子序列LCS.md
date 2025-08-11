# LCS问题

## 1.问题介绍
定两个序列A和B,求他们的最长公共子序列

***

## 2.基本概念
+ `dp[i][j]` 表示`A[1~i]`序列和`B[1~j]`序列中的最长公共子序列的长度
+ 状态转移方程
```
if(a[i] == b[j]){
    dp[i][j] = dp[i-1][j-1] + 1;
}else{
    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
}
```
示例：
```
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+9;
int dp[N][N];
int a[N];
int b[N];
int main()
{
  int n,m;cin >> n>>m;
  for(int i = 1;i<=n;++i)cin >> a[i];
  for(int i = 1;i<=m;++i)cin >> b[i];
  for(int i=1;i<=n;++i)
  {
    for(int j = 1;j<=m;++j)
    {
      if(a[i] == b[j]){
        dp[i][j] = dp[i-1][j-1] + 1;
      }else{
        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
      }
    }
  }
  cout << dp[n][m];
  return 0;
}
```
+ 输出LCS
```
从后向前处理
如果两个相等则向左上方走，否则向更大的向走
int i = n,j = m;
while (i != 0 && j != 0)
{
    if (a[i] == b[j])
    {
        ans[++count] = a[i];
        i--;
        j--;
    }
    else
    {
        if (dp[i][j - 1] > dp[i - 1][j])
        {
            j--;
        }
        else
        {
            i--;
        }
    }
}
```