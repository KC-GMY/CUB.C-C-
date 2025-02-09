/* CH-230-A
testcity.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include "City.h"

using namespace std;

int main() {
    City Bremen,Paris,London;

    //initialization for Bremen
    Bremen.setName("Bremen");
    Bremen.setInhabitants(50000);
    Bremen.setMayor("Andreas Bovenschulte");
    Bremen.setArea(120);

    //initialization for Paris
    Paris.setName("Paris");
    Paris.setInhabitants(2000000);
    Paris.setMayor("Anne Hidalgo");
    Paris.setArea(1000);

    //initialization for London
    London.setName("London");
    London.setInhabitants(9000000);
    London.setMayor("Sadiq Khan");
    London.setArea(1000);

    //printing the information
    cout << "City Information:" << endl;
    Bremen.printInfo();
    cout << endl;
    Paris.printInfo();
    cout << endl;
    London.printInfo();

    return 0;
}
