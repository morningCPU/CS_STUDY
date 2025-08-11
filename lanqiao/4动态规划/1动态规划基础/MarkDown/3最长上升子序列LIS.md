# LIS算法模型

## 1.子序列
按照原顺序选出若干个不一定连续的元素所组成的序列

***

## 2.相关概念
dp[i] 为以 a[i]结尾的最长上升子序列的长度

***

## 3.状态转移方程
```
dp[i] = max(dp[j] + 1),if a[i] > a[j]
```

***

## 4.代码实现
```
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+9;
int a[N];
int dp[N];

int main()
{
  int n;cin >>n;
  for(int i = 1;i<=n;++i) cin >> a[i];
  int mx = 0;
  for(int i = 1;i<=n;++i)
  {
    dp[i] = 1;
    for(int j = 0;j<i;++j)
    {
      if(a[i] > a[j])dp[i] = max(dp[i],dp[j] + 1);
    }
    mx = max(mx,dp[i]);
  }
  cout << mx;
  return 0;
}
```

