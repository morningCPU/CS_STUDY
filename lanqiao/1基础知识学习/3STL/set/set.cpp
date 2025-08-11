#include <bits\stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    multiset<int, greater<int>> data;
    for (int i = 1; i <= 10; ++i)
    {
        data.insert(i);
    }
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    data.insert(2);
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    cout << data.count(2) << '\n';
    data.erase(2);
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    data.insert(2);
    data.insert(2);
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    data.erase(data.find(2));
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}