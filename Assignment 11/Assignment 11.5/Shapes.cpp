/* CH-230-A
Shapes.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Shapes.h"

using namespace std; 
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
//default constructor for centered shape class
CenteredShape::CenteredShape():Shape(){
    setName("Centered Shape");
    setX(0);
    setY(0);
}
//parametrized constructor for centered shape class
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

//default constructor for Regular Polygon class
RegularPolygon::RegularPolygon():CenteredShape(){
    setName("Regular Polygon");
    setX(0);
    setY(0);
    EdgesNumber=4;
}
//parametrized constructor for Regular Polygon class
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
    setName(n.getName());
    setX(x.getX());
    cout<<"Copy RP constructor called"<<endl;
}

//default constructor for Circle class
Circle::Circle():CenteredShape(){
    setName("Circle");
    setRadius(1);
}
//parametrized constructor for Circle class
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
//perimeter & area methods for Circle class
double Circle::perimeter(){
    return 2*M_PI*Radius;
}
double Circle::area(){
    return M_PI*Radius*Radius;
}

//default constructor for rectangle class
Rectangle::Rectangle(){
	   setName("Rectangle");
    setHeight(2);
    setWidth(1);
    cout<<"Default Constructor Rec"<<endl;
}
//parametrized constructor for rectangle class
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth,
 double nheight):RegularPolygon(n,nx,ny,4){
    setWidth(nwidth);
    setHeight(nheight);
    cout<<"Constructor Rec"<<endl;
}
//setter & getter for height and width for rectangle class
int Rectangle::setHeight(int height){
    return this->height=height;
}
int Rectangle::setWidth(int width){
    return this->width=width;
}
int Rectangle::getWidth(){
    return width;
}
int	Rectangle::getHeight(){
    return height;
}
//copy constructor for rectangle class
Rectangle::Rectangle(const Rectangle &n){	
    setWidth(n.width);
    setHeight(n.height);
    cout<<"Copy-Rectangle constructor called."<<endl;
}
//perimeter and area methods for rectangle class
double Rectangle::perimeter(){
    return 2*(width+height);
}
double Rectangle::area(){
    return width*height;
}

//default constructor for square class
Square::Square(): Rectangle(){
    setName("Square");
    setWidth(1);
    setHeight(1);
    setSide(1);
    cout<<"Default Constructor Square";
}
//parametrized constructor for square class
Square::Square(const string& n, double nx, double ny, double nside):Rectangle(n,nx,nx,nside,nside){
    setSide(nside);
    cout << "Constructor Square"<< endl;
}
//setter & getter for side for square class
int Square::setSide(int s){
    return side=s;
}
int Square::getSide(){
    return side;
}
//copy constructor for square class
Square::Square(const Square &n){
    setSide(n.side);
    cout<<"Copy-Square constructor called."<<endl;
}