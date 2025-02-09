/* CH-230-A
Shapes.h
Omar Benmoussa
obenmoussa@constructor.university*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Shape {			// base class
    private:   				// private access modifier: could also be protected
        string name;
    public:
    //setter and getter for shape name
        string setName(string name);
        string getName();
        Shape(const string &);  // builds a shape with a name
        Shape(); //default constructor
        Shape(const Shape &);		// copy constructor
        void printName() const;  // prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
    private: 
        double x, y; // the center of the shape
    public:
        CenteredShape(const string &, double, double);  // usual three constructors
        CenteredShape(); //default constructor
        void move(double, double);	// moves the shape, i.e. it modifies it center
        //setter & getter for X and Y
        double setX(double a);
        double setY(double b);
        double getX();
        double getY();
        CenteredShape(const CenteredShape &);//Copy Constructor
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
    private: 
        int EdgesNumber;
    public:
        //parametrized constructor
        RegularPolygon(const string &, double, double, int);
        RegularPolygon(); //default constructor
        RegularPolygon(const RegularPolygon &);//Copy Constructor
        //setter & getter for Edges Number
        int setED(int c);
        int getED();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        double Radius;
    public:
        Circle(const string &, double, double, double); //parametrized constructor
        Circle(); //default constructor
        //setter & getter for radius
        double setRadius(double d);
        double getRadius();
        Circle(const Circle &);//Copy Constructor
        //perimeter & area methods
        double perimeter();
        double area();
};

class Rectangle: public RegularPolygon {
    private:
        int height;
        int width;
    public:
        //setter & getter for height and width
        int setHeight(int height);
        int getHeight(); 
        int setWidth(int width);
        int getWidth();
        Rectangle(); //default constructor
        //parametrized constructor
        Rectangle(const string& , double , double , double , double );
        Rectangle(const Rectangle &); // copy constructor
        //perimeter & area methods
        double perimeter();
        double area();
};

class Square: public Rectangle{
    private:
        int side;
    public:
        Square(); //default constructor
        int setSide(int side);
        int getSide();
        Square(const string& , double , double , double ); //parametrized constructor
        Square(const Square &); // copy constructor
};

#endif