#include <bits/stdc++.h>
using namespace std;
map<int, int> d;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n * m; ++i)
    {
        int x;
        cin >> x;
        d[x]++;
    }
    for (auto i : d)
    {
        if (i.second * 2 > m * n)
        {
            cout << i.first;
            break;
        }
    }
    return 0;
}