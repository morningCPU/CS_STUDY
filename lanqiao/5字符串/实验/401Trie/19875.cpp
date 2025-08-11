#include <bits/stdc++.h>
using namespace std;
const int N = 4e6 + 9, M = 1e5 + 9;
int a[M], nex[N][2], cnt[N], ind = 2;

void insert(int x)
{
    int move = 1;
    cnt[move]++;
    for (int i = 30; i >= 0; --i)
    {
        int num = (x >> i) & 1;
        if (!nex[move][num])
            nex[move][num] = ind++;
        move = nex[move][num];
        cnt[move]++;
    }
}

int f(int x)
{
    int move = 1;
    int res = 0;
    for (int i = 30; i >= 0; --i)
    {
        int num = (x >> i) & 1;
        if (num == 0)
            res += cnt[nex[move][1]];
        if (!nex[move][num])
            break;
        move = nex[move][num];
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    long long res = 0;
    for (int i = 1; i <= n; ++i)
    {
        res += f(a[i]);
        insert(a[i]);
    }
    cout << res;
    return 0;
}