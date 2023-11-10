#include "rect.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int width, int height){
    this->width = width;
    this->height = height;
}

int Rectangle::getArea(){
    area = width * height;
    return area;
}

int Rectangle::getPerimeter(){
    perimeter = 2 * (width + height);
    return perimeter;
}

Square::Square(int width): Rectangle(width, width){
    this->width = width;
}

void Square::print(){
    cout << width << "×" << width << " Square" << endl;
}

NonSquare::NonSquare(int width, int height): Rectangle(width, height){
    this->width = width;
    this->height = height;
}

void NonSquare::print(){
    cout << width << "×" << height << " NonSquare" << endl;
}



