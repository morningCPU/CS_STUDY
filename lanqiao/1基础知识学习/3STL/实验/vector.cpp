#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> d;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    sort(d.begin(), d.end());              // 让相同元素相邻
    auto tmp = unique(d.begin(), d.end()); // 找到开始位置
    d.erase(tmp, d.end());
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    return 0;
}