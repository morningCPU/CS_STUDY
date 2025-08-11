// 地宫寻宝
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll p = 1e9 + 7;
const int N = 55;

int dp[N][N][15][15];
int n, m, k, c[N][N];

int dx[] = {0, 1};
int dy[] = {1, 0};
int inmp(int x, int y)
{
    return 1 <= x && x <= n && 1 <= y && y <= m;
}

ll dfs(int x, int y, int mx, int cnt)
{
    if (x == n && y == m)
        return (ll)(cnt == k);
    if (dp[x][y][mx][cnt] != -1)
        return dp[x][y][mx][cnt];
    ll res = 0;
    for (int i = 0; i < 2; ++i)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (!inmp(nx, ny))
            continue;
        if (c[nx][ny] > mx && cnt < k)
            res = (res + dfs(nx, ny, c[nx][ny], cnt + 1)) % p;
        res = (res + dfs(nx, ny, mx, cnt)) % p;
    }
    return dp[x][y][mx][cnt] = res;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    memset(dp, -1, sizeof(dp));
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> c[i][j];
        }
    }
    cout << (dfs(1, 1, -1, 0) + dfs(1, 1, c[1][1], 1)) % p;
    return 0;
}