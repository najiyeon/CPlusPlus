#include "accounts.h"

AccountManager::AccountManager(){
    accounts = new Account[10];
    count = 0;
}

AccountManager::~AccountManager(){
    delete[] accounts;
}

void AccountManager::newaccount(){
    if(count == 10){
        cout << "Account is full" << endl;
        return;
    }

    accounts[count] = Account(count);
    count++;
    cout << "Account for user " << count - 1 << " registered" << endl;
}

void AccountManager::deposit(int _id, int _ammount){
    for(int i = 0; i < count; i++){
        if(accounts[i].getid() == _id){
            accounts[i].setbalance(accounts[i].getbalance() + _ammount);
            cout << "Success: Deposit to user " << _id << " " << _ammount << endl;
            return;
        }
    }

    cout << "Account does not exist" << endl;
}

void AccountManager::withdraw(int _id, int _balance){
    for(int i = 0; i < count; i++){
        if(accounts[i].getid() == _id){
            if(accounts[i].getbalance() < _balance){
                cout << "Failure: Withdraw from user " << _id << " " << _balance << endl;
                return;
            }
            accounts[i].setbalance(accounts[i].getbalance() - _balance);
            cout << "Success: Withdraw from user " << _id << " " << _balance << endl;
            return;
        }
    }

    cout << "Account does not exist" << endl;
}

void AccountManager::transfer(int _id1, int _id2, int _balance){
    for(int i = 0; i < count; i++){
        if(accounts[i].getid() == _id1){
            if(accounts[i].getbalance() < _balance){
                cout << "Failure: Transfer from user " << _id1 << " to user " << _id2 << " " << _balance << endl;
                return;
            }
            for(int j = 0; j < count; j++){
                if(accounts[j].getid() == _id2){
                    accounts[i].setbalance(accounts[i].getbalance() - _balance);
                    accounts[j].setbalance(accounts[j].getbalance() + _balance);
                    cout << "Success: Transfer from user " << _id1 << " to user " << _id2 << " " << _balance << endl;
                    return;
                }
            }
        }
    }

    cout << "Account does not exist" << endl;
}

Account *AccountManager::getaccount(int _id){
    for(int i = 0; i < count; i++){
        if(accounts[i].getid() == _id){
            return &accounts[i];
        }
    }
    return NULL;
}

int AccountManager::getcount(){
    return count;
}

Account::Account(){
    id = -1;
    balance = -1;
}

Account::Account(int _id){
    id = _id;
    balance = 0;
}

int Account::getid(){
    return id;
}

int Account::getbalance(){
    return balance;
}

void Account::setbalance(int _balance){
    balance = _balance;
}
