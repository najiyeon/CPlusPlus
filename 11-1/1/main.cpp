#include "my_string.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string command;
    string _obj1, _obj2;
    MyString obj1, obj2;
    MyString a, b;
    string op;
    int int1;

    cin >> command;
    if(command == "quit") return 0;
    else if(command == "new"){
        cout << "enter a" << endl;
        cin >> a;
        cout << "enter b" << endl;
        cin >> b;
    }

    while(true){
        cin >> _obj1;
        if (_obj1 == "quit") return 0;
        else if (_obj1 == "new"){
            cout << "enter a" << endl;
            cin >> a;
            cout << "enter b" << endl;
            cin >> b;
            continue;
        }
        else if (_obj1 == "a") obj1 = a;
        else if (_obj1 == "b") obj1 = b;

        cin >> op;
        if(op == "+"){
            cin >> _obj2;
            if (_obj2 == "a") obj2 = a;
            else if (_obj2 == "b") obj2 = b;
            obj1 = obj1 + obj2;
        }
        else if(op == "*"){
            cin >> int1;
            obj1 = obj1 * int1;
        }

        cout << obj1 << endl;
    }

    return 0;
}