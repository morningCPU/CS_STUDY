// 倍数问题
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
vector<int> a[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        a[x % k].push_back(x);
    }
    for (int i = 0; i < n; ++i) // 注意从0开始遍历
    {
        sort(a[i].begin(), a[i].end(), [](int a, int b)
             { return a > b; });
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) // 注意从0开始遍历
    {
        if (a[i].empty())
            continue;
        for (int j = i; j < n; ++j)
        {
            int t = (2 * k - i - j) % k;
            if (t < j || a[t].empty() || a[j].empty())
                continue;
            if (i == t) // 经过前面的操作保证了 i<=j<=t ，所以 i == t 其实是 i == j == t;
            {
                if (a[i].size() < 3)
                    continue;
                ans = max(ans, a[i][0] + a[i][1] + a[i][2]);
            }
            else if (i == j)
            {
                if (a[i].size() < 2)
                    continue;
                ans = max(ans, a[i][0] + a[i][1] + a[t][0]);
            }
            else if (j == t)
            {
                if (a[j].size() < 2)
                    continue;
                ans = max(ans, a[i][0] + a[j][0] + a[j][1]);
            }
            else
            {
                ans = max(ans, a[i][0] + a[j][0] + a[t][0]);
            }
        }
    }
    cout << ans;
    return 0;
}