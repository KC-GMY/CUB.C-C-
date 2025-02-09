/* CH-230-A
Circle.h
Omar Benmoussa
obenmoussa@constructor.university*/
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area {
	public:
		Circle(const char *n, double a);
		~Circle();
		double calcArea() const override;
		double calcPerimeter() const override;
		double getRadius() const;
	private:
		double radius;
};

#endif
