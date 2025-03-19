#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(int a, int b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a;
        a *= a, b >>= 1;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << f(a, b);
    return 0;
}