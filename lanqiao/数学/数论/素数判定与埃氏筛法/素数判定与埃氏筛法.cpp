#include <iostream>
using namespace std;
const int N = 1e5 + 9;
bool vis[N];

int main()
{
    int n;
    cin >> n;
    vis[0] = vis[1] = true;
    for (int i = 2; i <= n; ++i)
        if (!vis[i])
            for (int j = i * i; j <= n; j += i)
                vis[j] = true;
    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (!vis[i] && !vis[j] && !vis[j - i])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}