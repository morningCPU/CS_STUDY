// N皇后
#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int a[N];
int n;
int ans;

bool check(int d)
{
    for (int i = 1; i < d; ++i)
    {
        if (a[i] == a[d] || abs(a[i] - a[d]) == d - i)
        {
            return false;
        }
    }
    return true;
}

void dfs(int d)
{
    if (d > n)
    {
        ans++;
        return;
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            a[d] = i;
            if (d == 1 || check(d) == true)
            {
                dfs(d + 1);
            }
        }
    }
}

int main()
{
    cin >> n;
    dfs(1);
    cout << ans;
    return 0;
}