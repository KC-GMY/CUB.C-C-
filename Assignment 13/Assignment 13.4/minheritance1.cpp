/* CH-230-A
minheritance1.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
using namespace std;

class A {
    int x;
public:
    void setX(int i) { x = i; }
    void print() { cout << x << endl; }
};

class B : virtual public A {//using virtual inheritance to resolve ambiguity
public:
    B() { setX(10); }
};

class C : virtual public A {//using virtual inheritance to resolve ambiguity
public:
    C() { setX(20); }
};

class D : public B, public C {
//D automatically has a single instance of A due to virtual inheritance
public:
    D() {
        setX(30);//explicitly set the value of x
    }
};

int main() {
    D d;//creating an object of type D
    d.print(); // Resolves to the single instance of A, output will be 30
    //the print method call was ambiguous
    //since D inherits from B and C which both inherits the print method from A
    return 0;
}
