#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
vector<int> g[N];
int siz[N];

void dfs(int n, int p)
{
    siz[n] = 1;
    for (const auto &i : g[n])
    {
        if (i == p)
            continue;
        dfs(i, n);
        siz[n] += siz[i];
    }
}

struct Node
{
    int id, siz;
    bool operator<(const Node &u)
    {
        return siz == u.siz ? id < u.id : siz > u.siz;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        int l, r;
        cin >> l >> r;
        g[r].push_back(l);
    }
    dfs(1, 0);
    vector<Node> v;
    for (int i = 1; i <= n; ++i)
    {
        v.push_back({i, siz[i]});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
        if (v[i].id == m)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}