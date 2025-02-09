/* CH-230-A
Assignment 11.2.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>

using namespace std;

class Creature {
protected:
    int distance;

public:
    Creature();
    Creature(int);
    void run() const;
    ~Creature();
};

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

class Wizard : public Creature {
private:
    int distFactor;

public:
    Wizard();
    void hover() const;
    ~Wizard();
};

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

//new class derived from the Creature class: Warden
//a new property: size and new method: oneshot
class Warden : public Creature {
private:
    int size;

public:
    Warden();
    void oneshot() const;
    ~Warden();
};
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

//new class derived from the Creature class: Nashor
//a new property: HP and new method: airborn
class Nashor : public Creature {
private:
    int HP;
public:
    Nashor();
    void airborn() const;
    ~Nashor();
};
//default constructor
Nashor::Nashor() : Creature(20), HP(100) {
    cout << "Nashor constructor called with " << HP <<" HP!";
}
//airborn method
void Nashor::airborn() const {
    cout << "You are airborn for " << (HP*distance) << " seconds !" << endl;
}
//nashor destructor
Nashor::~Nashor() {
    cout << "Nashor destructor called" << endl;
}

int main() {
    cout << "Creating a Wizard." << endl;
    Wizard w;
    w.run();
    w.hover();

    cout << "Creating a Warden." << endl;
    Warden wa;
    wa.run();
    wa.oneshot();

    cout << "Creating a Nashor." << endl;
    Nashor n;
    n.run();
    n.airborn();

    return 0;
}
