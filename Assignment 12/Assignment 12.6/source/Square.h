/* CH-230-A
Square.h
Omar Benmoussa
obenmoussa@constructor.university*/
#ifndef SQUARE_H
#define SQUARE_H
#include <string>
#include "Rectangle.h"

class Square : public Rectangle{
public:
    Square(const string&, double);
    double calcArea()const override;
    double calcPerimeter()const override;
};

#endif