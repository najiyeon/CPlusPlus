#include "rect.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    string command;
    int width, height;

    while(true){
        cin >> command;
        if(command == "quit"){
            break;
        }
        if(command == "nonsquare"){
            cin >> width >> height;
            NonSquare nonsquare(width, height);
            nonsquare.print();
            cout << "Area: " << nonsquare.getArea() << endl;
            cout << "Perimeter: " << nonsquare.getPerimeter() << endl;
        }
        else if(command == "square"){
            cin >> width;
            Square square(width);
            square.print();
            cout << "Area: " << square.getArea() << endl;
            cout << "Perimeter: " << square.getPerimeter() << endl;
        }
    }

    return 0;
}