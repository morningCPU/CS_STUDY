// 特殊三角形
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;

int ans[N + 10];
int pre[N + 10];

void init()
{
    for (int a = 1;; a++)
    { // 枚举a
        if (a * (a + 1) * (a + 2) > N)
            break;
        for (int b = a + 1;; b++)
        { // 枚举b
            if (a * b * (b + 1) > N)
                break;
            for (int c = b + 1;; c++)
            { // 枚举c
                if (a * b * c > N)
                    break;
                if (a + b > c && a + c > b && b + c > a)
                {
                    ans[a * b * c]++;
                }
            }
        }
    }
    pre[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        pre[i] = pre[i - 1] + ans[i];
    }
}

int main(void)
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << '\n';
    }
    return 0;
}