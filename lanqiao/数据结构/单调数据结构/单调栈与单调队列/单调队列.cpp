#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll p = 998244353;
const int N = 1e5 + 9;
int a[N], q[N], mx[N], mi[N];

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

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k, x;
    cin >> n >> k >> x;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int hh = 1, tt = 0;
    for (int i = 1; i <= n; ++i)
    {
        while (hh <= tt && q[hh] < i - k + 1)
            hh++;
        while (hh <= tt && a[q[tt]] > a[i])
            tt--;
        q[++tt] = i;
        mi[i] = a[q[hh]];
    }
    hh = 1, tt = 0;
    for (int i = 1; i <= n; ++i)
    {
        while (hh <= tt && q[hh] < i - k + 1)
            hh++;
        while (hh <= tt && a[q[tt]] < a[i])
            tt--;
        q[++tt] = i;
        mx[i] = a[q[hh]];
    }
    int cnt = 0;
    for (int i = k; i <= n; ++i)
    {
        if (mx[i] - mi[i] <= x)
            cnt++;
    }
    cout << cnt * inv(n - k + 1) % p << '\n';
    return 0;
}