#ifndef B_H
#define B_H
#include "a.h"

class B : public A
{
public:
    void f()
    {
        set(20);
        print();
    }
};

#endif