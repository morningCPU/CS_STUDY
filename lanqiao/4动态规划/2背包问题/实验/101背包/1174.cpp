#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
int dp[N];
int main()
{
    int n, V;
    cin >> n >> V;
    for (int i = 1; i <= n; ++i)
    {
        int w, v;
        cin >> w >> v;
        for (int j = V; j >= w; --j)
        {
            dp[j] = max(dp[j], dp[j - w] + v);
        }
    }
    cout << dp[V];
    return 0;
}