// 3226宝藏排序
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
int a[N], b[N];

void f(int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    f(l, mid);
    f(mid + 1, r);
    int p1 = l, p2 = mid + 1, p = l;
    while (p1 <= mid && p2 <= r)
    {
        b[p++] = a[p1] < a[p2] ? a[p1++] : a[p2++];
    }
    while (p1 <= mid)
    {
        b[p++] = a[p1++];
    }
    while (p2 <= r)
    {
        b[p++] = a[p2++];
    }
    while (l <= r)
    {
        a[l] = b[l];
        l++;
    }
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