/* CH-230-A
testfraction.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include "fraction.h"


int main(void){
    // create fractions
	   Fraction a, b;
	   // input fractions
    cout << "Enter the first fraction:" << endl;
    cin >> a;
    cout << "Enter the second fraction:" << endl;
    cin >> b;
	   // calculation, implementation of overload functions
	   Fraction p = a * b;
    Fraction q = a / b;
	   // print
    cout << "Product: " << p << endl;
    cout << "Quotient: " << q << endl;
	   return 0;
}
