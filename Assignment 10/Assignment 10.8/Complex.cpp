/* CH-230-A
Complex.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include "Complex.h"

using namespace std;

//default constructor
Complex::Complex() : re(0), im(0) {}

//parameterized constructor
Complex::Complex(double r, double i) : re(r), im(i) {}

//copy constructor
Complex::Complex( Complex &other) : re(other.re), im(other.im) {}

//destructor
Complex::~Complex() {}

//setters and getters
void Complex::setre(double r){
    re=r;
}
void Complex::setim(double i){
    im=i;
}
double Complex::getre(){
    return re;
}

double Complex::getim(){
    return im;
}

//method to print the complex number
void Complex::print()  {
    if (im >= 0) {
        cout << re << " + " << im << "i" << endl;
    } else {
        cout << re << " - " << -im << "i" << endl;
    }
}

//method for conjugation
Complex Complex::conjugate()  {
    return Complex(re, -im);
}

// Method for addition
Complex Complex::add( Complex &other)  {
    return Complex(re + other.re, im + other.im);
}

//method for subtraction
Complex Complex::subtract( Complex &other)  {
    return Complex(re - other.re, im - other.im);
}

//method for multiplication
Complex Complex::multiply( Complex &other)  {
    return Complex(re * other.re - im * other.im,
    im * other.re + re * other.im);
}