// 小蓝和小桥的挑战
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    ll sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            cnt++;
            x++;
        }
        sum += x;
    }
    if (sum == 0)
        cnt++;
    cout << cnt << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}