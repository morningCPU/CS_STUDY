// 异或森林
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 9;
int a[N], prefix[N], cnt[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        prefix[i] = prefix[i - 1] ^ a[i];
    cnt[0] = 1;
    int ans = n * (n + 1) / 2;
    for (int i = 1; i <= n; ++i)
    {
        for (ll j = 0; j <= 200; ++j)
        {
            ll sq = j * j;
            ans -= cnt[sq ^ prefix[i]];
        }
        cnt[prefix[i]]++;
    }
    cout << ans;
    return 0;
}