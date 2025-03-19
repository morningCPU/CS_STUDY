#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 1;
    int tmp = -1;
    for (int i = 1; i <= n * m; ++i)
    {
        int x;
        cin >> x;
        if (tmp != x)
            count--;
        else
            count++;
        if (count == 0)
        {
            tmp = x;
            count = 1;
        }
    }
    cout << tmp;
    return 0;
}