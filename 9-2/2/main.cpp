#include "canvas.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<Shape*> shapes;
    int width, height, dist;
    cin >> width >> height;
    Canvas canvas(width, height);
    string command;
    string shape;
    int x, y;
    char brush;
    int index;

    while(true){
        cin >> command;
        if(command == "quit") break;
        else if(command == "add"){
            cin >> shape;
            if(shape == "rect"){
                cin >> x >> y >> width >> height >> brush;
                shapes.push_back(new Rectangle(x, y, width, height, brush));
            }
            else if(shape == "diamond"){
                cin >> x >> y >> dist >> brush;
                shapes.push_back(new Diamond(x, y, dist, brush));
            }
            else if(shape == "tri_up"){
                cin >> x >> y >> height >> brush;
                shapes.push_back(new UpTriangle(x, y, height, brush));
            }
            else if(shape == "tri_down"){
                cin >> x >> y >> height >> brush;
                shapes.push_back(new DownTriangle(x, y, height, brush));
            }
        }
        else if(command == "delete"){
            cin >> index;
            if(index < shapes.size()){
                delete shapes[index];
                shapes.erase(shapes.begin() + index);
            }
        }
        else if(command == "draw"){
            canvas.Clear();
            for(int i = 0; i < shapes.size(); i++){
                shapes[i]->Draw(&canvas);
            }
            canvas.Print();
        }
        else if(command == "dump"){
            for(int i = 0; i < shapes.size(); i++){
                cout << i << " ";
                shapes[i]->PrintInfo();
            }
        }
        else if(command == "resize"){
            cin >> width >> height;
            canvas.Resize(width, height);
        }
    }

    return 0;
}