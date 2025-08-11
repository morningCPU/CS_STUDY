#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;

struct Node
{
    int x, y;
    bool operator<(const Node u)
    {
        return x == u.x ? y > u.y : x < u.x;
    }
};

Node d[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        d[i] = {x, y};
    }
    sort(d + 1, d + 1 + n);
    for (int i = 1; i <= n; ++i)
    {
        int x = d[i].x;
        int y = d[i].y;
        cout << x << ' ' << y << '\n';
    }
    return 0;
}