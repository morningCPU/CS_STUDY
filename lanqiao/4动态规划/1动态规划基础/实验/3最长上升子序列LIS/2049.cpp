// 蓝桥勇士
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
int a[N], dp[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int mx = 0;
    for (int i = 1; i <= n; ++i)
    {
        dp[i] = 1;
        for (int j = 0; j <= i; ++j)
        {
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        mx = max(mx, dp[i]);
    }
    cout << mx;
    return 0;
}