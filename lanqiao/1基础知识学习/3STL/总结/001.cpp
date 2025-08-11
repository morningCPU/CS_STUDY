#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; ++i)
    {
        char a;
        cin >> a;
        if (a == '1')
        {
            cout << s.find('1') << '\n';
        }
        else
        {
            int a;
            cin >> a;
            a = a - 1;
            if (s[a] == '1')
            {
                s[a] = '0';
            }
            else
            {
                s[a] = '1';
            }
        }
    }
    return 0;
}