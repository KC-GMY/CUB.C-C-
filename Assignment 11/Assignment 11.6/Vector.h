#ifndef __VECTOR_H
#define __VECTOR_H
#include<string>
using namespace std;

class Vector{
 private:
 int size;
 double *p;
 public:
 //default const
 Vector();
 //setting properties
 Vector(int,double*);
 //copy const
 Vector(const Vector &);
 //destructor
 ~Vector();
 //setter
 int setSize(int s);
 double setP(double *);
 //getter
 int getSize();
 double getP();
 //methods
 double norm();
 Vector add(const Vector) const;
 Vector diff(const Vector) const;
 Vector scalar(const Vector )const;
 //print method
 void print();
};
#endif