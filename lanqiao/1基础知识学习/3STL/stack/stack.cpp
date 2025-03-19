#include <bits\stdc++.h>
#include <stack>
using namespace std;
int main()
{
    stack<int> data;
    data.push(1);
    data.push(2);
    data.push(3);
    cout << data.top() << '\n';
    data.pop();
    cout << data.top() << '\n';
    data.push(6);
    cout << data.size() << '\n';
    while (!data.empty())
    {
        cout << data.top() << ' ';
        data.pop();
    }
    cout << '\n';
    return 0;
}