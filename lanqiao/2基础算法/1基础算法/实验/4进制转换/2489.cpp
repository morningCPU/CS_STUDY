// 进制
// 直接输出就可以了
// #include <iostream>
// using namespace std;
// using ll = long long;
// int main()
// {
//     cout << 0x2021ABCD;
//     return 0;
// }

// 下面是正常求解
#include <iostream>
using namespace std;
using ll = long long;
int main()
{
    string s = "2021ABCD";
    int op = 16;
    ll ans = 0;
    for (auto i : s)
    {
        ll num = 0;
        if ('0' <= i && i <= '9')
            num = i - '0';
        else
            num = i - 'A' + 10;
        ans = ans * op + num;
    }
    cout << ans;
    return 0;
}