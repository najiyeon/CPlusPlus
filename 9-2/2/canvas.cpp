#include "canvas.h"
#include <iostream>

using namespace std;

Canvas::Canvas(size_t row, size_t col){
    this->row = row;
    this->col = col;
    canvas = new char*[row];
    for(int i = 0; i < row; i++){
        canvas[i] = new char[col];
        for(int j = 0; j < col; j++){
            canvas[i][j] = '.';
        }
    }
    Print();
}

Canvas::~Canvas(){
    for(int i = 0; i < row; i++){
        delete[] canvas[i];
    }
    delete[] canvas;
}

void Canvas::Resize(size_t w, size_t h){
    char** newCanvas = new char*[h];
    for(int i = 0; i < h; i++){
        newCanvas[i] = new char[w];
        for(int j = 0; j < w; j++){
            if(i < row && j < col){
                newCanvas[i][j] = canvas[i][j];
            }
            else{
                newCanvas[i][j] = '.';
            }
        }
    }
    for(int i = 0; i < row; i++){
        delete[] canvas[i];
    }
    delete[] canvas;
    canvas = newCanvas;
    row = h;
    col = w;
}

bool Canvas::DrawPixel(int x, int y, char brush){
    if(x < 0 || x >= col || y < 0 || y >= row){
        return false;
    }
    canvas[y][x] = brush;
    return true;
}

void Canvas::Print(){
    cout << " ";
    for(int i = 0; i < col; i++){
        cout << i%10;
    }
    cout << endl;
    for(int i = 0; i < row; i++){
        cout << i;
        for(int j = 0; j < col; j++){
            cout << canvas[i][j];
        }
        cout << endl;
    }
}

void Canvas::Clear(){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            canvas[i][j] = '.';
        }
    }
}

Rectangle::Rectangle(int x, int y, int width, int height, char brush){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->brush = brush;
}

void Rectangle::Draw(Canvas* canvas){
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            canvas->DrawPixel(x+j, y+i, brush);
        }
    }
}

void Rectangle::PrintInfo(){
    cout << "rect " << x << " " << y << " " << width << " " << height << " " << brush << endl;
}

UpTriangle::UpTriangle(int x, int y, int height, char brush){
    this->x = x;
    this->y = y;
    this->height = height;
    this->brush = brush;
}

void UpTriangle::Draw(Canvas* canvas){
    for(int i=0; i<height; i++){
        for(int j=0; j<i+1; j++){
            canvas->DrawPixel(x+j, y+i, brush);
            canvas->DrawPixel(x-j, y+i, brush);
        }
    }
}

void UpTriangle::PrintInfo(){
    cout << "tri_up " << x << " " << y << " " << height << " " << brush << endl;
}

DownTriangle::DownTriangle(int x, int y, int height, char brush){
    this->x = x;
    this->y = y;
    this->height = height;
    this->brush = brush;
}

void DownTriangle::Draw(Canvas* canvas){
    for(int i=0; i<height; i++){
        for(int j=0; j<i+1; j++){
            canvas->DrawPixel(x+j, y-i, brush);
            canvas->DrawPixel(x-j, y-i, brush);
        }
    }
}

void DownTriangle::PrintInfo(){
    cout << "tri_down " << x << " " << y << " " << height << " " << brush << endl;
}

Diamond::Diamond(int x, int y, int dist, char brush){
    this->x = x;
    this->y = y;
    this->dist = dist;
    this->brush = brush;
}

void Diamond::Draw(Canvas* canvas){
    for(int i=0; i<dist; i++){
        for(int j=0; j<dist-i; j++){
            canvas->DrawPixel(x+j, y+dist-1+i, brush);
            canvas->DrawPixel(x-j, y+dist-1+i, brush);
            canvas->DrawPixel(x+j, y+dist-1-i, brush);
            canvas->DrawPixel(x-j, y+dist-1-i, brush);
        }
    }
}

void Diamond::PrintInfo(){
    cout << "diamond " << x << " " << y << " " << dist << " " << brush << endl;
}