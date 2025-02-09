/* CH-230-A
Complex.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include "Complex.h"

//default constructor
Complex::Complex():re(0),im(0){}

//parameterized constructor
Complex::Complex(double r, double i) : re(r), im(i) {}

//copy constructor
Complex::Complex(const Complex &a) : re(a.re), im(a.im) {}

//destructor
Complex::~Complex() {}

//setters and getters
void Complex::setre(double r){
    re=r;
}
void Complex::setim(double i){
    im=i;
}
double Complex::getre()const{
    return re;
}

double Complex::getim()const{
    return im;
}

//method for conjugation
Complex Complex::conjugate()const{
    return Complex(re,-im);
}

//overloaded operator + for addition
Complex Complex::operator+(const Complex& a)const{
    return Complex(this->re + a.re, this->im + a.im);
}

//overloaded operator - for substraction
Complex Complex::operator-(const Complex& a)const{
    return Complex(this->re-a.re,this->im-a.im);
}

//overloaded operator * for multiplication
Complex Complex::operator*(const Complex& a)const{
    return Complex(this->re*a.re-this->im*a.im,
    this->im*a.re+this->re*a.im);
}

//overloaded operator = for assigning
Complex& Complex::operator=(const Complex& a) {
    if (this != &a) { // Check for self-assignment
        this->re = a.re;
        this->im = a.im;
    }
    return *this;
}
//overloaded operator << to print complex numbers
ostream& operator<<(ostream& os, const Complex& a){
    if (a.im >= 0) {
        os << a.re << "+" << a.im << "i\n";
    } 
    else {
        os << a.re << "-" << -a.im << "i\n";
    }
    return os;
}
//overloaded operator >> to read complex numbers from the user input
istream& operator>>(istream& is, Complex& a){
	is>>a.re;
    is>>a.im;
	return is;
}