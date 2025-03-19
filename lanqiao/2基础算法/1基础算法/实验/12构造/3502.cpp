// 平方和
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n)
{
    return n - n / 4 - int(n % 4 == 2);
    // x = y^2 - z^2 -> x = (y-z)(y+z),设A = y-z,B = y+z
    // 则 x = AB,可以推出A,B同为奇数或者同为偶数
    // x 为奇数时 可以 A = 1,B = x 所以奇数一定成立
    // x 为偶数时 当x分解质因数2的个数>=2时一定成立，当个数为1时不成立
    // n/4:x 为偶数并且x分解质因数2的个数等于2时,x 可以分解为 2*k，k为奇数
    // n/4就是k的个数 即 (n/2)/2
    // 因为n/4会取整，无法考虑后面剩下的数，所以需要 n%4 == 2 进行判断
}

int main()
{
    ll l, r;
    cin >> l >> r;
    cout << f(r) - f(l - 1);
    return 0;
}
