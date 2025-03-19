// 跳石头
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int L, n, m;
const int N = 5e4 + 9;
ll datas[N];
ll check(ll x)
{
    int count = 0;
    int move = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (datas[i] - datas[move] < x)
            count++;
        else
            move = i;
    }
    if (L - datas[move] < x)
        count++;
    return count;
}

int main()
{
    cin >> L >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> datas[i];
    }
    ll l = 0, r = 1e18;
    while (l + 1 != r)
    {
        ll mid = (l + r) / 2;
        if (check(mid) <= m)
            l = mid;
        else
            r = mid;
    }
    cout << l;
    return 0;
}