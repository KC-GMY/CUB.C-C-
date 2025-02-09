/* CH-230-A
City.h
Omar Benmoussa
obenmoussa@constructor.university*/

#include <string>
using namespace std;
class City {
private:
    string name;
    int inhabitants;
    string mayor;
    double area;

public:
    //setters
    void setName(string& newName);
    void setInhabitants(int newInhabitants);
    void setMayor(string& newMayor);
    void setArea(double newArea);

    //getters
    string getName() ;
    int getInhabitants() ;
    string getMayor() ;
    double getArea() ;

    //service method
    void printInfo() ;
};