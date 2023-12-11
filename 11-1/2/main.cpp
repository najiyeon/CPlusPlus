#include "my_string2.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string command;
    string _obj1, _obj2;
    MyString2 a, b;
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

        cin >> op;
        if(op == "+"){
            cin >> _obj2;
            if (_obj1 == "a"){
                MyString2 obj1 = a;
                if (_obj2 == "a"){ 
                    MyString2 obj2 = a;
                    MyString2 temp = obj1 + obj2;
                    cout << temp << endl;
                }
                else if (_obj2 == "b"){ 
                    MyString2 obj2 = b;
                    MyString2 temp = obj1 + obj2;
                    cout << temp << endl;
                }
            }
            else if (_obj1 == "b"){ 
                MyString2 obj1 = b;
                if (_obj2 == "a"){ 
                    MyString2 obj2 = a;
                    MyString2 temp = obj1 + obj2;
                    cout << temp << endl;
                }
                else if (_obj2 == "b"){ 
                    MyString2 obj2 = b;
                    MyString2 temp = obj1 + obj2;
                    cout << temp << endl;
                }
            }
            
        }
        else if(op == "*"){
            cin >> int1;
            if (_obj1 == "a"){
                MyString2 obj1 = a;
                MyString2 temp = obj1 * int1;
                cout << temp << endl;
            }
            else if (_obj1 == "b"){ 
                MyString2 obj1 = b;
                MyString2 temp = obj1 * int1;
                cout << temp << endl;
            }
        }
    }

    return 0;
}