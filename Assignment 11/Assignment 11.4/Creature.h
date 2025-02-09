/* CH-230-A
Creature.h
Omar Benmoussa
obenmoussa@constructor.university*/

#ifndef CREATURE_H
#define CREATURE_H

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
class Wizard : public Creature {
private:
    int distFactor;

public:
    Wizard();
    void hover() const;
    ~Wizard();
};

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

class Nashor : public Creature {
private:
    int HP;
public:
    Nashor();
    void airborn() const;
    ~Nashor();
};

#endif