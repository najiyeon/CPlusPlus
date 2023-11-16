#include <iostream>
#include <string>
#include <vector>

using namespace std;

class A{
public:
    A(int a){
        memberA = new int(a);
        cout << "new memberA" << endl;
    }
    ~A(){
        delete memberA;
        cout << "delete memberA" << endl;
    }
    virtual void print(){
        cout << "*memberA " << *memberA << endl;
    }
private:
    int* memberA;
};

class B: public A{
public:
    B(double b): A(1){
        memberB = new double(b);
        cout << "new memberB" << endl;
    }
    ~B(){
        delete memberB;
        cout << "delete memberB" << endl;
    }
    void print(){
        A::print();
        cout << "*memberB " << *memberB << endl;
    }
private:
    double* memberB;
};

class C: public B{
public:
    C(const string& c): B(1.1){
        memberC = new string(c);
        cout << "new memberC" << endl;
    }
    ~C(){
        delete memberC;
        cout << "delete memberC" << endl;
    }
    void print(){
        B::print();
        cout << "*memberC " << *memberC << endl;
    }
private:
    string* memberC;
};

int main(){
    int integer;
    double realnum;
    string str;
    cin >> integer >> realnum >> str;

    vector<A*> arr;
    arr.push_back(new A(integer));
    arr.push_back(new B(realnum));
    arr.push_back(new C(str));

    for(int i = 0; i < arr.size(); i++){
        arr[i]->print();
    }

    //deallocate memory
    for(int i = 0; i < arr.size(); i++){
        delete arr[i];
    }

    return 0;
}