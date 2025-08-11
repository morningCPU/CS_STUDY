#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll p = 1e9 + 7;
const int N = 1e5 + 9;
ll a[N];

ll f(int n)
{
    if (n <= 2)
        return 1;
    if (a[n])
        return a[n];
    return a[n] = (f(n - 1) + f(n - 2)) % p;
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}