// 分糖果
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s[n - 1])
        for (int i = 1; i <= n / x + (n % x != 0); ++i)
            cout << s[0];
    else
    {
        if (s[0] == s[x - 1])
        {
            for (int i = x - 1; i < n; ++i)
                cout << s[i];
        }
        else
        {
            cout << s[x - 1];
        }
    }
    return 0;
}