#include <iostream>

class fraction
{
public:
    // 编写fraction类构造函数，要求分子默认为0，分母默认为1
    fraction(int numerator = 0, int denominator = 1)
    {
        this->numerator = numerator;
        this->denominator = denominator;
        reduction();
    }

    void reduction()
    {
        // 补充约分函数的代码，注意处理分母为负的情况
        int op = 1;
        if (numerator * denominator < 0)
            op = -1;

        numerator = abs(numerator);
        denominator = abs(denominator);
        int tmp = gcd(numerator, denominator);
        numerator /= tmp;
        denominator /= tmp;
        numerator *= op;
    }

    void make_common_denominator(fraction &f)
    {
        // 补充通分函数的代码，注意参数是引用
        int tmp = abs(denominator) * abs(f.denominator) / gcd(abs(denominator), abs(f.denominator));
        numerator *= tmp / abs(denominator);
        f.numerator *= tmp / abs(f.denominator);
        denominator = tmp;
        f.denominator = tmp;
    }

    void print() // 输出特定格式的分数，不需要更改
    {
        reduction();
        std::cout << '(' << numerator << '/' << denominator << ')';
    }

    fraction add(fraction &f)
    {
        // 完成加法函数的编写，这里f是引用类型
        fraction tmp = f;
        int tmp_numerator = numerator;
        int tmp_denominator = denominator;
        make_common_denominator(tmp);
        tmp.numerator += numerator;
        tmp.denominator = denominator;
        numerator = tmp_numerator;
        denominator = tmp_denominator;
        return tmp;
    }

private:
    int numerator;        // 分子
    int denominator;      // 分母
    int gcd(int x, int y) // 最大公约数，供约分函数使用
    {
        int z{x % y};
        while (z != 0)
        {
            x = y;
            y = z;
            z = x % y;
        }
        return y;
    }
};

int main()
{
    // main函数的代码不需要更动
    int numerator1{}, denominator1{}, numerator2{}, denominator2{}; // 两个有理数各自的分子和分母
    std::cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;
    fraction f1{numerator1, denominator1}, f2{numerator2, denominator2};
    fraction f3{f1.add(f2)};
    f1.print();
    std::cout << '+';
    f2.print();
    std::cout << '=';
    f3.print();
}