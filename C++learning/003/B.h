#ifndef B_H
#define B_H
#include "A.h"

class B : public A
{
public:
    B();
    ~B();
    void print();
};

#endif