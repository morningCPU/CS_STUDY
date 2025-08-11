#include "TicketMachine.h"
#include <iostream>
using namespace std;

// 构造函数，初始化PRICE为固定值（例如100），并初始化balance和total为0
TicketMachine::TicketMachine() : PRICE(100), balance(0), total(0)
{
}

TicketMachine::~TicketMachine()
{
}

void TicketMachine::showPrompt()
{
    cout << "Please insert money to buy a ticket." << endl;
}

void TicketMachine::insertMoney(int money)
{
    balance += money;
}

void TicketMachine::showBalance()
{
    cout << "Current balance: " << balance << endl;
}

void TicketMachine::printTicket()
{
    if (balance >= PRICE)
    {
        cout << "Ticket printed. Thank you!" << endl;
        total += PRICE;
        balance -= PRICE;
    }
    else
    {
        cout << "Insufficient balance. Please insert more money." << endl;
    }
}

void TicketMachine::showTotal()
{
    cout << "Total income: " << total << endl;
}