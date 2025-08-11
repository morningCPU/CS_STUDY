// 数的计算
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void dfs(int n)
{
    if (n == 0)
    {
        cnt++;
        return;
    }
    for (int i = 0; i * 2 <= n; ++i)
    {
        dfs(i);
    }
}

int main()
{
    int n;
    cin >> n;
    dfs(n);
    cout << cnt;
    return 0;
}