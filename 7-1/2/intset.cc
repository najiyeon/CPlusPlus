#include "intset.h"
#include <iostream>

using namespace std;

IntegerSet::IntegerSet()
{
}

IntegerSet::~IntegerSet()
{
}

void IntegerSet::AddNumber(int num)
{
    int check = 0;
    for(int i = 0; i < numbers_.size(); i++){
        if(numbers_[i] == num){
            check = 1;
            break;
        }
    }
    if(check == 0){
        // array saves numbers in a sorted state
        for(int i = 0; i < numbers_.size(); i++){
            if(numbers_[i] > num){
                numbers_.insert(numbers_.begin() + i, num);
                break;
            }
        }
        if(numbers_.size() == 0) numbers_.push_back(num);
    }
    
    for(int i = 0; i < numbers_.size(); i++){
        cout << numbers_[i] << " ";
    }
    cout << endl;
}

void IntegerSet::DeleteNumber(int num)
{
    for(int i = 0; i < numbers_.size(); i++){
        if(numbers_[i] == num){
            numbers_.erase(numbers_.begin() + i);
            break;
        }
    }
    for(int i = 0; i < numbers_.size(); i++){
        cout << numbers_[i] << " ";
    }
    cout << endl;
}

int IntegerSet::GetItem(int pos)
{
    if(pos < 0 || pos >= numbers_.size()){
        return -1;
    }
    return numbers_[pos];
}

vector<int> IntegerSet::GetAll()
{
    return numbers_;
}
