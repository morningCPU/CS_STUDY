// 挑选子串
#include <bits/stdc++.h>
using namespace std;
const int N = 2e4;
int a[N];
int f[N];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] >= m)
            a[i] = 1;
        else
            a[i] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        f[i] = f[i - 1] + a[i];
    }
    int count = 0;
    for (int l = 1, r = 1; l <= n && r <= n && l <= r;)
    {
        if (f[r] - f[l - 1] < k)
            r++;
        else
        {
            count += n - r + 1;
            l++;
        }
    }
    cout << count;
    return 0;
}