// 数字王国之军训排队
#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int a[N];
vector<int> q[N];
int n;

bool dfs(int depth, int len)
{
    if (depth > n)
        return true;
    for (int i = 1; i <= len; ++i)
    {
        int key = true;
        for (auto j : q[i])
        {
            if (max(j, a[depth]) % min(j, a[depth]) == 0)
            {
                key = false;
                break;
            }
        }
        if (!key)
        {
            continue;
        }
        else
        {
            q[i].push_back(a[depth]);
            if (dfs(depth + 1, len))
            {
                return true;
            }
            q[i].pop_back();
        }
    }
    return false;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        if (dfs(1, i))
        {
            cout << i;
            break;
        }
    }
    return 0;
}