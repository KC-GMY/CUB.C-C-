/* CH-230-A
Critter.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include "Critter.h"

using namespace std;

//the default constructor
Critter::Critter() : name(""), hunger(0),boredom(0), height(5.0) {
    cout << "The default constructor was called!" << endl;
}

//The constructor with one parameter
Critter::Critter(string newname):name(newname),hunger(0),boredom(0),height(5.0){
    cout << "The constructor with a name parameter was called!" << endl;
}

//The constructor with multiple parameters
Critter::Critter(string newname,int newhunger,int newboredom,double newheight)
    :name(newname),hunger(newhunger),boredom(newboredom),height(newheight){
    cout << "The constructor with multiple parameters was called!" << endl;
}

void Critter::setName(string &newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::print() {
    cout << "I am "<<name<<". My hunger level is "<<hunger<< "." << endl;
}

int Critter::getHunger() {
    return hunger;
}
