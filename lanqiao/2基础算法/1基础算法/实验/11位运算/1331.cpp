// 二进制中1的个数
#include <iostream>
using namespace std;
int main()
{
    unsigned int n;
    cin >> n;
    int count = 0;
    while (n)
    {
        count++;
        int pos = n & -n;
        n = n >> pos;
    }
    cout << count;
    return 0;
}