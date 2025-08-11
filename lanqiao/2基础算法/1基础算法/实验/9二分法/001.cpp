#include <iostream>
using namespace std;
int main()
{
    int a[20];
    double sum = 0;
    double ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        sum += a[i];
    ans = sum / n;
    cout << ans;
    return 0;
}