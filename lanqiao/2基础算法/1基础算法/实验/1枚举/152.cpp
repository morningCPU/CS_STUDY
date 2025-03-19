// 反倍数
#include <bits/stdc++.h>
using namespace std;

int a, b, c;

bool f(int x)
{
    if (x % a != 0 && x % b != 0 && x % c != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    cin >> a >> b >> c;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (f(i))
        {
            count++;
        }
    }
    cout << count;
    return 0;
}