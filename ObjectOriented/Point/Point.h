#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;
class Point
{
public:
    Point(int x, int y);
    void print() const;
    void move(int dx, int dy);

private:
    int x;
    int y;
};

#endif