#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll exgcd(ll a, ll b, ll &x, ll &y)
{
    if (!b)
    {
        x = 1;
        y = 0;
        return a;
    }
    int d = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, m;
        cin >> a >> b >> m;
        ll x, y;
        ll d = exgcd(abs(a), abs(m), x, y);
        if (b % d)
            cout << -1 << '\n';
        else
        {
            if (a < 0)
                x = -x;
            x = b / d * x;
            x = (x % (m / d) + (m / d)) % (m / d);
            cout << x << '\n';
        }
    }
    return 0;
}