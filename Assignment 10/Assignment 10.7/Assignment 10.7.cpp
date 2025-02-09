/* CH-230-A
Assignment 10.7.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
using namespace std;

class Object {
private:
    int id;
    string name;
public:
    //default constructor
    Object() { 
        id = 0;
        name="test";
        cout<<"Default constructor called. id="<<id<<", name="<<name<<'\n';
    }

    //parameterized constructor
    Object(const int newid, const string newname) {
        id=newid;
        name=newname;
        cout<<"Parameterized constructor called. id="<<id<<", name="<<name<<'\n';
    }

    //copy constructor
    Object(const Object & obj) {
        id = obj.id;
        name = obj.name;
        cout << "Copy constructor called. id=" << id << ", name=" << name << endl;
    }

    //setter for id
    void setId(const int newid) {
        id = newid;
    }

    //function to print the parameters
    void print() {
        cout << "id=" << id << endl;
        cout << "name=" << name << endl;
    }
};

//set the object by value
void funcByVal(Object obj) {
    obj.setId(111);
    cout << "Inside funcByVal:" << endl;
    obj.print();
}

//set the object by reference
void funcByRef(Object & obj) {
    obj.setId(222);
    cout << "Inside funcByRef:" << endl;
    obj.print();
}

int main(void) {
    //creating multiple objects
    Object obj1;
    Object obj2(42, "Object 2");
    Object obj3 = obj2;

    //calling funcByVal
    cout << "Calling funcByVal with obj2:" << endl;
    funcByVal(obj2);
    
    //calling funcByRef
    cout << "Calling funcByRef with obj3:" << endl;
    funcByRef(obj3);
    
    //printing objects after calling the functions
    cout << "Objects after function calls:" << endl;
    cout << "obj1:" << endl;
    obj1.print();
    cout << "obj2:" << endl;
    obj2.print();
    cout << "obj3:" << endl;
    obj3.print();

    return 0;
}