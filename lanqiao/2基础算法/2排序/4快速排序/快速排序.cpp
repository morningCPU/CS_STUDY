#include <bits/stdc++.h>
using namespace std;
int a[100];

void f(int l, int r)
{
    if (l > r)
        return;
    int i = l;
    for (int j = i; j <= r; ++j)
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
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    f(1, n);
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}