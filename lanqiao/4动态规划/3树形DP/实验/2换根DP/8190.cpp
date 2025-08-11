#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
vector<int> g[N];
ll sz[N], dp[N], dep[N], n;

void dfs1(int x, int fa)
{
    sz[x] = 1;
    for (const auto &i : g[x])
    {
        if (i == fa)
            continue;
        dep[i] = dep[x] + 1;
        dfs1(i, x);
        sz[x] += sz[i];
    }
}

void dfs2(int x, int fa)
{
    for (const auto &i : g[x])
    {
        if (i == fa)
            continue;
        dp[i] = dp[x] - sz[i] + (n - sz[i]);
        dfs2(i, x);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs1(1, 0);
    for (int i = 1; i <= n; ++i)
    {
        dp[1] += dep[i];
    }
    dfs2(1, 0);
    ll mi = dp[1];
    for (int i = 2; i <= n; ++i)
    {
        mi = min(mi, dp[i]);
    }
    cout << mi;
    return 0;
}