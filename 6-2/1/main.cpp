#include <iostream>
#include <string>
#include <sstream>

#include "accounts.h"

using namespace std;

template <typename T>
string to_string(T value)
{
    std::ostringstream os ;
    os << value ;
    return os.str() ;
}

void infoLog(AccountManager *_accountmanager, int _id)
{
    if(_accountmanager->getaccount(_id) == NULL) return;

    string output = "";
    output += "Balance of user ";
    output += to_string(_id);
    output += ": ";
    output += to_string(_accountmanager->getaccount(_id)->getbalance());

    cout << output << endl;
}

bool process(AccountManager * accountmanager)
{
    char command;
    cout << "Job?" << endl;
    cin >> command;
    
    if(command == 'Q') return false;

    if(command == 'N'){
        accountmanager->newaccount();
        infoLog(accountmanager, accountmanager->getcount() - 1);
    }
    else if(command == 'D'){
        int id, balance;
        cin >> id >> balance;
        if(cin.fail()) return false;
        accountmanager->deposit(id, balance);
        infoLog(accountmanager, id);
    }
    else if(command == 'W'){
        int id, balance;
        cin >> id >> balance;
        if(cin.fail()) return false;
        accountmanager->withdraw(id, balance);
        infoLog(accountmanager, id);
    }
    else if(command == 'T'){
        int id1, id2, balance;
        cin >> id1 >> id2 >> balance;
        if(cin.fail()) return false;
        accountmanager->transfer(id1, id2, balance);
        if(id1 < id2){
            infoLog(accountmanager, id1);
            infoLog(accountmanager, id2);
        }
        else{
            infoLog(accountmanager, id2);
            infoLog(accountmanager, id1);
        }
    }

    cout << endl;
    
    return true;
}

int main(void)
{
    AccountManager *accountmanager = new AccountManager();
    while(process(accountmanager)){}
    delete accountmanager;
    return 0;
}
