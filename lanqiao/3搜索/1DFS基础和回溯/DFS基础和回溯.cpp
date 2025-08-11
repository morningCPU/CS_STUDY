#include <bits/stdc++.h>
using namespace std;
int n;
int t;
int ans;
const int N = 1e5 + 9;
int a[N];
int v[N];

void dfs(int st, int d)
{
    if (v[st])
    {
        if (a[st] == a[t])
        {
            ans = max(ans, d);
        }
        return;
    }
    else
    {
        v[st] = 1;
        dfs(a[st], d + 1);
        v[st] = 0;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        t = i;
        if (a[i] == i)
            ans = max(ans, 1);
        dfs(t, 0);
    }
    cout << ans;
    return 0;
}