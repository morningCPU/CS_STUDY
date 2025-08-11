#include <bits\stdc++.h>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> data = {2, 3, 5, 3, 3, 5, 2, 3, 7, 4, 4, 6};
    int a[10];
    for (auto i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
    memset(a, 0, sizeof(a));
    for (auto i : a)
    {
        cout << i << ' ';
    }
    cout << '\n';
    sort(data.begin(), data.end(), [](int a, int b)
         { return a > b; });
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    sort(data.begin(), data.end());
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    reverse(data.begin(), data.end());
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    reverse(data.begin(), data.end());
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    auto temp = unique(data.begin(), data.end());
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    data.erase(temp, data.end());
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}