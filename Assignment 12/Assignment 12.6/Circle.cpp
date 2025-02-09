#include <iostream>
#include <cmath>
#include "Circle.h"
using namespace std;

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::getRadius()const{
	return radius;
}

double Circle::calcArea() const {
  cout << "Calling calcArea() for Circle with radius " 
  << radius <<endl;	
  return M_PI*radius*radius;

}

double Circle::calcPerimeter() const{
	cout << "Calling calcPerimeter() for Circle with radius " 
	<< radius <<endl;
	return 2*M_PI*radius;
}
