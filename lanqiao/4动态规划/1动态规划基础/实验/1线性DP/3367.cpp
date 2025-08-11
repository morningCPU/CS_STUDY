// 破损的楼梯
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll p = 1e9 + 7;
const int N = 1e5 + 9;
bool a[N];
ll dp[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int x;
        cin >> x;
        a[x] = true;
    }
    dp[0] = 1;
    dp[1] = (a[1] ? 0 : 1);
    for (int i = 2; i <= n; ++i)
    {
        if (a[i])
            dp[i] = 0;
        else
            dp[i] = (dp[i - 1] + dp[i - 2]) % p;
    }
    cout << dp[n];
    return 0;
}