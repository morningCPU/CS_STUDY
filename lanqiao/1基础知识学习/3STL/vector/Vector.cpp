#include <bits\stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> num = {1, 4, 2, 3, 5, 6, 3, 2, 4, 6, 2};
    sort(num.begin(), num.end());
    num.erase(unique(num.begin(), num.end()), num.end());
    for (auto i : num)
    {
        cout << i << ' ';
    }
    cout << '\n';
    if (num.empty())
    {
        cout << "向量为空\n";
    }
    else
    {
        cout << "向量不为空\n";
    }
    num.clear();
    if (num.empty())
    {
        cout << "向量为空\n";
    }
    else
    {
        cout << "向量不为空\n";
    }
    num.push_back(1);
    if (num.empty())
    {
        cout << "向量为空\n";
    }
    else
    {
        cout << "向量不为空\n";
    }
    num.pop_back();
    if (num.empty())
    {
        cout << "向量为空\n";
    }
    else
    {
        cout << "向量不为空\n";
    }
    return 0;
}