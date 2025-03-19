#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1e6 + 9;

int n, m, ind[N], dp[N];
vector<int> g[N];

void topo()
{
    queue<int> q;
    for (int i = 1; i <= n; ++i)
        if (!ind[i])
            q.push(i);
    while (q.size())
    {
        int x = q.front();
        q.pop();
        for (const auto &y : g[x])
        {
            dp[y] = max(dp[y], dp[x] + 1);
            if (--ind[y] == 0)
                q.push(y);
        }
    }
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        ind[y]++;
        g[x].push_back(y);
    }
    topo();
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, dp[i]);
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int _ = 1;
    while (_--)
        solve();
    return 0;
}