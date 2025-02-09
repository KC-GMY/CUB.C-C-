/* CH-230-A
Critter.h
Omar Benmoussa
obenmoussa@constructor.university */

using namespace std;

#include <string>

class Critter {
private:
    string name;
    int hunger;
    int boredom;
    double height;
    //new parameter
    double thirst;

public:
    //default constructor,with name parameter,multiple without and with thirst
    Critter();
    Critter(string name);
    Critter(string name, int hunger, int boredom, double height = 10); 
    Critter(string name, int hunger, int boredom, double height, double thirst);

    //setters and getters
    void setName(string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    string getName();
    int getHunger();
    int getBoredom();
    double getHeight();

    //setters and getter for thirst
    void setThirst(double newThirst);
    double getThirst();

    //service method
    void print();
};

#endif
