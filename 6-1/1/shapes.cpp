#include <iostream>
#include "shapes.h"

using namespace std;

void Circle::setvars(int _x, int _y, int _radius){
    x = _x;
    y = _y;
    radius = _radius;
}

void Circle::calarea(){
    area = 3.14 * radius * radius;
}

void Circle::calperimeter(){
    perimeter = 2 * 3.14 * radius;
}

void Circle::show(){
    cout << "area: " << area << ", perimeter: " << perimeter << endl;
}

void Rectangle::setvars(int _x1, int _y1, int _x2, int _y2){
    x1 = _x1;
    y1 = _y1;
    x2 = _x2;
    y2 = _y2;
}

void Rectangle::calarea(){
    area = (x2 - x1) * (y1 - y2);
}

void Rectangle::calperimeter(){
    perimeter = 2 * ((x2 - x1) + (y1 - y2));
}

void Rectangle::show(){
    cout << "area: " << area << ", perimeter: " << perimeter << endl;
}