#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll inf = 2e18;
const int N = 55;
char a[N];
int dp[N][N];
int main()
{
    cin >> a + 1;
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
    cout << dp[1][n];
    return 0;
}