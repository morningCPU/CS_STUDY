#include <bits\stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> data = {1, 2, 3, 4, 5};
    for (auto i : data)
    {
        cout << i;
    }
    cout << '\n';
    while (next_permutation(data.begin(), data.end()))
    {
        for (auto i : data)
        {
            cout << i;
        }
        cout << '\n';
    }
    return 0;
}