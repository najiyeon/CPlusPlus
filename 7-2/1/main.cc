#include "message.h"
#include <iostream>

using namespace std;

int main(){
    MessageBook mbook;
    while(true){
        string command;
        cin >> command;
        if(command == "quit"){
            break;
        }
        else if(command == "add"){
            int number;
            string message;
            cin >> number;
            cin.ignore();
            getline(cin, message);
            mbook.AddMessage(number, message);
        }
        else if(command == "delete"){
            int number;
            cin >> number;
            mbook.DeleteMessage(number);
        }
        else if(command == "print"){
            int number;
            cin >> number;
            cout << mbook.GetMessage(number) << endl;
        }
        else if(command == "list"){
            vector<int> numbers = mbook.GetNumbers();
            for(int i = 0; i < numbers.size(); i++){
                cout << numbers[i] << ": " << mbook.GetMessage(numbers[i]) << endl;
            }
        }
    }

    return 0;
}