/* CH-230-A
testcreature.cpp
Omar Benmoussa
obenmoussa@constructor.university*/
#include "Creature.h"

using namespace std;

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