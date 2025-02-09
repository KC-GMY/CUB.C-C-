/* CH-230-A
Complex.h
Omar Benmoussa
obenmoussa@ructor.university */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Complex {
private:
    double re;
    double im;
public:
    //default constructor
    Complex();

    //parameterized constructor
    Complex(double r, double i);

    //copy constructor
    Complex(const Complex &);

    //destructor
    ~Complex();

    //setters and getters
    void setre(double r);
    void setim(double i);
    double getre() const;
    double getim() const;

    //method to print the complex number
    void print();

    //method for conjugation
    Complex conjugate()const;

    //methods for arithmetic operations
    Complex operator+(const Complex&)const;
    Complex operator-(const Complex&)const;
    Complex operator*(const Complex&)const;
    Complex& operator=(const Complex&);

    //overloaded operator << to print complex numbers
    friend ostream& operator<<(ostream&, const Complex&);
    //overloaded operator >> to read complex numbers from the user input
    friend istream& operator>>(istream&, Complex&);
};
