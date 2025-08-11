#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << '\n';
    while (next_permutation(s.begin(), s.end()))
    {
        cout << s << '\n';
    }
    prev_permutation(s.begin(), s.end());
    while (prev_permutation(s.begin(), s.end()))
    {
        cout << s << '\n';
    }
    return 0;
}