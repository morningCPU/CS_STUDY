#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e7 + 9;
ll f[N], df[N];
const ll c = 1e9 + 7;

ll qmi(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % c;
        a = a * a % c, b >>= 1;
    }
    return res;
}

ll inv(ll n)
{
    return qmi(n, c - 2);
}

ll C(ll n, ll m)
{
    if (n < 0 || m < 0 || n - m < 0)
        return 0;
    return f[n] * df[n - m] % c * df[m] % c;
}

int main()
{
    ll q;
    cin >> q;
    f[0] = 1;
    for (int i = 1; i <= N - 1; ++i)
    {
        f[i] = i * f[i - 1] % c;
    }
    df[N - 1] = inv(f[N - 1]);
    for (int i = N - 2; i >= 0; --i)
    {
        df[i] = (i + 1) * df[i + 1] % c;
    }
    while (q--)
    {
        int n, m;
        cin >> n >> m;
        cout << C(n, m) << '\n';
    }
    return 0;
}