// 肖恩的苹果园
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll datas[N];
int n, m;

ll check(ll x)
{
    int count = 1;
    int move = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (datas[i] - datas[move] >= x)
        {
            count++;
            move = i;
        }
    }
    return count;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> datas[i];
    }
    sort(datas + 1, datas + 1 + n);
    ll l = 0, r = 1e18;
    while (l + 1 != r)
    {
        ll mid = (l + r) / 2;
        if (check(mid) >= m)
            l = mid;
        else
            r = mid;
    }
    cout << l;
    return 0;
}