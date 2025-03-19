#include <iostream>
using namespace std;

double f(double x)
{
    return x;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    double l = 0, r = 1e9, eps = 1e-6;
    double n;
    cin >> n;
    cout << n << '\n';
    while (r - l >= eps)
    {
        double mid = (l + r) / 2;
        if (f(mid) >= n)
            r = mid;
        else
            l = mid;
    }
    cout << r << '\n';
    return 0;
}