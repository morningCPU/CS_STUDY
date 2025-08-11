#ifndef A_H
#define A_H
#include <iostream>
using namespace std;

class A
{
public:
    A() : i(0)
    {
        cout << "A :: A()" << endl;
    }
    ~A()
    {
        cout << "A:: ~A()" << endl;
    }
    void print() { cout << "A::f()" << i << endl; }

protected:
    void set(int ii) { i = ii; }

private:
    int i;
};

#endif