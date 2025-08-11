#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int result = 0;
    int op;
    cin >> op;
    for (auto i : s)
    {
        result = result * op + i - '0';
    }
    cout << result;
    return 0;
}