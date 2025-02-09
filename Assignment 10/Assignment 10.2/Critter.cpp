/* CH-230-A
Critter.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string &newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

//setter for health level
void Critter::sethealth(int newhealth) {
    health = newhealth;
}

//setter for color
void Critter::setColor(string newColor) {
    color = newColor;
}

//getter for hunger
int Critter::getHunger() {
    return hunger;
}

//getter for health
int Critter::gethealth() {
    return health;
}

//getter for color
string Critter::getColor() {
    return color;
}

//printing the properties
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout<<"My health level is: "<<health<<", and I have "<<color<<" eyes.";
}
