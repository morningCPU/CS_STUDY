#ifndef C_H
#define C_H

#include "A.h"
#include <iostream>

class C : public A
{
public:
    C();
    ~C();
    void print();
};

#endif