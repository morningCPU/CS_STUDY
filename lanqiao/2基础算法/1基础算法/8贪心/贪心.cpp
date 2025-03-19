#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll a[N];
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n, [](ll a, ll b)
         { return a > b; });
    for (int i = 2; i <= n; i += 2)
    {
        if (a[i] + a[i - 1] > 0)
            ;
        sum += a[i] + a[i - 1];
    }
    cout << sum;
    return 0;
}