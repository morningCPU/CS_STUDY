#include <iostream>
using namespace std;
const int N = 1e6 + 9;
using ll = long long;
int a[N];
int f[N];
int p = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        f[i] = f[i - 1] ^ a[i];
    }
    ll ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; ++j)
        {
            ans = ans * (f[j] ^ f[i - 1]);
        }
    }
    cout << ans % p;
    return 0;
}