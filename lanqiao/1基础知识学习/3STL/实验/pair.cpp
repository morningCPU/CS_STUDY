#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, pair<int, int>> d{1, {2, 3}};
    cout << d.first << '\n';        // 调用第一个值,即1
    cout << d.second.first << '\n'; // 调用第二个值,即2
    cout << d.second.second << '\n';
    return 0;
}