#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
bitset<N> vis;
vector<int> a;
vector<int> b;

int main()
{
    int n;
    cin >> n;
    vis[0] = vis[1] = true;
    for (int i = 2; i <= n; ++i)
    {
        if (!vis[i])
            a.push_back(i);
        for (int j = 0; j < a.size() && i * a[j] <= n; ++j)
        {
            vis[i * a[j]] = true;
            if (i % a[j] == 0)
                break;
        }
    }
    for (int i = 1; i <= n; ++i)
        if (!vis[i])
            b.push_back(i);
    int count = 0;
    for (int i = 0; i < b.size() - 1; ++i)
    {
        for (int j = i + 1; j < b.size(); ++j)
        {
            if (!vis[b[j] - b[i]])
                count++;
        }
    }
    cout << count;
    return 0;
}