#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
vector<int> g[N];
int dp[N], dep[N];

void dfs(int x, int fa)
{
    dp[x] = 0;
    dep[x] = 1;
    for (const auto &i : g[x])
    {
        if (i == fa)
            continue;
        dfs(i, x);
        dp[x] = max(dp[x], dep[x] + dep[i]);
        dep[x] = max(dep[x], dep[i] + 1);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n - 1; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1, 0);
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, dp[i]);
    cout << ans - 1;
    return 0;
}