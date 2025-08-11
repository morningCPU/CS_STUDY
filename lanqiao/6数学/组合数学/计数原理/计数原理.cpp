#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll p = 1e9 + 7;

ll qmi(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        a = a * a % p, b >>= 1;
    }
    return res;
}

ll inv(ll n)
{
    return qmi(n, p - 2);
}

ll C(ll n, ll m)
{
    ll res = 1;
    for (int i = n; i >= n - m + 1; --i)
    {
        res = res * i % p;
    }
    for (int i = 1; i <= m; ++i)
        res = res * inv(i) % p;
    return res;
}

ll m(ll n)
{
    return (n % p + p) % p;
}

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = m(m(qmi(2ll, n) - C(n, a) - 1) - C(n, b));
    cout << ans;
    return 0;
}