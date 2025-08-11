#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> d;
    int n;
    cin >> n;
    while (n--) // 头部插入
    {
        int x;
        cin >> x;
        d.push_front(x);
    }
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    cin >> n;
    while (n--) // 尾部插入
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    cout << d.front() << '\n'; // 输出头部元素
    cout << d.back() << '\n';  // 输出尾部元素
    d.pop_front();             // 删除头部元素
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    d.pop_back(); // 删除尾部元素
    for (auto i : d)
        cout << i << ' ';
    cout << '\n';
    return 0;
}