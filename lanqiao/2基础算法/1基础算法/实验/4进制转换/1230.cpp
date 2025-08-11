// 进制转换
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 1000;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a[N];
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        ll ans = 0;
        for (auto i : s)
        {
            int num = 0;
            if ('0' <= i && i <= '9')
                num = i - '0';
            else
                num = i - 'A' + 10;
            ans = ans * n + num;
        }
        int cnt = 0;
        while (ans)
            a[++cnt] = ans % m, ans /= m;
        reverse(a + 1, a + 1 + cnt);
        for (int i = 1; i <= cnt; ++i) // 这个输出要注意，9以上要用字母输出
        {
            if (0 <= a[i] && a[i] <= 9)
                cout << a[i];
            else
                cout << char(a[i] - 10 + 'A');
        }
        cout << '\n';
    }
    return 0;
}