/* CH-230-A
testvirtual.cpp
Omar Benmoussa
obenmoussa@constructor.university*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

const int NUM_OBJECTS = 25;

string getRandomColor() {
    string colors[] = {"RED", "BLACK", "VIOLET", "BLUE"};
    return colors[rand() % 4];
}

int getRandomSize() {
    return 5 + rand() % 96; // Random size between 5 and 100
}

Area* createRandomObject() {
    string color = getRandomColor();
    int size1 = getRandomSize();
    int size2 = getRandomSize();
    // 0 = Circle, 1 = Ring, 2 = Rectangle, 3 = Square
    int randomType = rand() % 4;
    switch (randomType) {
        case 0: // Circle
            return new Circle(color.c_str(), size1);
        case 1: // Ring
            return new Ring(color.c_str(), size1, size2 % size1); // Ensure inner radius < outer
        case 2: // Rectangle
            return new Rectangle(color.c_str(), size1, size2);
        case 3: // Square
            return new Square(color.c_str(), size1);
        default:
            return nullptr;
    }
}

int main() {
    //random number generator
    srand(static_cast<unsigned>(time(0)));
    vector<Area*> objects;

    //creating 25 random objects
    for (int i = 0; i < NUM_OBJECTS; ++i) {
        objects.push_back(createRandomObject());
    }

    //calculating and display area and perimeter
    for (size_t i = 0; i < objects.size(); ++i) {
        cout << "Object " << i + 1 << " (" << typeid(*objects[i]).name() << "):" << endl;
        cout << "Area: " << objects[i]->calcArea() << endl;
        cout << "Perimeter: " << objects[i]->calcPerimeter() << endl;
        cout << endl;
    }

    //cleaning up the memory
    for (size_t i = 0; i < objects.size(); ++i) {
        delete objects[i];
    }

    return 0;
}