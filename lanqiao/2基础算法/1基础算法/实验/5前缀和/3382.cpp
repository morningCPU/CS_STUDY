// 区间次方和
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const ll p = 1e9 + 7;
ll a[N][8];
ll prefix[N][8];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i][1];
    for (int i = 2; i <= 5; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            a[j][i] = (a[j][i - 1] * a[j][1]) % p;
        }
    }
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            prefix[j][i] = prefix[j - 1][i] + a[j][i];
            // 注意这里不能写成prefix[j][i] = (prefix[j-1][i] + a[j][i])%p;这会导致累加的错误
        }
    }
    while (m--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        cout << (prefix[r][k] - prefix[l - 1][k]) % p << '\n';
    }
    return 0;
}