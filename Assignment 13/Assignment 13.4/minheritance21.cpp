/* CH-230-A
minheritance1.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
using namespace std;
 
class A{
        int x;
    public:
        void setX(int i){x=i;}
        void print(){cout<<x;}
};
 
class B:public A{
    public:
        B(){setX(10);}
};
 
class C:public A{
    public:
        C(){setX(20);}
};

class D:public B,public C {};
 
int main(){
    /*we created a C pointer to a D object
    When we will call the print method we will have the C print method
    with X=20
    */
    C *d=new D;
    //the print method call is ambiguous
    //since D inherits from B and C which both inherits the print method from A
    d->print();
    return 0;
}