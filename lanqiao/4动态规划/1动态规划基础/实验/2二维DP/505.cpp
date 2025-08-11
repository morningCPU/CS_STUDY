// 数组三角形
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 105;
ll a[N][N], dp[N][N][N];
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
            for (int k = 0; k <= n - i; ++k)
            {
                if (k > 0)
                    dp[i][j][k] = a[i][j] + max(dp[i + 1][j][k], dp[i + 1][j + 1][k - 1]);
                else
                    dp[i][j][k] = a[i][j] + dp[i + 1][j][k];
            }
        }
    }
    if (n & 1)
        cout << dp[1][1][(n - 1) / 2];
    else
        cout << max(dp[1][1][(n - 1) / 2], dp[1][1][(n - 1) - (n - 1) / 2]);
    return 0;
}