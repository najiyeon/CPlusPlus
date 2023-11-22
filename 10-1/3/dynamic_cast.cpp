#include <iostream>
#include <vector>

using namespace std;

class B{
public:
    virtual ~B(){}
};

class C : public B{
public:
    void test_C() {cout << "C::test_C()" << endl;}
};

class D : public B{
public:
    void test_D() {cout << "D::test_D()" <<endl;}
};

int main(){
    vector<B*> arr;
    char command;

    while(true){
        cin >> command;
        if(command == '0'){
            for(int i=0; i<arr.size(); i++){
                C* c = dynamic_cast<C*>(arr[i]);
                if(c != NULL){
                    c->test_C();
                }
                D* d = dynamic_cast<D*>(arr[i]);
                if(d != NULL){
                    d->test_D();
                }
            
            }
            break;
        }
        if(command == 'B'){
            arr.push_back(new B());
        }
        if(command == 'C'){
            arr.push_back(new C());
        }
        if(command == 'D'){
            arr.push_back(new D());
        }
    }

    return 0;
}