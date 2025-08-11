#include <iostream>
#include "A.h"
using namespace std;

int main()
{
    A a(3);
    A b(a);
    a.print();
    b.print();
    return 0;
}
