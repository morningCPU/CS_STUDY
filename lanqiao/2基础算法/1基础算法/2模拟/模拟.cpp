#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < N; i++)
    {
        if (s1[i] == 'A')
            s1[i] = 'T';
        else if (s1[i] == 'T')
            s1[i] = 'A';
        else if (s1[i] == 'C')
            s1[i] = 'G';
        else
            s1[i] = 'C';
    }
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (s1[i] == s2[i])
            continue;
        for (int j = i + 1; j < N; j++)
        {
            if (s1[i] == s2[j] && s2[i] == s1[j])
            {
                swap(s2[i], s2[j]);
            }
        }
        ans += 1;
    }
    cout << ans;
}