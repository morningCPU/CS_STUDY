// 安全序列
#include <iostream>
using namespace std;
const int N = 1e6 + 9;
const int p = 1e9 + 7;
using ll = long long;
ll f[N];
ll dp[N];
int main()
{
    dp[0] = f[0] = 1;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        dp[i] = (f[max(i - k - 1, 0)]) % p;
        f[i] = (f[i - 1] + dp[i]) % p;
    }
    cout << f[n];
    return 0;
}