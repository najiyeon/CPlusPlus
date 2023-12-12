#include "my_vector.h"
#include <iostream>

using namespace std;

MyVector::MyVector(){
    length = 0;
    a = NULL;
}

MyVector::MyVector(int length){
    this->length = length;
    if(a != NULL)
        delete[] a;
    a = new double[length];
}

MyVector::~MyVector(){
    if (a != NULL)
        delete[] a;
}

MyVector& MyVector::operator=(const MyVector& b){
    if (this == &b)
        return *this;

    length = b.length;
    a = new double[length];
    for (int i = 0; i < length; i++)
        a[i] = b.a[i];

    return *this;
}

MyVector MyVector::operator+(const MyVector& b){
    if (a == NULL || b.a == NULL)
        return MyVector();

    if (length != b.length)
        return MyVector();

    for (int i = 0; i < length; i++)
        a[i] += b.a[i];

    return *this;
}

MyVector MyVector::operator-(const MyVector& b){
    if (a == NULL || b.a == NULL)
        return MyVector();

    if (length != b.length)
        return MyVector();

    for (int i = 0; i < length; i++)
        a[i] -= b.a[i];

    return *this;
}

MyVector MyVector::operator+(const int b){
    if (a == NULL)
        return MyVector();

    for (int i = 0; i < length; i++)
        a[i] += b;

    return *this;
}

MyVector MyVector::operator-(const int b){
    if (a == NULL)
        return MyVector();

    for (int i = 0; i < length; i++)
        a[i] -= b;

    return *this;
}

ostream& operator<<(ostream& out, MyVector& b){
    if (b.a == NULL)
        return out;

    for (int i = 0; i < b.length; i++)
        out << b.a[i] << " ";

    return out;
}

istream& operator>>(istream& in, MyVector& b){
    if (b.a == NULL)
        return in;

    for (int i = 0; i < b.length; i++)
        in >> b.a[i];

    return in;
}