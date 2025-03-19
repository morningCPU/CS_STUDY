#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6 + 9;
ll q[N];
ll sz = 0;

void pushup(int n)
{
    while (n != 1)
    {
        if (q[n] > q[n >> 1])
            swap(q[n], q[n >> 1]), n >>= 1;
        else
            break;
    }
}

void pushdown(int n)
{
    if (n << 1 > sz)
        return;
    if (n << 1 | 1 > sz)
    {
        if (q[n] < q[n << 1])
            swap(q[n], q[n << 1]);
        pushdown(n << 1);
    }
    if (q[n] == max({q[n], q[n << 1], q[n << 1 | 1]}))
        return;
    else
    {
        if (q[n << 1] > q[n << 1 | 1])
        {
            swap(q[n], q[n << 1]);
            pushdown(n << 1);
        }
        else
        {
            swap(q[n], q[n << 1 | 1]);
            pushdown(n << 1 | 1);
        }
    }
}

void push(int x)
{
    q[++sz] = x;
    pushup(sz);
}

void pop()
{
    q[1] = q[sz--];
    pushdown(1);
}

int main()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        ll x;
        cin >> x;
        push(x);
    }
    while (sz)
    {
        cout << q[1] << ' ';
        pop();
    }
    return 0;
}