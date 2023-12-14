#include "my_vector2.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string command;
    string _obj1, _obj2;
    string op;
    int int1;
    int length;

    cin >> command;
    if(command == "quit") return 0;
    else if(command == "new"){
        cin >> length;
        MyVector2 a = MyVector2(length);
        MyVector2 b = MyVector2(length);
        cout << "enter a" << endl;
        cin >> a;
        cout << "enter b" << endl;
        cin >> b;

        // cout << "debug 1 :";
        // cout << a << endl;
        // cout << "debug 2 :";
        // cout << b << endl;

        while(true){
            cin >> _obj1;
            if (_obj1 == "quit") return 0;
            else if (_obj1 == "new"){
                cin >> length;
                MyVector2 a = MyVector2(length);
                MyVector2 b = MyVector2(length);
                cout << "enter a" << endl;
                cin >> a;
                cout << "enter b" << endl;
                cin >> b;
                continue;
            }

            cin >> op;
            if(op == "+"){
                cin >> _obj2;
                if (_obj2 == "a"){
                    MyVector2 obj2 = a;
                    if (_obj1 == "a"){
                        MyVector2 obj1 = a;
                        MyVector2 temp = obj1 + obj2;
                        cout << temp << endl;
                    }
                    else if (_obj1 == "b"){
                        MyVector2 obj1 = b;
                        MyVector2 temp = obj1 + obj2;
                        cout << temp << endl;
                    }
                }
                else if (_obj2 == "b"){
                    MyVector2 obj2 = b;
                    if (_obj1 == "a"){
                        MyVector2 obj1 = a;
                        MyVector2 temp = obj1 + obj2;
                        cout << temp << endl;
                    }
                    else if (_obj1 == "b"){
                        MyVector2 obj1 = b;
                        MyVector2 temp = obj1 + obj2;
                        cout << temp << endl;
                    }
                }
                else {
                    int1 = stoi(_obj2);
                    if (_obj1 == "a"){
                        MyVector2 obj1 = a;
                        MyVector2 temp = obj1 + int1;
                        cout << temp << endl;
                    }
                    else if (_obj1 == "b"){
                        MyVector2 obj1 = b;
                        MyVector2 temp = obj1 + int1;
                        cout << temp << endl;
                    }
                }
            }
            if(op == "-"){
                cin >> _obj2;
                if (_obj2 == "a"){
                    MyVector2 obj2 = a;
                    if (_obj1 == "a"){
                        MyVector2 obj1 = a;
                        MyVector2 temp = obj1 - obj2;
                        cout << temp << endl;
                    }
                    else if (_obj1 == "b"){
                        MyVector2 obj1 = b;
                        MyVector2 temp = obj1 - obj2;
                        cout << temp << endl;
                    }
                }
                else if (_obj2 == "b"){
                    MyVector2 obj2 = b;
                    if (_obj1 == "a"){
                        MyVector2 obj1 = a;
                        MyVector2 temp = obj1 - obj2;
                        cout << temp << endl;
                    }
                    else if (_obj1 == "b"){
                        MyVector2 obj1 = b;
                        MyVector2 temp = obj1 - obj2;
                        cout << temp << endl;
                    }
                }
                else {
                    int1 = stoi(_obj2);
                    if (_obj1 == "a"){
                        MyVector2 obj1 = a;
                        MyVector2 temp = obj1 - int1;
                        cout << temp << endl;
                    }
                    else if (_obj1 == "b"){
                        MyVector2 obj1 = b;
                        MyVector2 temp = obj1 - int1;
                        cout << temp << endl;
                    }
                }
            }
        }
    }

    return 0;
}