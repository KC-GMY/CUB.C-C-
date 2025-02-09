/* CH-230-A
fraction.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include "fraction.h"

//default constructor
Fraction::Fraction(){
	num = 1;
	den = 1;
}
//parameterized constructor
Fraction::Fraction(int n, int d){
	int tmp_gcd = gcd(n, d);
	num = n / tmp_gcd;
	den = d / tmp_gcd;
}
//greatest common divider method
int Fraction::gcd(int a, int b){
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// least common multiple method
int Fraction::lcm(int a, int b)
{
	return a*b/gcd(a, b);
}
//priniting method
void Fraction::print()
{
	cout << num << "/" << den << endl;
}
//overloaded operator << to print fraction
ostream& operator<<(ostream& os, const Fraction& a) {
    os << a.num << "/" << a.den;
    return os;
}
//overloaded operator >> to read fraction from the user input
istream& operator>>(istream& is, Fraction& a){
    cout << "Enter numerator: ";
    is >> a.num;
    cout << "Enter denominator: ";
    is >> a.den;

    //Checking the validity of the user input
    if (a.den == 0) {
        a.den = 1;
    }
    //reducing the fraction
    int tmp_gcd = a.gcd(a.num, a.den);
    a.num /= tmp_gcd;
    a.den /= tmp_gcd;
    return is;
}
//overloaded operator * for multiplication of fractions
Fraction Fraction::operator*(const Fraction& a) const {
    return Fraction(this->num * a.num, this->den * a.den);
}
//overloaded operator / for division of fractions
Fraction Fraction::operator/(const Fraction& a) const {
    return Fraction(this->num * a.den, this->den * a.num);
}
//overloaded operator + for addition of fractions
Fraction Fraction::operator+(const Fraction& a) const {
    Fraction temp;
    int c=temp.lcm(this->den,a.den);
    int d=this->num*(c/this->den)+a.num*(c /a.den);
    return Fraction(d,c);
}
//overloaded operator - for difference of fractions
Fraction Fraction::operator-(const Fraction& a) const {
    Fraction temp;
    int c = temp.lcm(this->den, a.den);
    int d = this->num *(c/this->den) - a.num * (c / a.den);
    return Fraction(d,c);
}
//overloaded operator > for comparison of fractions
bool Fraction::operator>(const Fraction& a) const {
    if(this->den*a.den>0){
    return (this->num * a.den > a.num * this->den);
    }
    else {
    return (this->num * a.den < a.num * this->den);
    }
}
//overloaded operator < for comparison of fractions
bool Fraction::operator<(const Fraction& a) const {
    if(this->den*a.den>0){
    return (this->num * a.den < a.num * this->den);
    }
    else {
    return (this->num * a.den > a.num * this->den);
    }
}
//overloaded operator =
Fraction& Fraction::operator=(const Fraction& o) {
    if (this != &o) {
        this->num = o.num;
        this->den = o.den;
    }
    return *this;
}