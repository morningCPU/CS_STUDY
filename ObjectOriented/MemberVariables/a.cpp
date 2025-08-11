#include "a.h"

void A::f()
{
    i = 20; // 这里是对对象的i进行处理，比如 A a 则是 a的i变量
    cout << i << endl;
}

void A::t(int n)
{
    i += n;
    cout << i << endl;
}