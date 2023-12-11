#include "my_string2.h"
#include<iostream>
#include<string>

using namespace std;

MyString2::MyString2(const MyString2& b){
    str = b.str;
}

MyString2 MyString2::operator+(const MyString2& b){
    str += b.str;
    return *this;
}

MyString2 MyString2::operator*(const int b){
    string temp = str;
    for(int i = 1; i < b; i++){
        str += temp;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, MyString2& my_string){
    out << my_string.str;
    return out;
}

std::istream& operator>>(std::istream& in, MyString2& my_string){
    in >> my_string.str;
    return in;
}