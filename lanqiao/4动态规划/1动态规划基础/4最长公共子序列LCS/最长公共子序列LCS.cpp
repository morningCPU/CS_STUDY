#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 9;
int dp[N][N];
int a[N];
int b[N];
int ans[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= m; ++i)
        cin >> b[i];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (a[i] == b[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[n][m] << '\n';
    int i = n, j = m;
    int count = 0;
    while (i != 0 && j != 0)
    {
        if (a[i] == b[j])
        {
            ans[++count] = a[i];
            i--;
            j--;
        }
        else
        {
            if (dp[i][j - 1] > dp[i - 1][j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
    }
    reverse(ans + 1, ans + 1 + count);
    for (int i = 1; i <= count; ++i)
        cout << ans[i];
    return 0;
}