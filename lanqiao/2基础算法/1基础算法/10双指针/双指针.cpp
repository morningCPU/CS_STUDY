#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 200010;
ll a[N], b[N];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 1; i <= m; ++i)
    {
        cin >> b[i];
        b[i] += b[i - 1];
    }
    int ans = 0;
    for (int i = 0; i <= n; ++i)
    {
        if (a[i] > k)
            break;
        int x = upper_bound(b, b + m + 1, k - a[i]) - (b + 1);
        ans = max(ans, i + x);
    }
    cout << ans << '\n';
    return 0;
}