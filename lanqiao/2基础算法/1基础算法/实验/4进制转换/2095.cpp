#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "2022";
    int op = 9;
    int ans = 0;
    for (auto i : s)
    {
        ans = ans * op + i - '0';
    }
    cout << ans;
    return 0;
}