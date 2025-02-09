/* CH-230-A
Rectangle.cpp
Omar Benmoussa
obenmoussa@constructor.university*/
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}
//area and perimeter method
double Rectangle::calcArea() const {
	cout << "The Rectangle area is: ";
	return length*width;
}

double Rectangle::calcPerimeter() const {
	cout << "The Rectangle perimeter is: ";
    return 2*(length+width);
}
