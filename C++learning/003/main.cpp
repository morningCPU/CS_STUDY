#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
using namespace std;

int main()
{
    A *p = new B;
    delete p;
    return 0;
}