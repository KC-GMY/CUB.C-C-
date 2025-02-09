#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const  {
 std::cout << "Calling calcArea() for Ring with outer radius " 
 << Circle::getRadius()
              << " and inner radius " << innerradius << std::endl;
			  	double ou= M_PI * pow(Circle::getRadius(),2);
	double in=M_PI * pow(innerradius,2);
	return ou - in;
}

double Ring::calcPerimeter() const {
std::cout << "Calling calcPerimeter() for Ring with outer radius " 
	<< Circle::getRadius() << " and inner radius " 
	<< innerradius << std::endl;
	double p_ou= 2 * M_PI * Circle::getRadius();
	double p_in= 2 * M_PI * innerradius;
	return p_ou + p_in ;
} 
