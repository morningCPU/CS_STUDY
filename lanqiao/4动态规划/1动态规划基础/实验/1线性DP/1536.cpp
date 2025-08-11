// 数字三角形
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 105;
int a[N][N];
ll dp[N][N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            dp[i][j] = a[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    cout << dp[1][1];
    return 0;
}