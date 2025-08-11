#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
int ls[N], rs[N];

void dfs1(int n)
{
    cout << n << ' ';
    if (ls[n])
        dfs1(ls[n]);
    if (rs[n])
        dfs1(rs[n]);
}

void dfs2(int n)
{
    if (ls[n])
        dfs2(ls[n]);
    cout << n << ' ';
    if (rs[n])
        dfs2(rs[n]);
}

void dfs3(int n)
{
    if (ls[n])
        dfs3(ls[n]);
    if (rs[n])
        dfs3(rs[n]);
    cout << n << ' ';
}

void bfs(int n)
{
    queue<int> q;
    q.push(n);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        cout << temp << ' ';
        if (ls[temp])
            q.push(ls[temp]);
        if (rs[temp])
            q.push(rs[temp]);
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> ls[i] >> rs[i];
    dfs1(1);
    cout << '\n';
    dfs2(1);
    cout << '\n';
    dfs3(1);
    cout << '\n';
    bfs(1);
    return 0;
}