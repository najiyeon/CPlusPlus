class Shape{
public:
    Shape(double width, double height);
    virtual double getArea() = 0;
protected:
    double width;
    double height;
};

class Triangle : public Shape{
public:
    Triangle(double width, double height);
    double getArea();
};

class Rectangle : public Shape{
public:
    Rectangle(double width, double height);
    double getArea();
};
