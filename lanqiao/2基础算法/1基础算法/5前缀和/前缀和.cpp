#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int count = 0;
        ll data[N];
        ll pre[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> data[i];
        }
        sort(data + 1, data + 1 + n);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + data[i];
        }
        ll result = 0;
        for (int i = 1; i <= k; ++i)
        {
            result = max(result, pre[n - (k - i)] - pre[i]);
        }
        cout << result << '\n';
    }
    return 0;
}