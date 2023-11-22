#include "shapes.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<Shape*> arr;
    char command;
    double width, height;

    while(true){
        cin >> command;
        if(command == '0'){
            for(int i = 0; i < arr.size(); i++){
                cout << arr[i]->getArea() << endl;
            }
            break;
        }
        if(command == 'r'){
            cin >> width >> height;
            arr.push_back(new Rectangle(width, height));
        }
        if(command == 't'){
            cin >> width >> height;
            arr.push_back(new Triangle(width, height));
        }
    }


    return 0;
}