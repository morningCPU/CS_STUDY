// 全球变暖
#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int a[N][N];
int b[N][N];
int vis[N][N];
int cnt;
int cnt1;
int cnt2;

void f(int i, int j)
{
    if (a[i][j] == 0 || vis[i][j])
        return;
    vis[i][j] = cnt;
    f(i - 1, j);
    f(i + 1, j);
    f(i, j - 1);
    f(i, j + 1);
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            char x;
            cin >> x;
            if (x == '.')
                a[i][j] = 0;
            else
                a[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (a[i][j] == 0 || vis[i][j])
                continue;
            else
            {
                cnt++;
                f(i, j);
            }
        }
    }
    cnt1 = cnt;
    for (int i = 2; i <= n - 1; ++i)
    {
        for (int j = 2; j <= n - 1; ++j)
        {
            if (a[i - 1][j] == 0 || a[i + 1][j] == 0 || a[i][j - 1] == 0 || a[i][j + 1] == 0)
                b[i][j] = 0;
            else
                b[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (b[i][j] == 0)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = vis[i][j];
            }
        }
    }
    set<int> res;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            res.insert(a[i][j]);
        }
    }
    cnt2 = res.size() - 1;
    cout << cnt1 - cnt2;
    return 0;
}