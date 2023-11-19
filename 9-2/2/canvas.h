#include<iostream>

class Canvas
{
public:
    Canvas(size_t row, size_t col);
    ~Canvas();

    // Chnage this canvas size to w x h. Preserve already existing shapes on the canvas.
    void Resize(size_t w, size_t h);

    // Dot with the brush at (x, y). If (x, y) is outside of the canvas, just ignore it.
    bool DrawPixel(int x, int y, char brush);
    void Print();

    // Erase all (initialize with '.')
    void Clear();

private:
    // Define data member to save drawn shapes (not the resize function)
    size_t row, col;
    char** canvas;
};

class Shape 
{
public:
    virtual ~Shape(){}
    virtual void Draw(Canvas* canvas){}
    virtual void PrintInfo(){}
protected:
    // Define common properties of shapes.
    int x, y;
    int width, height;
    char brush;
};

class Rectangle : public Shape {
public:
    Rectangle(int x, int y, int width, int height, char brush);
    virtual ~Rectangle(){}
    virtual void Draw(Canvas* canvas);
    virtual void PrintInfo();
}; 
class UpTriangle : public Shape {
public:
    UpTriangle(int x, int y, int height, char brush);
    virtual ~UpTriangle(){}
    virtual void Draw(Canvas* canvas);
    virtual void PrintInfo();
};
class DownTriangle : public Shape {
public:
    DownTriangle(int x, int y, int height, char brush);
    virtual ~DownTriangle(){}
    virtual void Draw(Canvas* canvas);
    virtual void PrintInfo();
};
class Diamond : public Shape {
public:
    Diamond(int x, int y, int dist, char brush);
    virtual ~Diamond(){}
    virtual void Draw(Canvas* canvas);
    virtual void PrintInfo();

private:
    int dist;
};

