#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

int main()
{
    int x;
    cin >> x;
    for (int i = 2; i <= x / i; ++i)
    {
        if (x % i)
            continue;
        int cnt = 0;
        while (x % i == 0)
        {
            cnt++;
            x /= i;
        }
        v.push_back({i, cnt});
    }
    if (x > 1)
        v.push_back({x, 1});
    for (auto i : v)
        cout << i.first << ' ' << i.second << '\n';
    return 0;
}