// 回文日期
#include <bits/stdc++.h>
using namespace std;

bool f(int n)
{
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon = n / 100 % 100;
    int day = n % 100;
    if (mon >= 1 && mon <= 12)
    {
        if (day <= month[mon])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    int num = 0;
    for (auto i : s)
    {
        num = num * 10 + (i - '0');
    }
    int key = 0;
    for (int i = num + 1; i <= 99999999; ++i)
    {
        if (!f(i))
            continue;
        int num8 = i / 10000000;
        int num7 = i / 1000000 % 10;
        int num6 = i / 100000 % 10;
        int num5 = i / 10000 % 10;
        int num4 = i / 1000 % 10;
        int num3 = i / 100 % 10;
        int num2 = i / 10 % 10;
        int num1 = i % 10;
        if (num8 == num1 && num7 == num2 && num6 == num3 && num5 == num4)
        {
            if (key == 0)
            {
                cout << i << '\n';
                key = 1;
            }
            if (num8 == num6 && num7 == num5)
            {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}