// 合唱队形
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int a[N], dpl[N], dpr[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        dpl[i] = 1;
        for (int j = 0; j <= i; ++j)
        {
            if (a[i] > a[j])
                dpl[i] = max(dpl[i], dpl[j] + 1);
        }
    }
    for (int i = n; i >= 1; --i)
    {
        dpr[i] = 1;
        for (int j = n + 1; j >= i; --j)
        {
            if (a[i] > a[j])
                dpr[i] = max(dpr[i], dpr[j] + 1);
        }
    }
    int mi = 200;
    for (int i = 1; i <= n; ++i)
    {
        mi = min(mi, n - dpl[i] - dpr[i] + 1);
    }
    cout << mi;
    return 0;
}