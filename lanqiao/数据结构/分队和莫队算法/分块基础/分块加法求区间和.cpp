#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll a[N], bel[N], sums[N], adds[N], L[N], R[N];

void init(int n)
{
    int sz = sqrt(n) + 1;
    for (int i = 1; i <= n; ++i)
    {
        bel[i] = i / sz;
        sums[bel[i]] += a[i];
        if (i > 1 && bel[i - 1] != bel[i])
            R[bel[i - 1]] = i - 1, L[bel[i]] = i;
    }
    L[bel[1]] = 1, R[bel[n]] = n;
}

void add(ll l, ll r, ll x)
{
    if (bel[l] == bel[r])
    {
        for (int i = l; i <= r; ++i)
        {
            a[i] += x;
            sums[bel[i]] += x;
        }
        return;
    }
    for (int i = l; i <= R[bel[l]]; ++i)
    {
        a[i] += x;
        sums[bel[i]] += x;
    }
    for (int i = bel[l] + 1; i < bel[r]; ++i)
    {
        adds[i] += x;
    }
    for (int i = L[bel[r]]; i <= r; ++i)
    {
        a[i] += x;
        sums[bel[i]] += x;
    }
}

ll getsum(ll l, ll r)
{
    ll ans = 0;
    if (bel[l] == bel[r])
    {
        for (int i = l; i <= r; ++i)
        {
            ans += a[i] + adds[bel[i]];
        }
        return ans;
    }
    for (int i = l; i <= R[bel[l]]; ++i)
    {
        ans += a[i] + adds[bel[i]];
    }
    for (int i = bel[l] + 1; i < bel[r]; ++i)
    {
        ans += sums[i] + adds[i] * (R[i] - L[i] + 1);
    }
    for (int i = L[bel[r]]; i <= r; ++i)
    {
        ans += a[i] + adds[bel[i]];
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    init(n);
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            ll l, r, x;
            cin >> l >> r >> x;
            add(l, r, x);
        }
        else
        {
            ll l, r;
            cin >> l >> r;
            ll ans = getsum(l, r);
            cout << ans << '\n';
        }
    }
    return 0;
}