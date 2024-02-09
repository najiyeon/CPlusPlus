#include "my_container.h"
#include <iostream>

using namespace std;

int main(){
    int intnum, realnum, strnum;

    cin >> intnum;
    MyContainer<int> intarr(intnum);
    cin >> intarr;
    cout << intarr << endl;

    cin >> realnum;
    MyContainer<double> realarr(realnum);
    cin >> realarr;
    cout << realarr << endl;

    cin >> strnum;
    MyContainer<string> strarr(strnum);
    cin >> strarr;
    cout << strarr << endl;

    return 0;
}