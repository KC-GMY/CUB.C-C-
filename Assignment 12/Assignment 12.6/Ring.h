//  CH-230-A a12 p6.cpp
//  Bogdan Cprljakovic
//  bcprljakov@jacobs-university.de
#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcArea() const override;
		double calcPerimeter() const  ;
	private:
		double innerradius;
};

#endif
