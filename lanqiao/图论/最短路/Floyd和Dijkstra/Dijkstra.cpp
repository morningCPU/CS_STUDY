#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 3e5 + 9, inf = 2e18;
ll d[N];

struct Node
{
    ll x, w;
    bool operator<(const Node &u) const
    {
        return w == u.w ? x < u.x : w > u.w;
    }
};

vector<Node> g[N];
priority_queue<Node> pq;
int n, m;

void dijkstra(int st)
{
    for (int i = 1; i <= n; ++i)
        d[i] = inf;
    bitset<N> vis;
    pq.push({st, d[st] = 0});
    while (pq.size())
    {
        ll x = pq.top().x;
        pq.pop();
        if (vis[x])
            continue;
        vis[x] = true;
        for (const auto &i : g[x])
        {
            if (d[x] + i.w < d[i.x])
            {
                d[i.x] = d[x] + i.w;
                pq.push({i.x, d[i.x]});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int x, y, w;
        cin >> x >> y >> w;
        g[x].push_back({y, w});
    }
    dijkstra(1);
    for (int i = 1; i <= n; ++i)
        cout << (d[i] >= inf ? -1 : d[i]) << ' ';
    return 0;
}