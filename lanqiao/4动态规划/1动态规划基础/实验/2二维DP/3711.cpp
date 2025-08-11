// 选数异或
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll p = 998244353;
const int N = 1e5 + 9;
ll a[N], dp[N][65];
int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    dp[0][0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= 63; ++j)
        {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j ^ a[i]]) % p;
        }
    }
    cout << dp[n][x];
    return 0;
}