#include <iostream>
using namespace std;

// 将字符转换为对应的数字
int num(char n)
{
    return n - '0'; // 通过 ASCII 码差值将字符转换为整数
}

// 求除2的余数
char yu(string s)
{
    // 获取字符串最后一个字符对应的数字
    // tmp用于存储对last_digit是奇数还是偶数的判断,根据奇偶性可以判断余数
    bool tmp = num(s[s.length() - 1]) & 1; // 使用按位与运算判断奇偶性
    // 返回余数对应的字符
    if (tmp)
        return '1'; // 如果是奇数，返回 '1'
    else
        return '0'; // 如果是偶数，返回 '0'
}

// 将字符串表示的数字除以 2，返回商的字符串表示
string div(string s)
{
    string res;                               // 结果字符串
    int tmp = 0;                              // 用于存储进位
    for (int i = 0; i < int(s.length()); ++i) // 遍历字符串
    {
        // 当前字符与进位组合后的值
        tmp = num(s[i]) + tmp * 10;
        if (tmp < 2 && i == 0) // 如果首位小于 2，跳过（避免前导零）
            continue;
        // 将当前位的商追加到结果字符串
        res += tmp / 2 + '0';
        // 求余数，即下一位要加上的数，记得用的时候乘10
        tmp %= 2;
    }
    return res; // 返回除以 2 后的结果
}

int main()
{
    string s; // 十进制整数
    cin >> s;

    string res;        // 输入十进制整数对应的二进制表示
    while (!s.empty()) // 当字符串不为空时
    {
        res = yu(s) + res; // 参考短除法
        s = div(s);        // 将数字除以 2
    }
    cout << res << endl;
    return 0;
}