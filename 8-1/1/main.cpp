#include "number.h"
#include <iostream>

using namespace std;

int main(){
    string command;
    int num;

    while (cin >> command){
        if (command == "number"){
            cin >> num;
            Number number;
            number.setNumber(num);
            cout << "getNumber(): " << number.getNumber() << endl;
        }
        else if (command == "square"){
            cin >> num;
            Square square;
            square.setNumber(num);
            cout << "getNumber(): " << square.getNumber() << endl;
            cout << "getSquare(): " << square.getSquare() << endl;
        }
        else if (command == "cube"){
            cin >> num;
            Cube cube;
            cube.setNumber(num);
            cout << "getNumber(): " << cube.getNumber() << endl;
            cout << "getSquare(): " << cube.getSquare() << endl;
            cout << "getCube(): " << cube.getCube() << endl;
        }
        else if (command == "quit"){
            break;
        }
    }

    return 0;
}