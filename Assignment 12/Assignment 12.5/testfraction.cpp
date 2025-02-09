/* CH-230-A
testfraction.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include "fraction.h"


int main(void){
    //creating 4 fractions
    Fraction a, b, sum, difference;
    cout << "Enter the first fraction:" << endl;
    cin >> a;
    cout << "Enter the second fraction:" << endl;
    cin >> b;

    //performing calculations
    Fraction product = a * b;
    Fraction quotient = a / b;
    sum = a + b;
    difference = a - b;

    //comparing the two fractions
    if (a > b){
        cout<<"The fraction "<<a<<" is greater than the fraction "<<b<<"\n";
    }
    else if (a < b){
        cout<<"The fraction "<<a<<" is smaller than the fraction "<<b<<"\n";
    }
    else{
        cout<<"The two fractions are equal."<<endl;
    }
    //displaying results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    return 0;
}
