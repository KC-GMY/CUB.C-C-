/* CH-230-A
Ring.cpp
Omar Benmoussa
obenmoussa@constructor.university*/
#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

//area and perimeter method
double Ring::calcArea() const {
	cout << "The Ring area is: ";
	double IN=M_PI*pow(innerradius,2);
	double OUT=M_PI*pow(Circle::getRadius(),2);
	return OUT-IN;
}

double Ring::calcPerimeter() const {
	cout << "The Ring perimeter is: ";
	double IN=2*M_PI*innerradius;
	double OUT=2*M_PI*(Circle::getRadius());
	return IN+OUT;
}