#include "point3.h"
#include <iostream>
Point3::Point3(int x, int y, int z) : Point2(x, y), z(z)
{
}

void Point3::print(int i)
{
    std::cout << x << ' ' << y << ' ' << z << ' ' << i << '\n';
}