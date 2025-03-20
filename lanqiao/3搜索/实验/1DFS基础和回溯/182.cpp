// 小朋友崇拜圈
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];
bitset<N> vis;
int cnt;

void dfs(int d, int n)
{
    if (vis[n] == true)
        return;
    cnt++;
    vis[n] = true;
    dfs(d + 1, a[n]);
    vis[n] = false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int mx = 0;
    for (int i = 1; i <= n; ++i)
    {
        cnt = 0;
        dfs(1, i);
        mx = max(mx, cnt);
    }
    cout << mx;
    return 0;
}