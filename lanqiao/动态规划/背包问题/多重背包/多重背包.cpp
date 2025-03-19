#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e4 + 9;
ll dp[N];

int main()
{
    int n, V;
    cin >> n >> V;
    for (int i = 1; i <= n; ++i)
    {
        int v, w, s;
        cin >> v >> w >> s;
        for (int j = 1; j <= s; s -= j, j += j)
        {
            for (int k = V; k >= j * v; k--)
            {
                dp[k] = max(dp[k], dp[k - j * v] + j * w);
            }
        }
        for (int k = V; k >= s * v; k--)
        {
            dp[k] = max(dp[k], dp[k - s * v] + s * w);
        }
    }
    cout << dp[V];
    return 0;
}