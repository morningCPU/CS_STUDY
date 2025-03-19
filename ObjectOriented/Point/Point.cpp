#include "Point.h"

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::print() const
{
    cout << x << ' ' << y << '\n';
}

void Point::move(int dx, int dy)
{
    x += dx;
    y += dy;
}