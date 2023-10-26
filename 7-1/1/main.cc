#include <iostream>
#include <vector>
#include <string>
#include "sorted.h"

using namespace std;

int main(){
    SortedArray sarr;
    int num;
    string input;

    while(true){
        while(cin >> num){
            sarr.AddNumber(num);
        }

        cin.clear();
        cin >> input;
        if(input == "ascend"){
            vector<int> output = sarr.GetSortedAscending();
            for(int i = 0; i < output.size(); i++){
                cout << output[i] << " ";
            }
            cout << endl;
        }
        else if(input == "descend"){
            vector<int> output = sarr.GetSortedDescending();
            for(int i = 0; i < output.size(); i++){
                cout << output[i] << " ";
            }
            cout << endl;
        }
        else if(input == "max"){
            cout << sarr.GetMax() << endl;
        }
        else if(input == "min"){
            cout << sarr.GetMin() << endl;
        }
        else if(input == "quit"){
            break;
        }
    }

    return 0;
}