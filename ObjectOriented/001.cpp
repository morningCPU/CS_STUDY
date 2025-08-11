#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll inf = 2e18;
const int N = 3e5 + 9;
int n, m;

struct Node
{
    ll ed, w;
    bool operator<(const Node &u) const
    {
        return u.w == w ? u.ed > ed : u.w < w;
    }
};

vector<Node> g[N];
priority_queue<Node> pq;
ll d[N];
bitset<N> vis;

void dijkstra(int st)
{
    for (int i = 1; i <= n; ++i)
    {
        d[i] = inf;
    }
    pq.push({st, d[st] = 0});
    while (!pq.empty())
    {
        ll x = pq.top().ed;
        pq.pop();
        if (vis[x])
            continue;
        vis[x] = true;
        for (const auto &i : g[x])
        {
            if (d[i.ed] > d[x] + i.w)
            {
                d[i.ed] = d[x] + i.w;
                pq.push({i.ed, d[i.ed]});
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
    {
        cout << (d[i] >= inf ? -1 : d[i]) << ' ';
    }
    return 0;
}