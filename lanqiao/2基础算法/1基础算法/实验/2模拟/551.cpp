// 灌溉
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int a[N][N];
int b[N][N];
int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        a[r][c] = 1;
    }
    int k;
    cin >> k;
    while (k--)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (a[i][j] == 1)
                {
                    b[i][j] = 1;
                    b[i - 1][j] = 1;
                    b[i + 1][j] = 1;
                    b[i][j - 1] = 1;
                    b[i][j + 1] = 1;
                }
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                a[i][j] = b[i][j];
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            count += a[i][j];
        }
    }
    cout << count;
    return 0;
}