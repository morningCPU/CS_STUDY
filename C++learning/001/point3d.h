#ifndef POINT3D
#define POINT3D
#include <iostream>
using namespace std;

class Point3d
{
public:
    Point3d() : x(1), y(1), z(1)
    {
        cout << "Object " << this << " created\n";
    };
    Point3d(float x, float y, float z) : x(x), y(y), z(z)
    {
        cout << "Object " << this << " created\n";
    };
    ~Point3d()
    {
        cout << "Object " << this << " killed\n";
    }

public:
    void print();

private:
    float x;
    float y;
    float z;
};

#endif