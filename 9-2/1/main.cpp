#include "animal.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<Animal*> animals;
    char type;
    string name;
    int age;
    int numStripes;
    string favoriteToy;

    while(true){
        cin >> type;
        if(type == '0') break;
        if(type == 'z'){
            cin >> name >> age >> numStripes;
            animals.push_back(new Zebra(name, age, numStripes));
        }
        else if(type == 'c'){
            cin >> name >> age >> favoriteToy;
            animals.push_back(new Cat(name, age, favoriteToy));
        }
    }

    for(int i = 0; i < animals.size(); i++){
        animals[i]->printInfo();
    }

    return 0;
}