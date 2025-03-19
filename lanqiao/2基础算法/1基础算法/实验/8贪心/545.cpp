// 谈判
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1005;

int main()
{
    priority_queue<int, vector<int>, greater<int>> q;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    ll ans = 0;
    while (q.size() != 1)
    {
        int tmp = 0;
        tmp += q.top();
        q.pop();
        tmp += q.top();
        q.pop();
        ans += tmp;
        q.push(tmp);
    }
    cout << ans;
    return 0;
}
