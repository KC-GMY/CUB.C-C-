#include <iostream>
using namespace std;

class Motor {
public:
    Motor() {
        throw "This motor has problems";
    }
};

class Car {
public:
    Car() {
        try {
            Motor motor;
        } catch (const char* msg) {
            // Re-throw the exception with the same message
            throw msg;
        }
    }
};

class Garage {
public:
    Garage() try : car() {
        // Constructor body left intentionally empty
    } catch (const char* msg) {
        // Handle Motor exception and throw a new exception for the Garage
        throw "The car in this garage has problems with the motor";
    }

private:
    Car car;
};

int main() {
    try {
        Garage garage;
    } catch (const char* msg) {
        cout << msg << endl; // Catch and display the exception
    }
    return 0;
}
