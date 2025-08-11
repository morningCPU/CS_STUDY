#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const int N = 1e6 + 9;
char s1[N], s2[N];
ull h1[N], h2[N], b[N];
ull base = 131;

ull getHash(ull h[], int l, int r)
{
    return h[r] - h[l - 1] * b[r - l + 1];
}

int main()
{
    cin >> s1 + 1 >> s2 + 1;
    int n = strlen(s2 + 1);
    int m = strlen(s1 + 1);
    b[0] = 1;
    for (int i = 1; i <= n; ++i)
    {
        b[i] = b[i - 1] * base;
        h1[i] = h1[i - 1] * base + s1[i];
        h2[i] = h2[i - 1] * base + s2[i];
    }
    int count = 0;
    for (int i = 1; i + m - 1 <= n; ++i)
    {
        if (getHash(h1, 1, m) == getHash(h2, i, i + m - 1))
            count++;
    }
    cout << count;
    return 0;
}