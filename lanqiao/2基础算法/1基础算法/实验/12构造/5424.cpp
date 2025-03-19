// 小蓝找答案
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 9;
int n, a[N];

bool check(int mid)
{
    vector<pair<int, int>> v;
    for (int i = 2; i <= n; ++i)
    {
        while (v.size() && v.back().first > a[i])
            v.pop_back();
        if (v.size() && v.back().first == a[i])
            v.back().second++;
        else
            v.push_back({a[i], 1});

        while (v.size() && v.back().second >= mid)
        {
            int pos = v.back().first;
            v.pop_back();
            if (v.size() && v.back().first == pos - 1)
                v.back().second++;
            else
                v.push_back({pos - 1, 1});
        }
        if (v.size() && v.front().first == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    bool key = true;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] >= a[i + 1])
        {
            key = false;
            break;
        }
    }
    if (key)
    {
        cout << 1;
        return 0;
    }
    int l = 1, r = N;
    while (l + 1 != r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r;
    return 0;
}