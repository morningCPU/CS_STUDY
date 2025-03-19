#include <bits/stdc++.h>
using namespace std;
int a[100];
int temp[100];

void f(int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    f(l, mid);
    f(mid + 1, r);
    int i = l, j = mid + 1;
    int count = l;
    while (i <= mid && j <= r)
    {
        temp[count++] = a[i] < a[j] ? a[i++] : a[j++];
    }
    while (i <= mid)
    {
        temp[count++] = a[i++];
    }
    while (j <= r)
    {
        temp[count++] = a[j++];
    }
    while (l <= r)
    {
        a[l] = temp[l];
        l++;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    f(1, n);
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}