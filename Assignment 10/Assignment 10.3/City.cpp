/* CH-230-A
City.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "City.h"
#include <iostream>

using namespace std;

//setters for the different city information
void City::setName(string& newName){
    name =newName;
}

void City::setInhabitants(int newInhabitants){
    inhabitants =newInhabitants;
}

void City::setMayor(string& newMayor){
    mayor =newMayor;
}

void City::setArea(double newArea){
    area =newArea;
}

//getters for the different city information
string City::getName(){
    return name;
}

int City::getInhabitants(){
    return inhabitants;
}

string City::getMayor(){
    return mayor;
}

double City::getArea(){
    return area;
}

void City::printInfo(){
    cout << "City: " << name << endl;
    cout << "The number of inhabitants: " << inhabitants << endl;
    cout << "The mayor: " << mayor << endl;
    cout << "The area: " << area << " km²" << endl;
}
