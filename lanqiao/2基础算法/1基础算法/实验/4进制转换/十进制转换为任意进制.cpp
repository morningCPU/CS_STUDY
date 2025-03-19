#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
int a[N];

int main()
{
    ll n, k;
    cin >> n >> k;
    int cnt = 0;
    while (n)
        a[++cnt] = n % k, n /= k;
    reverse(a + 1, a + 1 + cnt);
    for (int i = 1; i <= cnt; ++i)
        cout << a[i] << " \n"[i == cnt];
    return 0;
}