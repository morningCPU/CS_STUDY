#include <bits/stdc++.h>
using namespace std;
queue<int> a;

bool f(int x)
{
    int n = a.size();
    while (n--)
    {
        int temp = a.front();
        if (temp == x)
            return true;
        else
        {
            a.pop();
            a.push(temp);
        }
    }
    return false;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int count = 0;
    while (n--)
    {
        int x;
        cin >> x;
        bool key = f(x);
        if (!key)
        {
            count++;
            if (a.size() == m)
                a.pop();
            a.push(x);
        }
    }
    cout << count;
    return 0;
}