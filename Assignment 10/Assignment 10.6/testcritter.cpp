/* CH-230-A
testcritter.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include "Critter.h"

using namespace std;

int main() {
    //example using Constructor 1 with no parameters
    Critter critter1;
    critter1.setHunger(2);
    critter1.print();
    cout << endl;

    //example using Constructor 2 with only a name parameter
    Critter critter2("Chop");
    critter2.setHunger(2);
    critter2.print();
    cout << endl;

    //example using Constructor 3 with multiple parameters
    Critter critter3("Aya", 1, 2, 9);
    critter3.print();
    cout << endl;

    //example using Constructor 3 without specifying height
    Critter critter4("Maxime", 3, 15);
    critter4.print();
    cout << endl;

    //example using the new Constructor with all parameters including thirst
    Critter critter5("Billy", 2, 4, 7.5, 0.9);
    critter5.print();
    cout << endl;

    return 0;
}
