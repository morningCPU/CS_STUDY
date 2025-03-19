#include <iostream>
using namespace std;
const int N = 1000;
int a[N];

int f(int n)
{
    int count = 1;
    for (int i = n / 2; i > 0; i--)
    {
        count += f(i);
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}