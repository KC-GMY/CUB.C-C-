/* CH-230-A
testvector.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Vector.h"

int main() {
    //creating a vector using default constructor
    Vector v1;
    cout << "Vector v1: ";
    v1.print();
    //creating a vector using parameterized constructor
    double arr1[] = {1.0, 2.0, 3.0};
    Vector v2(3, arr1);
    cout << "Vector v2: ";
    v2.print();
    //copy constructor
    Vector v3 = v2;
    cout << "Vector v3: ";
    v3.print();
    //creating another vector using parameterized constructor
    double arr2[] = {4.0, 5.0, 6.0};
    Vector v4(3, arr2);
    cout << "Vector v4: ";
    v4.print();
    //computing and printing the norm of v2
    cout << "Norm of v2: " << v2.norm() << endl;
    //adding v2 and v4
    Vector sum = v2.add(v4);
    cout << "Sum of v2 and v4: ";
    sum.print();
    //subtracting v4 from v2
    Vector diff = v2.diff(v4);
    cout << "Difference of v2 and v4: ";
    diff.print();
    //compute scalar product of v2 and v4
    cout << "Scalar product of v2 and v4: " << v2.scalar(v4) << endl;
    return 0;
}