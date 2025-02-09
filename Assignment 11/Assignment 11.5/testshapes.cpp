/* CH-230-A
testshapes.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Shapes.h"
using namespace std;
int main() {
    //creating instances of circle rectangle and square
    Circle c("first circle", 3, 4, 7);
    Rectangle re("first rectangle", 11, 11, 2, 4);
    Square sq("Carré",2,2,3);
    //printing their perimeter and area
    cout<<"The Circle perimeter is: "<< c.perimeter()<<endl;
    cout<<"The Circle area is: "<<c.area()<<endl;
    cout<<"The Rectangle perimeter is: "<< re.perimeter()<<endl;
    cout<<"The Rectangle area is: "<<re.area()<<endl;
    cout<<"The Square perimeter is: "<< sq.perimeter()<<endl;
    cout<<"The Square area is: "<<sq.area()<<endl;
    return 0;
}