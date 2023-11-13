#include "shapes.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int canvas_width, canvas_height;
    string command;
    cin >> canvas_width >> canvas_height;

    while(true){
        cin >> command;
        if(command == "quit"){
            break;
        }
        if(command == "square"){
            int xpos, ypos, width;
            char brush;
            cin >> xpos >> ypos >> width >> brush;
            Square square(xpos, ypos, width, brush);
            cout << "Area: " << square.GetArea() << endl;
            cout << "Perimeter: " << square.GetPerimeter() << endl;
            square.Draw(canvas_width, canvas_height);
        }
        if(command == "rect"){
            int xpos, ypos, width, height;
            char brush;
            cin >> xpos >> ypos >> width >> height >> brush;
            Rectangle rect(xpos, ypos, width, height, brush);
            cout << "Area: " << rect.GetArea() << endl;
            cout << "Perimeter: " << rect.GetPerimeter() << endl;
            rect.Draw(canvas_width, canvas_height);
        }
        if(command == "diamond"){
            int xpos, ypos, dist;
            char brush;
            cin >> xpos >> ypos >> dist >> brush;
            Diamond diamond(xpos, ypos, dist, brush);
            cout << "Area: " << diamond.GetArea() << endl;
            cout << "Perimeter: " << diamond.GetPerimeter() << endl;
            diamond.Draw(canvas_width, canvas_height);
        }
    }
    
    return 0;
}