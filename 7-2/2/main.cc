#include "setfunc.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string str;
    string str1, str2;

    while(true){
        set<int> result;
        getline(cin, str);
        if(str == "0"){
            break;
        }
        str1 = str.substr(0, str.find("}") + 1);
        str2 = str.substr(str.find("}") + 4);

        if(str.find("+") != string::npos){
            result = getUnion(parseSet(str1), parseSet(str2));
            printSet(result);
        }
        else if(str.find("*") != string::npos){
            result = getIntersection(parseSet(str1), parseSet(str2));
            printSet(result);
        }
        else if(str.find("-") != string::npos){
            result = getDifference(parseSet(str1), parseSet(str2));
            printSet(result);
        }
    }


    return 0;
}