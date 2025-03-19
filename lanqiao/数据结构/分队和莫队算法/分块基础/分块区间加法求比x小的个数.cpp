#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll sz, a[N], L[N], R[N], bel[N], adds[N];
vector<ll> v[N];

void resort(int n)
{
    v[n].clear();
    for (int i = L[n]; i <= R[n]; ++i)
    {
        v[n].push_back(a[i]);
    }
    sort(v[n].begin(), v[n].end());
}

void Add(ll l, ll r, ll x)
{
    if (bel[l] == bel[r])
    {
        for (int i = l; i <= r; ++i)
            a[i] += x;
        resort(bel[l]);
        return;
    }
    for (int i = l; i <= R[bel[l]]; ++i)
        a[i] += x;
    resort(bel[l]);
    for (int i = bel[l] + 1; i < bel[r]; ++i)
        adds[i] += x;
    for (int i = L[bel[r]]; i <= r; ++i)
        a[i] += x;
    resort(bel[r]);
}

ll getcnt(ll l, ll r, ll x)
{
    ll cnt = 0;
    if (bel[l] == bel[r])
    {
        for (int i = l; i <= r; ++i)
            cnt += (int)(a[i] + adds[bel[i]] < x);
        return cnt;
    }
    for (int i = l; i <= R[bel[l]]; ++i)
        cnt += (int)(a[i] + adds[bel[i]] < x);
    for (int i = bel[l] + 1; i < bel[r]; ++i)
        cnt += lower_bound(v[i].begin(), v[i].end(), x - adds[i]) - v[i].begin();
    for (int i = L[bel[r]]; i <= r; ++i)
        cnt += (int)(a[i] + adds[bel[i]] < x);
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int sz = sqrt(n) + 1;
    for (int i = 1; i <= n; ++i)
    {
        bel[i] = i / sz;
        if (i > 1 && bel[i - 1] != bel[i])
            R[bel[i - 1]] = i - 1, L[bel[i]] = i;
    }
    L[bel[1]] = 1, R[bel[n]] = n;
    for (int i = bel[1]; i <= bel[n]; ++i)
        resort(i);
    int m;
    cin >> m;
    while (m--)
    {
        ll op, l, r, x;
        cin >> op >> l >> r >> x;
        if (op == 1)
            Add(l, r, x);
        else
            cout << getcnt(l, r, x) << '\n';
    }
    return 0;
}