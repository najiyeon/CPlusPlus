#include <iostream>
using namespace std;

class Animal{
public:
    Animal(const string& _name, int _age);
    virtual void printInfo(){}
protected:
    string name;
    int age;
};


class Zebra: public Animal{
public:
    Zebra(const string& _name, int _age, int _numStripes);
    void printInfo();
private:
    int numStripes;
};

class Cat: public Animal{
public:
    Cat(const string& _name, int _age, const string& _favoriteToy);
    void printInfo();
private:
    string favoriteToy;
};
