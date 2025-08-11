// 肖恩的乘法表
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m, k;

ll check(ll x)
{
    ll count = 0;
    for (ll i = 1; i <= n; ++i)
    {
        count += min(m, x / i);
    }
    return count;
}

int main()
{
    cin >> n >> m >> k;
    ll l = 0, r = 1e18;
    while (l + 1 != r)
    {
        ll mid = (l + r) / 2;
        if (check(mid) >= k)
            r = mid;
        else
            l = mid;
    }
    cout << r;
    return 0;
}