#include "setfunc.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;

set<int> parseSet(const string& str){
    set<int> result;
    string temp;
    int count = 2;

    temp = str.substr(count, str.find(" ") - count);
    count += str.find(" ") - count + 1;
    result.insert(stoi(temp));

    while(count < str.find("}")){
        temp = str.substr(count, str.find(" ", count) - count);
        count += str.find(" ", count) - count + 1;
        result.insert(stoi(temp));
    }

    return result;
}

void printSet(const set<int>& _set){
    cout << "{ ";
    for(set<int>::iterator it = _set.begin(); it != _set.end(); it++){
        cout << *it << " ";
    }
    cout << "}" << endl;
}

set<int> getIntersection(const set<int>& set1, const set<int>& set2){
    set<int> result;
    for(set<int>::iterator it1 = set1.begin(); it1 != set1.end(); it1++){
        for(set<int>::iterator it2 = set2.begin(); it2 != set2.end(); it2++){
            if(*it1 == *it2){
                result.insert(*it1);
            }
            else if(*it1 < *it2){
                break;
            }
        }
    }

    return result;
}

set<int> getUnion(const set<int>& set1, const set<int>& set2){
    set<int> result;
    for(set<int>::iterator it1 = set1.begin(); it1 != set1.end(); it1++){
        result.insert(*it1);
    }
    for(set<int>::iterator it2 = set2.begin(); it2 != set2.end(); it2++){
        result.insert(*it2);
    }

    return result;
}

set<int> getDifference(const set<int>& set1, const set<int>& set2){
    set<int> result;

    for(set<int>::iterator it1 = set1.begin(); it1 != set1.end(); it1++){
        result.insert(*it1);
        for(set<int>::iterator it2 = set2.begin(); it2 != set2.end(); it2++){
            if(*it1 == *it2){
                result.erase(*it1);
                break;
            }
            else if(*it1 < *it2){
                break;
            }
        }
    }

    return result;
}
