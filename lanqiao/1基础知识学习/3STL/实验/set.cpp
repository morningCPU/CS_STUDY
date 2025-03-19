#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int, greater<int>> d;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d.insert(x);
    }
    for (auto i = d.begin(); i != d.end(); ++i)
        cout << *i << ' ';
    cout << '\n';
    for (auto i = d.rbegin(); i != d.rend(); ++i)
        cout << *i << ' ';
    cout << '\n';
    d.erase(d.begin(), d.end());
    return 0;
}