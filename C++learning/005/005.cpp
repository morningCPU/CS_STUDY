#include <iostream>
using namespace std;

class A
{
private:
    int arr[5];

public:
    A(int arr[])
    {
        for (int i = 0; i < 5; ++i)
        {
            this->arr[i] = arr[i];
        }
    }
    A operator+(int arr[])
    {
        int tmp[5];
        for (int i = 0; i < 5; ++i)
        {
            tmp[i] = this->arr[i] + arr[i];
        }
        return A(tmp);
    }
    A operator+(A a)
    {
        int tmp[5];
        for (int i = 0; i < 5; ++i)
        {
            tmp[i] = this->arr[i] + a.arr[i];
        }
        return A(tmp);
    }
    A operator+=(A a)
    {
        int tmp[5];
        for (int i = 0; i < 5; ++i)
        {
            tmp[i] = this->arr[i] + a.arr[i];
        }
        return A(tmp);
    }
    void print()
    {
        for (int i = 0; i < 5; ++i)
        {
            cout << arr[i] << " \n"[i == 4];
        }
    }
};

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    A obj1(a);
    obj1.print();
    A obj2(b);
    obj2.print();
    obj1 += obj2;
    obj1.print();
    return 0;
}