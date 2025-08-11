#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 105;
const ll inf = 2e18;
ll a[N], dp[1 << 21];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            int x;
            cin >> x;
            a[i] |= (1 << (x - 1));
        }
    }
    for (int i = 1; i < (1 << m); ++i)
    {
        dp[i] = inf;
    }
    for (int i = 0; i < (1 << m); ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            dp[i | a[j]] = min(dp[i | a[j]], dp[i] + 1);
        }
    }
    ll ans = dp[(1 << m) - 1];
    cout << (ans == inf ? -1 : ans);
    return 0;
}