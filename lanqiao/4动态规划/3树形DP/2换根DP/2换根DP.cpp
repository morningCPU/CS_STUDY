#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
using ll = long long;
ll dp[N], sz[N], dep[N], n;

vector<int> g[N];

void dfs1(int x, int fa)
{
    sz[x] = 1;
    for (const auto &y : g[x])
    {
        if (y == fa)
            continue;
        dep[y] = dep[x] + 1;
        dfs1(y, x);
        sz[x] += sz[y];
    }
}

void dfs2(int x, int fa)
{
    for (const auto &y : g[x])
    {
        if (y == fa)
            continue;
        dp[y] = dp[x] - sz[y] + (n - sz[y]);
        dfs2(y, x);
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs1(1, 0);
    for (int i = 1; i <= n; ++i)
        dp[1] += dep[i];
    dfs2(1, 0);
    ll ans = dp[1];
    for (int i = 2; i <= n; ++i)
        ans = min(ans, dp[i]);
    cout << ans;
    return 0;
}