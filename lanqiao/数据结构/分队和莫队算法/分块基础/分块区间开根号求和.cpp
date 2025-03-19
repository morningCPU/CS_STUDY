#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
ll a[N], L[N], R[N], bel[N], tag[N], sums[N];

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

void midify(int l, int r)
{
    for (int i = l; i <= r; ++i)
    {
        sums[bel[i]] -= a[i];
        a[i] = sqrt(a[i]);
        sums[bel[i]] += a[i];
    }
}

void Sqrt(int l, int r)
{
    if (bel[l] == bel[r])
    {
        midify(l, r);
        return;
    }
    midify(l, R[bel[l]]);
    for (int i = bel[l] + 1; i < bel[r]; ++i)
    {
        midify(L[i], R[i]);
    }
    midify(L[bel[r]], r);
}

ll getsum(int l, int r)
{
    ll res = 0;
    if (bel[l] == bel[r])
    {
        for (int i = l; i <= r; ++i)
        {
            res += a[i];
        }
        return res;
    }
    for (int i = l; i <= R[bel[l]]; ++i)
    {
        res += a[i];
    }
    for (int i = bel[l] + 1; i < bel[r]; ++i)
    {
        if (tag[i] > 7)
            continue;
        tag[i]++;
        res += sums[i];
    }
    for (int i = L[bel[r]]; i <= r; ++i)
    {
        res += a[i];
    }
    return res;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    init(n);
    while (m--)
    {
        int op, l, r;
        cin >> op >> l >> r;
        if (op == 1)
            Sqrt(l, r);
        else
            cout << getsum(l, r) << '\n';
    }
    return 0;
}