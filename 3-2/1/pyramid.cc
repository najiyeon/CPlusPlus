#include <iostream>

using namespace std;

int main() {
    int type;
    int height;

    cout << "Input : ";
    cin >> type;

    cout << "Height : ";
    cin >> height;

    if(type == 1){
        for(int i=0; i<height; i++){
            for(int j=0; j<i+1; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

    if(type == 2){
        for(int i=0; i<height; i++){
            for(int j=height-i; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }

    if(type == 3){
        // a pyramid with the number of stars increasing by one as the line changes, until the middle, and decreasing by one after that.
        for(int i=0; i<height; i++){
            for(int j=0; j<i+1; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i=0; i<height-1; i++){
            for(int j=height-1-i; j>0; j--){
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}