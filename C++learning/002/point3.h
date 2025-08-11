#ifndef POINT3_H
#define POINT3_H
#include "point2.h"
#include <iostream>

class Point3 : public Point2
{
private:
    int z;

public:
    Point3(int x, int y, int z);

public:
    void print(int i = 0);
};

#endif