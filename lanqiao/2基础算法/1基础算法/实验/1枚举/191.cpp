// 特别的数
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool f(int n)
{
    while (n)
    {
        int tmp = n % 10;
        if (tmp == 2 || tmp == 0 || tmp == 1 || tmp == 9)
            return true;
        n /= 10;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (f(i))
            ans += i;
    }
    cout << ans;
    return 0;
}