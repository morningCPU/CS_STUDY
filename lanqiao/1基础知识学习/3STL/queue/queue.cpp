#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    priority_queue<int, vector<int>, greater<int>> data;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int value;
        cin >> value;
        data.push(value);
    }
    int sum = 0;
    while (data.size() != 1)
    {
        int temp_sum = 0;
        temp_sum += data.top();
        data.pop();
        temp_sum += data.top();
        data.pop();
        sum += temp_sum;
        data.push(temp_sum);
    }
    cout << sum;
    return 0;
}