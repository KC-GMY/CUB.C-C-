/* CH-230-A
Critter.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include "Critter.h"
#include <iostream>

using namespace std;

//default constructor
Critter::Critter() : name("default_critter"), hunger(0), boredom(0), 
    height(5), thirst(0) {
    cout << "The default constructor was called." << endl;
}

//constructor with name only
Critter::Critter(string name):name(name),hunger(0),boredom(0),
    height(5),thirst(0){
    cout << "The constructor with name parameter was called." << endl;
}

//constructor with multiple parameters, no thirst
Critter::Critter(string name,int hunger,int boredom,double height)
    :name(name),hunger(hunger),boredom(boredom),height(height),thirst(hunger){
    cout << "The constructor with multiple parameters was called." << endl;
}

//new constructor with thirst parameter
Critter::Critter(string name,int hunger,int boredom,
    double height,double thirst):name(name),hunger(hunger),
    boredom(boredom),height(height),thirst(thirst){
    cout << "The constructor with five parameters was called." << endl;
}

//setters and getters for thirst
void Critter::setThirst(double newThirst) { thirst = newThirst; }
double Critter::getThirst() { return thirst; }

//setters and getters for other parameters
void Critter::setName(string& newname) { name = newname; }
void Critter::setHunger(int newhunger) { hunger = newhunger; }
void Critter::setBoredom(int newboredom) { boredom = newboredom; }
void Critter::setHeight(double newheight) { height = newheight; }
string Critter::getName() { return name; }
int Critter::getHunger() { return hunger; }
int Critter::getBoredom() { return boredom; }
double Critter::getHeight() { return height; }

//print method for all parameters
void Critter::print() {
    cout << "My name is: " << name << endl;
    cout << "My hunger level is: " << hunger << endl;
    cout << "Boredom is: " << boredom << endl;
    cout << "My Height is: " << height << endl;
    cout << "Thirst: " << thirst << endl;
}
