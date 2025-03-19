#ifndef TICKETMACHINE_H_
#define TICKETMACHINE_H_

class TicketMachine
{
public:
    TicketMachine();
    virtual ~TicketMachine();
    void showPrompt();
    void insertMoney(int money);
    void showBalance();
    void printTicket();
    void showTotal();

private:
    const int PRICE; // 票价，应该是一个固定的值
    int balance;     // 当前余额
    int total;       // 总收入
};

#endif