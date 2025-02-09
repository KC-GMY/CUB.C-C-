/* CH-230-A
vector.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Vector.h"

//default constructor
Vector::Vector():size(0),p(nullptr){}

//parameterized constructor
Vector::Vector(int s, const double *v):size(s){
    p = new double[s];
    if (!p) {
        cout << "The memory allocation failed." << endl;
        exit(1);
    }
    for (int i=0;i<s;i++){
        p[i]=v[i];
    }
    cout<<"Vector constructor called."<<endl;
}

//copy constructor
Vector::Vector(const Vector &v):size(v.size){
    p=new double[size];
    for (int i=0;i<size;i++) {
        p[i]=v.p[i];
    }
    cout<<"Copy constructor called."<<endl;
}

//destructor
Vector::~Vector(){
    delete[] p;
    cout<<"Destructor constructor called."<<endl;
}

//setter & getter for size
void Vector::setSize(int s){
    size=s;
}
int Vector::getSize(){
    return size;
}

//setter & getter for elements
void Vector::setP(double *v){
    for (int i=0;i<size;i++){
        p[i]=v[i];
    }
}
double* Vector::getP(){
    return p;
}

//norm method
double Vector::norm(){
    double sum=0;
    for (int i=0;i<size;i++){
        sum +=p[i]*p[i];
    }
    return sqrt(sum);
}

//addition method
Vector Vector::add(const Vector v) const {
    Vector result(size, p);
    for (int i = 0; i < size; ++i) {
        result.p[i]+=v.p[i];
    }
    return result;
}

//difference method
Vector Vector::diff(const Vector n) const {
    Vector result(size,p);
    for (int i=0;i<size;i++) {
        result.p[i]-=n.p[i];
    }
    return result;
}

//scalar product method
double Vector::scalar(const Vector v) const {
    double product=0;
    for (int i=0;i<size;i++) {
        product +=p[i]*v.p[i];
    }
    return product;
}

//printing method
void Vector::print() const {
    for (int i=0;i<size;i++){
        cout << p[i] << " ";
    }
    cout << endl;
}