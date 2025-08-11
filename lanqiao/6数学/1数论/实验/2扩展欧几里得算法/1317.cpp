#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll inf = 2e18;
const int N = 1e5 + 9;
ll a[N], b[N];
int main()
{
    int n, s;
    cin >> n >> s;
    ll sum = 1, mi = inf, res = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i];
    }
    while (1)
    {
        sum = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (b[i] == 0)
                continue;
            sum += a[i];
            mi = min(mi, b[i]);
        }
        cout << mi << '\n';
        if (sum == 0)
            break;
        if (sum < s)
        {
            for (int i = 1; i <= n; ++i)
            {
                res += a[i] * b[i];
            }
        }
        else
        {
            res += mi * s;
            for (int i = 1; i <= n; ++i)
            {
                if (b[i] == 0)
                    continue;
                b[i] -= mi;
            }
        }
    }
    cout << res;
    return 0;
}