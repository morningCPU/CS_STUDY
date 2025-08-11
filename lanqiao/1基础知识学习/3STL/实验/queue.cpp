#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    int n;
    cin >> n;
    for (int i = 1; i < +n; ++i)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    d.erase(d.begin() + 1, d.end() - 1);
    return 0;
}