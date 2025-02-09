/* CH-230-A
Shapes.h
Omar Benmoussa
obenmoussa@constructor.university*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <iostream>
#include <string>

using namespace std;

class Shape {			//base class
				private:   				// private access modifier: could also be protected
								string name;   // every shape will have a name
				public:
								//setter and getter for shape name
        string setName(string name);
								//!!!!
        string getName();
								Shape(const string &);  // builds a shape with a name
								Shape();					// empty shape
								Shape(const Shape &);		// copy constructor
								void printName() const;  	// prints the name  
								~Shape();
};

class CenteredShape : public Shape {  //inherits from Shape
	private: 
		double x, y;  // the center of the shape
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
								//destructor
								~CenteredShape();
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
							 //destructor
								~RegularPolygon();
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
								//destructor
								~Circle();
};

//new class derived from the RegularPolygon class: Hexagon
class Hexagon : public RegularPolygon{
	private:
	int side;
	string color;
	public:
	Hexagon();//default constructor
	//setters & getters for size and color
	int setSide(int);
	string setColor(string);
	int getSide();
	string getColor();
	//parameterized constructor
	Hexagon(const string &, double, double,int,string);
	Hexagon(int,string);
	//area and perimeter method
	double area();
	int perimeter();
	//copy constructor
	Hexagon(const Hexagon&);
	//destructor
	~Hexagon();
};
#endif