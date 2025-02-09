/* CH-230-A
Square.cpp
Omar Benmoussa
obenmoussa@constructor.university*/
#include "Square.h"
#include<iostream>

//parameterized constructor
Square::Square(const string& a, double b):
Rectangle(a.c_str(),b,b){}

//area and perimeter method
double Square::calcArea()const{
    cout<<"The Square area is: ";
    return Rectangle::calcArea();
}
double Square::calcPerimeter()const{
    cout<<"The Square perimeter is: ";
    return Rectangle::calcPerimeter();
}