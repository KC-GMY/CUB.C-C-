/* CH-230-A
Creature.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Creature.h"

using namespace std;
Creature::Creature() : distance(10) {
    cout <<"Creature constructor called"<<endl;
}
Creature::Creature(int x) : distance(x) {
    cout <<"Creature constructor"<<endl;
}
void Creature::run() const {
    cout <<"running "<<distance<<" meters!"<<endl;
}
//creature destructor
Creature::~Creature() {
    cout <<"Creature destructor called"<<endl;
}

Wizard::Wizard() : Creature(10), distFactor(3) {
    cout <<"Wizard constructor called"<<endl;
}
void Wizard::hover() const {
    cout <<"hovering "<<(distFactor*distance)<<" meters!"<<endl;
}
//wizard destructor
Wizard::~Wizard() {
    cout <<"Wizard destructor called"<<endl;
}

//default constructor
Warden::Warden() : Creature(15), size(5) {
    cout << "Warden constructor called with " << size <<" in size \n";
}
//oneshot method
void Warden::oneshot() const {
    cout << "You got oneshotted with " << (size * distance) <<" damage. \n";
}
//warden destructor
Warden::~Warden() {
    cout << "Warden destructor called" << endl;
}

//default constructor
Nashor::Nashor() : Creature(20), HP(100) {
    cout << "Nashor constructor called with " << HP <<" HP!\n";
}
//airborn method
void Nashor::airborn() const {
    cout << "You are airborn for " << (HP*distance) << " seconds!" << endl;
}
//nashor destructor
Nashor::~Nashor() {
    cout << "Nashor destructor called" << endl;
}