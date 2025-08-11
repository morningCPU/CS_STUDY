#include <bits/stdc++.h>
using namespace std;
int idx = 0;
const int N = 1e4 + 9;
int r[N], l[N];
int head = 0;
int tail = 0;

void fi(int x, int y)
{
    l[r[x]] = l[x];
    r[l[x]] = r[x];
    r[x] = y;
    l[x] = l[y];
    r[l[y]] = x;
    l[y] = x;
}

void bi(int x, int y)
{
    l[r[x]] = l[x];
    r[l[x]] = r[x];
    r[x] = r[y];
    l[x] = y;
    l[r[y]] = x;
    r[y] = x;
}

void init(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        r[i] = i + 1;
        l[i] = i - 1;
    }
    tail = n;
    r[tail] = -1;
    l[0] = -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    init(n);
    while (m--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (z)
        {
            fi(x, y);
        }
        else
        {
            bi(x, y);
        }
    }
    int i = 0;
    while (r[i] != -1)
    {
        cout << r[i] << ' ';
        i = r[i];
    }
    return 0;
}