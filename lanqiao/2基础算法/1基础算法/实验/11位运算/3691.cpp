// 区间或
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N], f[N][35];
int main()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= 30; ++j)
        {
            f[i][j] = f[i - 1][j] + (a[i] >> j & 1);
        }
    }
    while (q--)
    {
        int ans = 0;
        int l, r;
        cin >> l >> r;
        for (int i = 0; i <= 30; ++i)
        {
            ans += (1 << i) * (f[r][i] - f[l - 1][i] ? 1 : 0);
        }
        cout << ans << '\n';
    }
    return 0;
}