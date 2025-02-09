/*CH-230-A
Critter.h
Omar Benmoussa
obenmoussa@constructor.university*/

#include <string> 
#include <iostream>

using namespace std;

class Critter {
    private:  
        string name;
        double hunger;  // hunger level as a percentage (0.0 to 1.0)
        int boredom;
        double height;

        //helper methods for conversion between hunger scales
        int hungerToInt();
        void setHungerAsDouble(int);

    public:
        // default constructor, with name parameter and multiple paramaters 
        Critter();
        Critter(string newname);
        Critter(string newname, int newhunger, int newboredom, 
                double newheight = 10);

        //setter and getter methods
        void setName(string& newname);
        //setter and getter for hunger
        void setHunger(int newhunger);
        int getHunger();
        void setBoredom(int newboredom);
        void setHeight(double newheight);
        string getName();
        int getBoredom();
        double getHeight();

        //service method
        void print();
};
