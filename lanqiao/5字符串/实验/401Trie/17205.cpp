#include <bits/stdc++.h>
using namespace std;
const int N = 4e6 + 5;
const int M = 1e5 + 9;
int a[M], fa[N];
int nex[N][2], ind = 2, cnt[N];

vector<int> g[N];

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

void remove(int x)
{
    int move = 1;
    cnt[move] -= 1;
    for (int i = 30; i >= 0; --i)
    {
        int num = (x >> i) & 1;
        move = nex[move][num];
        cnt[move]--;
    }
}

int getmax(int x)
{
    int move = 1;
    int mx = 0;
    for (int i = 30; i >= 0; --i)
    {
        int num = (x >> i) & 1;
        if (nex[move][!num] && cnt[nex[move][!num]])
            move = nex[move][!num], mx |= (1ll << i);
        else
            move = nex[move][num];
    }
    return mx;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> fa[i];
    for (int i = 0; i < n; ++i)
    {
        if (fa[i] != -1)
            g[fa[i]].push_back(i);
    }
    for (int i = 0; i < n; ++i)
        insert(a[i]);
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        for (const auto &j : g[i])
        {
            remove(a[j]);
        }
        mx = max(mx, getmax(a[i]));
        for (const auto &j : g[i])
        {
            insert(a[j]);
        }
    }
    cout << mx;
    return 0;
}