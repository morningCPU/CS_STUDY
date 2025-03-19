#include <bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 2; i <= n; ++i)
    {
        int key = a[i];
        for (int j = i; j > 1 && a[j - 1] > key; j--)
        {
            swap(a[j - 1], a[j]);
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}