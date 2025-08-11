#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int data[200];
    int i;
    for (i = 0; i < 200; i++)
        data[i] = 4 * i + 6;
    int n;
    cin >> n;
    int l = 0, r = 200;
    while (l + 1 != r)
    {
        int mid = (l + r) / 2;
        if (data[mid] <= n)
            l = mid;
        else
            r = mid;
    }
    cout << l;
    return 0;
}