#ifndef A_H
#define A_H

class A
{
private:
    int a;
    bool def;

public:
    A(int a);
    A();
    A(const A &t);
    ~A();
    void print();
};

#endif