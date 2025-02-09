/* CH-230-A
testvirtual.cpp
Omar Benmoussa
obenmoussa@constructor.university*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;

/*
Class Diagram:

       Area
         |
  +------+-------+
  |              |
Circle      Rectangle
  |              |
 Ring          Square

*/

int main() {
    //creating 7 objects
    cout << "Creating Ring: ";
    Ring blue_ring("BLUE", 5, 2);
    cout << "Creating Circle: ";
    Circle yellow_circle("YELLOW", 7);
    cout << "Creating Rectangle: ";
    Rectangle green_rectangle("GREEN", 5, 6);
    cout << "Creating Circle: ";
    Circle red_circle("RED", 8);
    cout << "Creating Rectangle: ";
    Rectangle black_rectangle("BLACK", 10, 20);
    cout << "Creating Ring: ";
    Ring violet_ring("VIOLET", 100, 5);
    cout << "Creating Square: ";
    Square purple_square("PURPLE", 4);

    //displaying the perimeter
    cout<<"The perimeters:\n";
    cout<<blue_ring.calcPerimeter()<<endl;
    cout<<yellow_circle.calcPerimeter()<<endl;
    cout<<green_rectangle.calcPerimeter()<<endl;
    cout<<red_circle.calcPerimeter()<<endl;
    cout<<black_rectangle.calcPerimeter()<<endl;
    cout<<violet_ring.calcPerimeter()<<endl;
    cout<<purple_square.calcPerimeter()<<endl;

    return 0;
}