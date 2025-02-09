/* CH-230-A
vector.h
Omar Benmoussa
obenmoussa@constructor.university*/

#ifndef __VECTOR_H
#define __VECTOR_H
#include <iostream>
#include <cmath>

using namespace std;
class Vector {
private:
    int size;
    double *p;

public:
    //default constructor
    Vector();
    //parameterized constructor
    Vector(int, const double *);
    //copy constructor
    Vector(const Vector &);
    //destructor
    ~Vector();
    //setter & getter for size
    void setSize(int s);
    int getSize();
    //setter & getter for array elements
    void setP( double *v);
    double* getP();
    //norm, add, diff & scalar methods
    double norm();
    Vector add(const Vector) const;
    Vector diff(const Vector) const;
    double scalar(const Vector) const;
    //printing method
    void print() const;
};
#endif