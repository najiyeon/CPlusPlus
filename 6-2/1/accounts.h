#ifndef __accounts__
#define __accounts__

#include <iostream>
using namespace std;

class Account{
    int id;
    int balance;
public:
    Account();
    Account(int _id);
    int getid();
    int getbalance();
    void setbalance(int _balance);
};

class AccountManager{
    Account *accounts;
    int count;
public:
    AccountManager();
    ~AccountManager();
    void newaccount();
    void deposit(int _id, int _ammount);
    void withdraw(int _id, int _ammount);
    void transfer(int _id1, int _id2, int _ammount);
    Account *getaccount(int _id);
    int getcount();
    void setcount(int _count);
};

#endif