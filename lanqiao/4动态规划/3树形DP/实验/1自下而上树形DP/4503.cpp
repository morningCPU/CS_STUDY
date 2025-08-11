// 保卫国王大道
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5;
int dp[N][2];
map<int, vector<int>> a;

void dfs(int x, int f)
{
    dp[x][1] = 1;
    for (auto i : a[x])
    {
        if (i == f)
            continue;
        dfs(i, x);
        dp[x][0] += dp[i][1];
        dp[x][1] += min(dp[i][1], dp[i][0]);
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    dfs(1, 0);
    cout << min(dp[1][0], dp[1][1]);
    return 0;
}