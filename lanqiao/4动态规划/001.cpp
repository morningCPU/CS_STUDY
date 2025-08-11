#include <bits/stdc++.h>
using namespace std;

void f(int *list, int level, int k, int m, int h, int *slist)
{
    if (level == h)
    {
        for (int i = 0; i < h; ++i)
            cout << slist[i];
        cout << '\n';
        level = 0;
    }
    else
    {
        for (int i = k; i <= m - h + level + 1; ++i)
        {
            slist[level] = list[i];
            f(list, level + 1, i + 1, m, h, slist);
        }
    }
}

int main()
{
    int list[] = {1, 2, 3};
    int slist[100];
    f(list, 0, 0, 2, (sizeof(list) / sizeof(list[0])) - 1, slist);
    return 0;
}