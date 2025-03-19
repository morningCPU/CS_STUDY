// 小郑的蓝桥平衡串
#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int prefix[N];

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 1; i <= n; ++i)
    {
        if (s[i - 1] == 'L')
            prefix[i] = prefix[i - 1] + -1;
        else
            prefix[i] = prefix[i - 1] + 1;
    }
    int mx = 0;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (prefix[j] - prefix[i - 1] == 0)
            {
                mx = max(mx, j - i + 1);
            }
        }
    }
    cout << mx;
    return 0;
}