/* CH-230-A
testcritter.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(void)
{
    Critter c;

    string inputname;
    int hunger, health;
    string color;

    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    getline(cin, inputname);
    c.setName(inputname);

    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);

    //Reading the new properties from the user input
    cout << "Health: ";
    cin >> health;
    c.sethealth(health);
    cout << "Color: ";
    cin.ignore();
    getline(cin, color);
    c.setColor(color);
    cout << "You have created:" << endl;
    c.print();
    return 0;
}
