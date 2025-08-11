#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int a[N][N];
int b[N][N];
int ans[N][N];

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            for (int q = 1; q <= m; ++q)
            {
                ans[i][j] += a[i][q] * b[q][j];
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            cout << ans[i][j] << " \n"[j == k];
        }
    }
    return 0;
}