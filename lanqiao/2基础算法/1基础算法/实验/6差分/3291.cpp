// 区间更新
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    while (cin >> n >> m)
    {
        int a[N], diff[N];
        a[0] = 0;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        for (int i = 1; i <= n; ++i)
            diff[i] = a[i] - a[i - 1];
        while (m--)
        {
            int l, r, v;
            cin >> l >> r >> v;
            diff[l] += v;
            diff[r + 1] -= v;
        }
        for (int i = 1; i <= n; ++i)
            a[i] = a[i - 1] + diff[i];
        for (int i = 1; i <= n; ++i)
            cout << a[i] << " \n"[i == n];
    }
    return 0;
}