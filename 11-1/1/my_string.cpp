#include "my_string.h"
#include<iostream>
#include<string>

using namespace std;

MyString& MyString::operator=(const MyString& b){
    str = b.str;
    return *this;
}

MyString MyString::operator+(const MyString& b){
    str += b.str;
    return *this;
}

MyString MyString::operator*(const int b){
    string temp = str;
    for(int i = 1; i < b; i++){
        str += temp;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, MyString& my_string){
    out << my_string.str;
    return out;
}

std::istream& operator>>(std::istream& in, MyString& my_string){
    in >> my_string.str;
    return in;
}