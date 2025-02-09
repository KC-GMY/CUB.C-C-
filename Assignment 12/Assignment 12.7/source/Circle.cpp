/* CH-230-A
Circle.cpp
Omar Benmoussa
obenmoussa@constructor.university*/
#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}
//getter for radius
double Circle::getRadius()const{
	return radius;
}
//area and perimeter method
double Circle::calcArea() const {
	cout<<"The Circle area is: "<<endl;
	return M_PI*radius*radius;
}

double Circle::calcPerimeter() const{
	cout << "The Circle perimeter is: ";
	return 2*M_PI*radius;
}