#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    map<int, int> data;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n * m; ++i)
    {
        int x;
        cin >> x;
        data[x]++;
    }
    for (auto [a, b] : data)
    {
        if (b * 2 > n * m)
        {
            cout << a;
        }
    }
    return 0;
}