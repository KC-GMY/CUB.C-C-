#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

//default const
Vector::Vector():size(0),p(nullptr){}

//setting properties
Vector::Vector(int s, double *v):size(s){
 p= new double[s];
 if(p=nullptr){
  cout<<"The memory allocation failed."<<endl;
  exit(1);
 }
 for(int i=0;i<s;i++){
  p[i]=v[i];
 }
 cout<<"Vector constructor called."<<endl;
}
//copy const
Vector::Vector(const Vector &n):size(n.size),p(n.p){
 cout<<"Copy constructor called."<<endl;
}
//destructor
Vector::~Vector(){
 delete p;
 cout<<"Destructor constructor called."<<endl;
}
//setter
int Vector::setSize(int s){
 return size=s;
}
double Vector::setP(double *v){
 return *p=*v;
}
double Vector::getP(){
 return *p;
}
//getter
int Vector::getSize(){
 return size;
}
//print method
void Vector::print(){
 for(int i=0;i<size;i++){
  cout<<p[i]<<" ";
 }
}
//norm method
double Vector::norm(){
 double sum=0;
 for(int i=0;i<size;i++){
  sum+=p[i]*p[i];
 }
 return sum=sqrt(sum);
}
//add method
Vector Vector::add(const Vector n)const{
 Vector v(size,p);
  double a[size];
  for(int i=0;i<n.size;i++){
   a[i]=n.p[i]+p[i];
  }
  return v;
}
//difference method
Vector Vector::diff(const Vector n)const{
 Vector v(size,p);
  double a[size];
  for(int i=0;i<n.size;i++){
   a[i]=n.p[i]-p[i];
  }
  return v;
}
//scalar product
Vector Vector::scalar(const Vector n)const{
 Vector v(size,p);
  double a[size];
  for(int i=0;i<n.size;i++){
   a[i]=n.p[i]*p[i];
  }
  return v;
}