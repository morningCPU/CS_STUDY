#include <bits/stdc++.h>
using namespace std;
const int N = 2e6 + 9;
char s[N];
int nex[N][27];
int cnt[N];
int idx = 2;

void insert(char s[])
{
    int x = 1;
    int n = strlen(s + 1);
    for (int i = 1; i <= n; ++i)
    {
        if (!nex[x][s[i] - 'a'])
            nex[x][s[i] - 'a'] = idx++;
        x = nex[x][s[i] - 'a'];
    }
    cnt[x]++;
}

bool check(char s[])
{
    int x = 1;
    int n = strlen(s + 1);
    for (int i = 1; i <= n; ++i)
    {
        x = nex[x][s[i] - 'a'];
    }
    return x;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> s + 1;
        insert(s);
    }
    for (int i = 1; i <= m; ++i)
    {
        cin >> s + 1;
        if (check(s))
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}