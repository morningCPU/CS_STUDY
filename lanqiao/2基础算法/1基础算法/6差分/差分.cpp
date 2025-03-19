#include <bits/stdc++.h>
using namespace std;
int a[509][509];
int d[509][509];
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        d[x1][y1] += 1;
        d[x1][y2 + 1] -= 1;
        d[x2 + 1][y1] -= 1;
        d[x2 + 1][y2 + 1] += 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + d[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (a[i][j] % 2)
                a[i][j] = 1;
            cout << a[i][j];
        }
        cout << '\n';
    }
}