#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int a[N];

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 2; i <= n; ++i)
    {
        for (int j = i - 1; j >= 0 && a[j] > a[j + 1]; j--)
        {
            swap(a[j], a[j + 1]);
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}