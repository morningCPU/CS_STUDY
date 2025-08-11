// 特殊多边形
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll a[N], prefix[N], n;

void dfs(int d, int prenum, int mul, int presum)
{
    if (mul > 1e5)
        return;
    if (d > n)
    {
        a[mul]++;
        return;
    }
    ll up = pow(1e5 / mul, 1.0 / (n - d + 1)) + 9;
    for (int i = prenum + 1; i < (d == n ? min(presum, up) : up); ++i)
    {
        dfs(d + 1, i, mul * i, presum + i);
    }
}

int main()
{
    int t;
    cin >> t >> n;
    dfs(1, 0, 1, 0);
    for (int i = 1; i <= 1e5; ++i)
        prefix[i] = prefix[i - 1] + a[i];
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }
    return 0;
}