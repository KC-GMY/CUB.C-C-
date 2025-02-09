/* CH-230-A
testcomplex.cpp
Omar Benmoussa
obenmoussa@constructor.university */
#include <iostream>
#include "Complex.h"
using namespace std;
int main() {
    //declaring four doubles
    double real1, imag1, real2, imag2;

    //reading two complex numbers as 4 doubles from the user input
    cout << "Enter the real and imaginary parts of a complex number: ";
    cin >> real1 >> imag1;
    Complex c1(real1, imag1);
    cout << "Enter the real and imaginary parts of anothercomplex number): ";
    cin >> real2 >> imag2;
    Complex c2(real2, imag2);

    //conjugate of the first instance
    Complex c1_conjugate = c1.conjugate();
    cout << "Conjugate of the first complex number: ";
    c1_conjugate.print();

    //sum of both numbers
    Complex c3 = c1.add(c2);
    cout << "Sum of the two complex numbers: ";
    c3.print();

    //difference between the two numbers
    Complex c4 = c2.subtract(c1);
    cout << "Difference: ";
    c4.print();

    //multiplication of the two complex numbers
    Complex c5 = c1.multiply(c2);
    cout << "Multiplication: ";
    c5.print();

    return 0;
}