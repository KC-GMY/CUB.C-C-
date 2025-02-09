/* CH-230-A
Critter.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
#include "Critter.h"

using namespace std;

//the default constructor
Critter::Critter() : name("default_critter"), hunger(0.2), boredom(0), height(5.0) {
    cout << "The default constructor was called" << endl;
}

//The constructor with one parameter
Critter::Critter(string newname) : name(newname), hunger(0.2), boredom(0), height(5.0) {
    cout << "The constructor with name parameter was called" << endl;
}

//The constructor with multiple parameters
Critter::Critter(string newname, int newhunger, int newboredom, double newheight)
    : name(newname), boredom(newboredom), height(newheight) {
    setHungerAsDouble(newhunger);
    cout << "The constructor with multiple parameters was called" << endl;
}

//setter for hunger using integer,converts to double
void Critter::setHunger(int newhunger) {
    setHungerAsDouble(newhunger);
}

//getter for hunger as integer
int Critter::getHunger() {
    return hungerToInt();
}

//helper method to convert hunger from double to int
int Critter::hungerToInt() {
    return static_cast<int>(hunger * 10);
}

//helper method to set hunger as a double from int
void Critter::setHungerAsDouble(int intHunger) {
    hunger = static_cast<double>(intHunger) / 10;
}

//setters and getters for other parameters
void Critter::setName(string &newname) { 
    name = newname;
    }
void Critter::setBoredom(int newboredom) { 
    boredom = newboredom; 
    }
void Critter::setHeight(double newheight) { 
    height = newheight; 
    }

string Critter::getName() { 
    return name; 
    }
int Critter::getBoredom() { 
    return boredom; 
    }
double Critter::getHeight() { 
    return height; 
    }

// method to print the critter's details
void Critter::print() {
    cout << "i am " << name << ". my hunger level is " << hungerToInt() << "." << endl;
}