#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<ll>> a;

int main()
{
    ll n, m, c;
    cin >> n >> m >> c;
    a.resize(n + 1);
    for (int i = 0; i <= n; ++i)
    {
        a[i].resize(m + 1);
        a[i][0] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % c;
        }
    }
    cout << a[n][m];
    return 0;
}