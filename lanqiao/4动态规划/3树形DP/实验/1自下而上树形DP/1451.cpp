// 左孩子右孩子
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int dp[N];
vector<int> g[N];

void dfs(int x)
{
    for (const auto &i : g[x])
    {
        dfs(i);
        dp[x] = max(dp[x], int(g[x].size()) + dp[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i)
    {
        int x;
        cin >> x;
        g[x].push_back(i);
    }
    dfs(1);
    cout << dp[1];
    return 0;
}