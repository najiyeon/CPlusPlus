#include <iostream>
#include "shapes.h"

using namespace std;

int main(){
    char shape;

    while(true){
        cout << "shape?" << endl;
        cin >> shape;
        if (shape == 'C'){
            int x, y, radius;
            cin >> x >> y >> radius;
            Circle circles;
            circles.setvars(x, y, radius);
            circles.calarea();
            circles.calperimeter();
            circles.show();
        }
        if(shape == 'R'){
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            Rectangle rectangles;
            rectangles.setvars(x1, y1, x2, y2);
            rectangles.calarea();
            rectangles.calperimeter();
            rectangles.show();
        }
        if(shape == 'Q'){
            break;
        }
    }

    return 0;
}
