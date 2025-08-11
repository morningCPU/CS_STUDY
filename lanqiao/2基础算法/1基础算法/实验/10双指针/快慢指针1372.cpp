// 美丽的区间
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll a[N], prefix[N];
int main()
{
    int n, s;
    cin >> n >> s;
    for (int i = 1; i < +n; ++i)
        cin >> a[i];
    for (int i = 1; i < +n; ++i)
        prefix[i] = prefix[i - 1] + a[i];
    int i, j;
    i = j = 1;
    int mi = N;
    while (i <= n && j <= n && i <= j)
    {
        if (prefix[j] - prefix[i - 1] >= s)
        {
            mi = min(mi, j - i + 1);
            i++;
        }
        else
            j++;
    }
    if (mi == N)
        cout << 0;
    else
        cout << mi;
    return 0;
}