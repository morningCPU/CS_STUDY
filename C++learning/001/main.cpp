#include <iostream>
#include "point3d.h"
using namespace std;

int main()
{
    Point3d *a = new Point3d[10];
    delete[] a;
    return 0;
}