/* CH-230-A
fraction.h
Omar Benmoussa
obenmoussa@constructor.university*/

#ifndef FRACTION_H_
#define FRACTION_H_
using namespace std;
class Fraction {

private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator
    int gcd(int a, int b);		// calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
    void print();				// prints it to the screen
    //overloaded operator << to print fraction
    friend ostream& operator<<(ostream&, const Fraction&);
    //overloaded operator >> to read fraction from the user input
    friend istream& operator>>(istream& , Fraction& );
    //overloaded operator * for multiplication of fractions
    Fraction operator*(const Fraction&) const;
    //overloaded operator / for division of fractions
    Fraction operator/(const Fraction&) const;
    //overloaded operator + for addition of fractions
    Fraction operator+(const Fraction&) const;
    //overloaded operator - for difference of fractions
    Fraction operator-(const Fraction&) const;
    //overloaded operator > for comparision of fractions
    bool operator>(const Fraction&) const;
    //overloaded operator < for comparision of fractions
    bool operator<(const Fraction&) const;
    //overloaded operator =
    Fraction& operator=(const Fraction& );
};
#endif