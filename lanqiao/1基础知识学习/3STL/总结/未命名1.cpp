#include <iostream>
#define ll long long
using namespace std;
const ll N = 805;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    ll data[N][N];
    for (ll i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < n; ++j)
        {
            data[i][j] = s[j] - '0';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << data[i][j];
        }
        cout << '\n';
    }
    ll count = 0;
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < n; ++j)
        {
            for (ll k = 0; k < n; ++k)
            {
                if (i != j && j != k && i != k && data[i][j] == 1 && data[i][k] == 1 && data[j][k] == 1)
                {
                    count++;
                }
            }
        }
    }
    cout << count << '\n';
    return 0;
}
