#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
const ll p = 1e9 + 7;
vector<int> g[N];
bitset<N> vis;
ll d[N], dp[N];
queue<int> q;

void bfs(int n)
{
    memset(d, 0x3f, sizeof(d));
    dp[1] = 1;
    d[1] = 0;
    q.push(n);
    while (q.size())
    {
        int x = q.front();
        q.pop();
        if (vis[x])
            continue;
        vis[x] = true;
        for (const auto i : g[x])
        {
            if (d[x] + 1 > d[i])
                continue;
            else if (d[x] + 1 == d[i])
                dp[i] = (dp[i] + dp[x]) % p;
            else
                d[i] = d[x] + 1, dp[i] = dp[x];
            q.push(i);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs(1);
    cout << dp[n];
    return 0;
}