#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int pre[N];

int root(int x)
{
    return pre[x] = (pre[x] == x ? x : root(pre[x]));
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        pre[i] = i;
    for (int i = 1; i <= m; ++i)
    {
        int op, x, y;
        cin >> op >> x >> y;
        if (op == 1)
        {
            pre[root(x)] = root(y);
        }
        else
        {
            if (root(x) == root(y))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}