#include "A.h"
#include <iostream>
A::A() : a(1), def(true)
{
    std::cout << "default A " << this << "created\n";
}
A::A(int a) : a(a), def(false)
{
    std::cout << "A created\n";
}
A::A(const A &t) : a(t.a), def(t.def)
{
    std::cout << "copy A created\n";
}
A::~A()
{
    if (!def)
        std::cout << "A killed\n";
    else
        std::cout << "default A " << this << "killed\n";
};
void A::print()
{
    std::cout << a << '\n';
}