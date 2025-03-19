#include "TicketMachine.h"
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << b << '\n';
    TicketMachine tm;
    tm.insertMoney(100);
    tm.showBalance();
    tm.printTicket();
    tm.showTotal();
    system("pause");
    return 0;
}
