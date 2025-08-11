#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9;
char s1[N], s2[N];
int nex[N];

int main()
{
    cin >> s1 + 1 >> s2 + 1;
    int n = strlen(s2 + 1);
    int m = strlen(s1 + 1);
    nex[0] = nex[1] = 0;
    for (int i = 2, j = 0; i <= m; ++i)
    {
        while (j && s1[i] != s1[j + 1])
            j = nex[j];
        if (s1[i] == s1[j + 1])
            j++;
        nex[i] = j;
    }
    int count = 0;
    for (int i = 1, j = 0; i <= n; ++i)
    {
        while (j && s2[i] != s1[j + 1])
            j = nex[j];
        if (s2[i] == s1[j + 1])
            j++;
        if (j == m)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}