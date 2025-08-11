// 二分查找数组元素
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int data[200];
    for (int i = 0; i < 200; i++)
        data[i] = 4 * i + 6;
    int l = -1, r = 199;
    int n;
    cin >> n;
    while (l + 1 != r)
    {
        int mid = (l + r) / 2;
        if (data[mid] >= n)
            r = mid;
        else
            l = mid;
    }
    cout << r;
    return 0;
}