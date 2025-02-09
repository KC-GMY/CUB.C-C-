/* CH-230-A
Shapes.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Shapes.h"
#include <cmath>

Shape::Shape(){
    name="Shape";
}
//default constructor for shape class
Shape::Shape(const string &n) : name(n) {
    cout << "Constructor Shape"<< endl;

}
//setter and getter for shape name
string Shape::setName(string name){
    return this->name=name;
}
string Shape::getName(){
	return name;
}
//print method
void Shape::printName() const {
	cout << name << endl;
}
//copy constructor for shape class
Shape::Shape(const Shape& n) : name(n.name) {
    cout << "Copy-Shape constructor called" << endl;
}
//destructor for shape class
Shape::~Shape(){
				cout<<"Shape destructor called."<<endl;
}
//default constructor for centered shape class
CenteredShape::CenteredShape():Shape(){
    setName("Centered Shape");
    setX(0);
    setY(0);
}
//parameterized constructor for centered shape class
CenteredShape::CenteredShape(const string &n, double nx, double ny) : Shape(n) {
	x = nx;
	y = ny;
cout << "Constructor CS"<< endl;
}
//setter & getter for X and Y for centered shape class
double CenteredShape::setX(double a){
    return x=a;
}
double CenteredShape::setY(double b){
    return y=b;
}
double CenteredShape::getX(){
    return x;
}
double CenteredShape::getY(){
    return y;
}
//copy constructor for centered shape class
CenteredShape::CenteredShape(const CenteredShape &n){
    setX(n.x);
    setY(n.y);
    cout << "Copy CS constructor called" << endl;
}
//destructor for centred shape class
CenteredShape::~CenteredShape(){
				cout<<"Centered Shape destructor called."<<endl;
}
//default constructor for Regular Polygon class
RegularPolygon::RegularPolygon():CenteredShape(){
    setName("Regular Polygon");
    setX(0);
    setY(0);
    EdgesNumber=4;
}
//parameterized constructor for Regular Polygon class
RegularPolygon::RegularPolygon(const string &n, double nx, double ny, int nl) :
	CenteredShape(n, nx, ny) {
	EdgesNumber = nl;
cout << "Constructor RP"<< endl;
}
//setter & setter for Edges Number for Regular Polygon class
int RegularPolygon::setED(int c){
    return EdgesNumber=c;
}
int RegularPolygon::getED(){
    return EdgesNumber;
}
//copy constructor for Regular Polygon class
RegularPolygon::RegularPolygon(const RegularPolygon& n){
    setED(n.EdgesNumber);
    cout<<"Copy RP constructor called"<<endl;
}
//destructor for regular Polygon class
RegularPolygon::~RegularPolygon(){
				cout<<"Regular Polygon destructor called."<<endl;
}
//default constructor for Circle class
Circle::Circle():CenteredShape(){
    setName("Circle");
    setRadius(1);
}
//parameterized constructor for Circle class
Circle::Circle(const string &n, double nx, double ny, double r) : 
	CenteredShape(n, nx, ny) {
	Radius = r;
	cout << "Constructor Circle"<< endl;
}
//setter & getter for radius for Circle class
double Circle::setRadius(double d){
    return Radius=d;
}
double Circle::getRadius(){
    return Radius;
}
//copy constructor for Circle class
Circle::Circle(const Circle& n){
    setRadius(n.Radius);
				cout<<"Copy-Circle constructor called"<<endl;
}
Circle::~Circle(){
					cout<<" Circle destructor called."<<endl;
}
//default constructor for Hexagon class
Hexagon::Hexagon():RegularPolygon(){
				setName("Hexagon");
}
//setters & getters for size & color
int Hexagon::setSide(int s){
				return side=s;
}
string Hexagon::setColor(string c){
				return color=c;
}
int Hexagon::getSide(){
				return side;
}
string Hexagon::getColor(){
				return color;
}
//parameterized constructor for hexagon class
Hexagon::Hexagon(const string &n, double nx, double ny,int s,string c):
RegularPolygon(n,nx,ny, 6){
				setSide(s);
				setColor(c);
}
Hexagon::Hexagon(int s,string c):RegularPolygon(){
				setSide(s);
				setColor(c);
}
//area and perimeter method
double Hexagon::area(){
	return 3*sqrt(3)*pow(side,2)/2;
}
int Hexagon::perimeter(){
	return 6*side;
}
//copy constructor for hexagon class
Hexagon::Hexagon(const Hexagon& n){
    setSide(n.side);
				setColor(n.color);
				cout<<"Copy-Hexagon constructor called"<<endl;
}
//destructor for hexagon class
Hexagon::~Hexagon(){
					cout<<" Hexagon destructor called."<<endl;
}