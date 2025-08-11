// 纪念品分组
#include <bits/stdc++.h>
using namespace std;
const int N = 3e4 + 9;
int a[N];

int main()
{
    int w;
    cin >> w;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    int cnt = 0;
    for (int i = 1, j = n; i <= j;)
    {
        if (a[i] + a[j] <= w)
            i++, j--;
        else
            j--;
        cnt++;
    }
    cout << cnt;
    return 0;
}