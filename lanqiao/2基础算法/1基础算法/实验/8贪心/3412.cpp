#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 9;
using ll = long long;
ll a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll ans = 1e18;
    for (int i = 2; i <= n; ++i)
    {
        ans = min(ans, a[i] - a[i - 1]);
    }
    cout << ans;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+9;
// using ll = long long;
// ll a[N],diff[N];

// int main()
// {
//     int n;cin >> n;
//     for(int i = 1;i<=n;++i) cin >> a[i];
//     sort(a + 1,a+1+n);
//     for(int i = 1;i<=n;++i) diff[i] = a[i] - a[i-1];
//     sort(diff+1,diff+1+n);
//     cout << diff[1];
//     return 0;
// }