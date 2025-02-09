/* CH-230-A
Complex.h
Omar Benmoussa
obenmoussa@ructor.university */

#include <iostream>
#include <string>

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
    Complex( Complex &other);

    //destructor
    ~Complex();

    //setters and getters
    void setre(double r);
    void setim(double i);
    double getre() ;
    double getim() ;

    //method to print the complex number
    void print() ;

    //method for conjugation
    Complex conjugate() ;

    //methods for arithmetic operations
    Complex add( Complex &other) ;
    Complex subtract( Complex &other) ;
    Complex multiply( Complex &other) ;
};

#endif // COMPLEX_H