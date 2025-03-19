// 小明的彩灯
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5 + 9;
ll a[N];
ll diff[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        diff[i] = a[i] - a[i - 1];
    while (q--)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        diff[l] += x;
        diff[r + 1] -= x;
    }
    for (int i = 1; i <= n; ++i)
        a[i] = a[i - 1] + diff[i];
    for (int i = 1; i <= n; ++i)
        if (a[i] < 0)
            a[i] = 0;
    for (int i = 1; i <= n; ++i)
        cout << a[i] << " \n"[i == n];
    return 0;
}