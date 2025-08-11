#include "A.h"
#include <iostream>

A::A()
{
    std::cout << "A created\n";
}

A::~A()
{
    std::cout << "A killed\n";
}

void A::print()
{
    std::cout << "this is A \n";
}