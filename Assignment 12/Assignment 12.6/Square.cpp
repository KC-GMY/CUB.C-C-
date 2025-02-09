#include "Square.h"
#include<iostream>
using namespace std;


Square::Square(const string& color, double side)
    : Rectangle(color.c_str(),side,side){}

double Square::calcArea()const{
    cout << "Calling calcArea() for Square with side length " 
    << getLength() <<endl;
    return Rectangle::calcArea();
}

double Square::calcPerimeter() const {
    cout << "Calculating perimeter for Square..." <<endl;
// Assuming Square is a special case of Rectangle
    return 4 * getLength();  
}