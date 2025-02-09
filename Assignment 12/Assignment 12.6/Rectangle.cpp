#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "Calling calcArea() for Rectangle with length " 
                            << length 
              << " and width " << width << std::endl;
    return length*width;
}

double Rectangle::calcPerimeter() const {
	std::cout << "Calling calcPerimeter() for Rectangle with length " 
    << length << " and width " << width << std::endl;
    return length+width+length+width;
}
double Rectangle::getLength() const {
    return length;
}