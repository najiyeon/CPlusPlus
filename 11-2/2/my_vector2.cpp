#include "my_vector2.h"
#include <iostream>

using namespace std;

MyVector2::MyVector2(){
    length = 0;
    a = NULL;
}

MyVector2::MyVector2(int length){
    this->length = length;
    if(a != NULL)
        delete[] a;
    a = new double[length];
}

MyVector2::MyVector2(const MyVector2& mv){
    length = mv.length;
    a = new double[length];
    for (int i = 0; i < length; i++)
        a[i] = mv.a[i];
}

MyVector2::~MyVector2(){
    if (a != NULL)
        delete[] a;
}

MyVector2 MyVector2::operator+(const MyVector2& b){
    if (a == NULL || b.a == NULL)
        return MyVector2();

    if (length != b.length)
        return MyVector2();

    for (int i = 0; i < length; i++)
        a[i] += b.a[i];

    return *this;
}

MyVector2 MyVector2::operator-(const MyVector2& b){
    if (a == NULL || b.a == NULL)
        return MyVector2();

    if (length != b.length)
        return MyVector2();

    for (int i = 0; i < length; i++)
        a[i] -= b.a[i];

    return *this;
}

MyVector2 MyVector2::operator+(const int b){
    if (a == NULL)
        return MyVector2();

    for (int i = 0; i < length; i++)
        a[i] += b;

    return *this;
}

MyVector2 MyVector2::operator-(const int b){
    if (a == NULL)
        return MyVector2();

    for (int i = 0; i < length; i++)
        a[i] -= b;

    return *this;
}

ostream& operator<<(ostream& out, MyVector2& b){
    if (b.a == NULL)
        return out;

    for (int i = 0; i < b.length; i++)
        out << b.a[i] << " ";

    return out;
}

istream& operator>>(istream& in, MyVector2& b){
    if (b.a == NULL)
        return in;

    for (int i = 0; i < b.length; i++)
        in >> b.a[i];

    return in;
}