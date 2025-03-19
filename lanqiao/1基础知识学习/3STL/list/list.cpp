#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    list<int> data;
    data.push_front(1);
    data.push_front(2);
    data.push_back(3);
    for (auto i : data)
    {
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}