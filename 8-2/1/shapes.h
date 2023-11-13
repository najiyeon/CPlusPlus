class Shape{
public:
    Shape();
    Shape(int xpos, int ypos, char brush);
    double GetArea();
    int GetPerimeter();
    void Draw(int canvas_width, int canvas_height) {};

protected:
    int xpos, ypos;
    char brush;
    double area;
    int perimeter;
};

class Square: public Shape{
public:
    Square(int xpos, int ypos, int width, char brush);
    void Draw(int canvas_width, int canvas_height);
private:
    int width;
};

class Rectangle: public Shape{
public:
    Rectangle(int xpos, int ypos, int width, int height, char brush);
    void Draw(int canvas_width, int canvas_height);
private:
    int width, height;
};

class Diamond: public Shape{
public:
    Diamond(int xpos, int ypos, int dist, char brush);
    void Draw(int canvas_width, int canvas_height);
private:
    int dist;
};