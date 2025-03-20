#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n = 3;
int cnt[N];
int prefix[N];                              // n为n边形，cnt数组用于记录1到e6的所有乘积的个数 ，prefix数组用于计算cnt数组的前缀和
void dfs(int dep, int st, int sum, int mul) // dfs用于计算1到1e6的所有乘积个数
{
    if (mul > 1e6)
        return; // 剪枝1             //st为上一层的边长，sum为前面所有的边长总和
                // mul为前面所有边长的乘积
    if (dep == n + 1)
    {
        cnt[mul]++;
        return;
    }
    int up = pow(1e6 * 1.0 / mul, 1.0 / (n - dep + 1)) + 3;       // 剪枝2，up为n边形长度的最大值
    for (int j = st + 1; j < (dep == n ? min(sum, up) : up); j++) // 剪枝3  1递归中怎么写递增系列2其他边的总和>最后一条最大边判断n边形是否合法，
    {
        dfs(dep + 1, j, sum + j, mul * j);
        // 无需恢复现场，做了标记才需要
    }
}
int main()
{
    int t;
    cin >> t;
    dfs(1, 0, 0, 1);
    for (int i = 1; i <= 1e6; i++) // 求cnt数组的前缀和
    {
        prefix[i] = prefix[i - 1] + cnt[i];
    }
    for (int i = 1; i <= t; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl; // 求区间和
    }
    return 0;
}