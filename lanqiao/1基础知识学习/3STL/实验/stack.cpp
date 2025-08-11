#include <bits/stdc++.h>
using namespace std;

void print(stack<int> d)
{
    stack<int> tmp;
    while (d.size())
    {
        tmp.push(d.top());
        d.pop();
    }
    while (tmp.size())
    {
        cout << tmp.top() << ' ';
        tmp.pop();
    }
    cout << '\n';
}

int main()
{
    stack<int> d;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        d.push(x);
    }
    print(d);
    cout << d.top() << '\n';
    d.pop();
    print(d);
    return 0;
}