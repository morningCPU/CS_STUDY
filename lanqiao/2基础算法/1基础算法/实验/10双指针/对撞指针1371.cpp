// 回文判断
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool key = true;
    for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
    {
        if (s[i] != s[j])
        {
            key = false;
            break;
        }
    }
    if (key)
        cout << 'Y';
    else
        cout << 'N';
    return 0;
}