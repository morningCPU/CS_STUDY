#include "point2.h"
#include <iostream>
Point2::Point2(int x, int y) : x(x), y(y)
{
}

void Point2::print()
{
    std::cout << x << ' ' << y << '\n';
}