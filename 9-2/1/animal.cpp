#include "animal.h"

Animal::Animal(const string& _name, int _age){
    name = _name;
    age = _age;
}

Zebra::Zebra(const string& _name, int _age, int _numStripes): Animal(_name, _age){
    numStripes = _numStripes;
}

void Zebra::printInfo(){
    cout << "Zebra, Name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << endl;
}

Cat::Cat(const string& _name, int _age, const string& _favoriteToy): Animal(_name, _age){
    favoriteToy = _favoriteToy;
}

void Cat::printInfo(){
    cout << "Cat, Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << endl;
}