#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 3e5 + 9, inf = 2e18;

struct Node
{
    ll x, w;
    bool operator<(const Node u) const
    {
        return w > u.w;
    }
};
vector<Node> g[N];
ll d[N];
int n, m;
ll prime()
{
    priority_queue<Node> pq;
    bitset<N> vis;
    pq.push({1, d[1] = 0});
    ll res = 0;
    while (pq.size())
    {
        ll x = pq.top().x;
        pq.pop();
        if (vis[x])
            continue;
        vis[x] = true;
        res = max(res, d[x]);
        for (auto i : g[x])
        {
            if (i.w < d[i.x])
                pq.push({i.x, d[i.x] = i.w});
        }
    }
    return res;
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        d[i] = inf, g[i].clear();
    for (int i = 1; i <= m; ++i)
    {
        int x, y, w;
        cin >> x >> y >> w;
        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }
    cout << prime() << '\n';
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
