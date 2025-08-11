#include <bits\stdc++.h>
using namespace std;
int main()
{
    map<int, int> d;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int value;
        cin >> value;
        d[i] = value;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << i << ' ' << d[i] << '\n';
    }
    return 0;
}