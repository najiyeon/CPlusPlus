#pragma once

class Circle{
    int x, y;
    int radius;
    double area;
    double perimeter;
public:
    void setvars(int _x, int _y, int _radius);
    void calarea();
    void calperimeter();
    void show();
};

class Rectangle{
    int x1, y1; // top-left
    int x2, y2; // bottom-right
    double area;
    double perimeter;
public:
    void setvars(int _x1, int _y1, int _x2, int _y2);
    void calarea();
    void calperimeter();
    void show();
};