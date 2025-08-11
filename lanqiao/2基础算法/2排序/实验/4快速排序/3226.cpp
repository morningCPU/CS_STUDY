// 3226宝藏排序
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N];

void f(int l, int r)
{
    if (l > r)
        return;
    int i = l;
    for (int j = l; j <= r; ++j)
    {
        if (a[j] < a[r])
            swap(a[i++], a[j]);
    }
    swap(a[i], a[r]);
    f(l, i - 1);
    f(i + 1, r);
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    f(1, n);
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}