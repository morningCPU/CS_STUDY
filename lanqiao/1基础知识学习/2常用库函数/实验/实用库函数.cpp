#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> d;
    int n;
    cin >> n;
    // 输入容器内容
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    // 输出容器内容
    for (auto i : d)
        cout << i;
    cout << '\n';
    // 删除重复元素
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());
    // 输出容器内容
    for (auto i : d)
        cout << i;
    cout << '\n';
    return 0;
}