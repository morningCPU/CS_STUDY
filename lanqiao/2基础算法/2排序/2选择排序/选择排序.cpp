#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i < n; ++i)
    {
        int mi = i;
        for (int j = i + 1; j <= n; ++j)
        {
            if (a[mi] > a[j])
            {
                mi = j;
            }
        }
        swap(a[i], a[mi]);
    }
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}