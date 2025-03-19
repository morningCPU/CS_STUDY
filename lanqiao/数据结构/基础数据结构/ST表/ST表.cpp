#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5 + 9;
ll a[N];
ll dp[N][21];

ll getmax(ll l, ll r)
{
    ll k = log(r - l + 1) / log(2);
    return max(dp[l][k], dp[r - (1 << k) + 1][k]);
}

int main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], dp[i][0] = a[i];
    for (int j = 1; j <= 20; ++j)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (i + (1 << j) - 1 <= n)
            {
                dp[i][j] = max(dp[i][j - 1], dp[i + (1 << (j - 1))][j - 1]);
            }
        }
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << getmax(l, r) << '\n';
    }
    return 0;
}