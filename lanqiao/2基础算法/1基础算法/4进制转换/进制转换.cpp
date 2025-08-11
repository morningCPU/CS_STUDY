#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 1; i <= 2024; ++i)
    {
        int n = i;
        int sum1 = 0;
        while (n)
        {
            sum1 += n % 2;
            n /= 2;
        }
        n = i;
        int sum2 = 0;
        while (n)
        {
            sum2 += n % 4;
            n /= 4;
        }
        if (sum1 == sum2)
        {

            count++;
        }
    }
    cout << count;
    return 0;
}