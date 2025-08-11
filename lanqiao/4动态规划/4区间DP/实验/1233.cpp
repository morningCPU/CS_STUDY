#include <bits/stdc++.h>
using namespace std;
const int N = 205;
using ll = long long;
const ll inf = 2e18;
ll a[N], prefix[N], dp[N][N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        prefix[i] = prefix[i - 1] + a[i];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; ++j)
        {
            dp[i][j] = inf;
        }
    }
    for (int i = 1; i <= n; ++i)
        dp[i][i] = 0;
    for (int len = 2; len <= n; ++len)
    {
        for (int i = 1; i + len - 1 <= n; ++i)
        {
            int j = i + len - 1;
            for (int k = i; k < j; ++k)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + prefix[j] - prefix[i - 1]);
            }
        }
    }
    cout << dp[1][n];
    return 0;
}