#include "C.h"
#include <iostream>

C::C()
{
    std::cout << "C created\n";
}

C::~C()
{
    std::cout << "C killed\n";
}

void C::print()
{
    std::cout << "this is C\n";
}