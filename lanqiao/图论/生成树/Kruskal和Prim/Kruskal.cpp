#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e5 + 9;

struct Edge
{
    ll x, y, w;
    bool operator<(const Edge u) const
    {
        return w < u.w;
    }
};

ll pre[N];
ll root(ll n)
{
    return pre[n] = (pre[n] == n ? n : root(pre[n]));
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> pq;
    for (int i = 1; i <= m; ++i)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        pq.push_back({x, y, w});
    }
    sort(pq.begin(), pq.end());
    for (int i = 1; i <= n; ++i)
        pre[i] = i;
    ll ans = 0;
    for (auto i : pq)
    {
        if (root(i.x) == root(i.y))
            continue;
        ans = max(ans, i.w);
        pre[root(i.x)] = root(i.y);
    }
    cout << ans << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}