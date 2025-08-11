#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
const ll p = 1e9 + 7;
ll a[N] = {0, 1, 1};

ll f(int n)
{
    if (a[n] != 0)
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