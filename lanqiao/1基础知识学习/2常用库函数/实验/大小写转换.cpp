#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int res = 0;
    for (auto i : s)
    {
        int tmp = i - '0';
        res = res * 10 + tmp;
    }
    cout << res;
}