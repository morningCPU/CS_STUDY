#include "B.h"
#include <iostream>

B::B()
{
    std::cout << "B created\n";
}

B::~B()
{
    std::cout << "B killed\n";
}

void B::print()
{
    std::cout << "this is B \n";
}