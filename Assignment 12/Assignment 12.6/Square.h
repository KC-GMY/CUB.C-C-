#ifndef SQUARE_H
#define SQUARE_H
#include<string>
#include "Rectangle.h"

class Square : public Rectangle{
public:
    Square(const std:: string& color, double side);
    double calcArea()const ;
    double calcPerimeter()const;
};

#endif