#include "main.h"

int main()
{
    A a;
    A b;
    a.f(); // 这里是调用类的函数而不是调用的对象a的函数
    b.f();
    a.t(3);
    b.t(6);
    cout << a.i << '\n';
    cout << b.i << '\n';
    system("pause");
}