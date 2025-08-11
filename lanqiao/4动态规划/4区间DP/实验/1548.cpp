#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll inf = 2e18;
const int N = 105;
char a[N], b[N];
int dp[N][N], f[N];
int main()
{
    cin >> a + 1;
    cin >> b + 1;
    int n = strlen(a + 1);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; ++j)
        {
            if (i == j)
                dp[i][j] = 1;
            else
                dp[i][j] = inf;
        }
    }
    for (int len = 2; len <= n; ++len)
    {
        for (int i = 1; i + len - 1 <= n; ++i)
        {
            int j = i + len - 1;
            if (a[i] == a[j])
                dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]);
            for (int k = i; k < j; ++k)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j]);
            }
        }
    }
    for (int i = 1; i <= n; ++i)
        f[i] = dp[1][i];
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == b[i])
            f[i] = min(f[i], f[i - 1]);
        for (int j = 1; j < i; ++j)
            f[i] = min(f[i], f[j] + dp[j + 1][i]);
    }
    cout << f[n];
    return 0;
}