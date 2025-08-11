// 1020
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int a[105];

void f(int n)
{
    for (int i = 2; i <= n / i; ++i)
    {
        if (n % i)
            continue;
        while (n % i == 0)
            a[i]++, n /= i;
    }
    if (n > 1)
        a[n]++;
}

int main()
{
    int n = 100;
    for (int i = 1; i <= n; ++i)
        f(i);
    ll ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        ans *= a[i] + 1;
    }
    cout << ans;
    return 0;
}