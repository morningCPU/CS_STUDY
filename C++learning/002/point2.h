#ifndef POINT2_H
#define POINT2_H

#include <iostream>

class Point2
{
private:
    int x;
    int y;
    Point2(int x, int y);
    friend class Point3;

public:
    void print();
};

#endif