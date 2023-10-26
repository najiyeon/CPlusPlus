#include "intset.h"
#include <iostream>

using namespace std;

int main(){
    IntegerSet iset;
    string input;
    int num;

    while(true){
        cin >> input;
        if(input == "add"){
            cin >> num;
            iset.AddNumber(num);
        }
        else if(input == "del"){
            cin >> num;
            iset.DeleteNumber(num);
        }
        else if(input == "get"){
            cin >> num;
            cout << iset.GetItem(num) << endl;
        }
        else if(input == "quit"){
            break;
        }
    }

    return 0;
}