#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m, k;

ll check(ll x)
{
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        count += min((ll)m, x / i);
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
        if (check(mid) <= k)
            l = mid;
        else
            r = mid;
    }
    cout << l;
    return 0;
}