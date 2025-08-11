#include <iostream>
#include "point3.h"
using namespace std;

void f(int &a)
{
    a = 1;
}

int main()
{
    int x = 2;
    cout << x << '\n';
    f(x);
    cout << x << '\n';
    return 0;
}