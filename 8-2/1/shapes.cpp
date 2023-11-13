#include "shapes.h"
#include <iostream>

using namespace std;

// Shape
Shape::Shape(){}

Shape::Shape(int xpos, int ypos, char brush){
    this->xpos = xpos;
    this->ypos = ypos;
    this->brush = brush;
}

double Shape::GetArea(){
    return area;
}

int Shape::GetPerimeter(){
    return perimeter;
}

// Square
Square::Square(int xpos, int ypos, int width, char brush): Shape(xpos, ypos, brush){
    this->width = width;
    area = width * width;
    perimeter = 4 * width;
}

void Square::Draw(int canvas_width, int canvas_height){
    cout << " ";
    for(int i = 0; i < canvas_width; i++){
        cout << i;
    }
    cout << endl;
    for(int i = 0; i < canvas_height; i++){
        cout << i;
        for(int j = 0; j < canvas_width; j++){
            if(i >= ypos && i < ypos + width && j >= xpos && j < xpos + width){
                cout << brush;
            }
            else{
                cout << '.';
            }
        }
        cout << endl;
    }
}

// Rectangle
Rectangle::Rectangle(int xpos, int ypos, int width, int height, char brush): Shape(xpos, ypos, brush){
    this->width = width;
    this->height = height;
    area = width * height;
    perimeter = 2 * (width + height);
}

void Rectangle::Draw(int canvas_width, int canvas_height){
    cout << " ";
    for(int i = 0; i < canvas_width; i++){
        cout << i;
    }
    cout << endl;
    for(int i = 0; i < canvas_height; i++){
        cout << i;
        for(int j = 0; j < canvas_width; j++){
            if(i >= ypos && i < ypos + height && j >= xpos && j < xpos + width){
                cout << brush;
            }
            else{
                cout << '.';
            }
        }
        cout << endl;
    }
}

// Diamond
Diamond::Diamond(int xpos, int ypos, int dist, char brush): Shape(xpos, ypos, brush){
    this->dist = dist;
    area = (2*dist+1) * (2*dist+1) * 0.5;
    perimeter = 4 * (dist+1);
}

void Diamond::Draw(int canvas_width, int canvas_height){
    cout << " ";
    for(int i = 0; i < canvas_width; i++){
        cout << i;
    }
    cout << endl;
    for(int i = 0; i < canvas_height; i++){
        cout << i;
        for(int j = 0; j < canvas_width; j++){
            if(i>=ypos && i<=ypos+(dist*2) && j>=xpos-dist && j<=xpos+dist && (abs(i-ypos-dist)+abs(j-xpos) < (dist+1))){
                cout << brush;
            }
            else{
                cout << '.';
            }
        }
        cout << endl;
    }
}