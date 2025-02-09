/* CH-230-A
Critter.h
Omar Benmoussa
obenmoussa@constructor.university*/

#include <string>

/* First C++ class */
class Critter
{
    private:  // data members are private
        std::string name;
        int hunger;
        int boredom;
        double height;
        
        //declaring the new properties
        int health;
        std::string color;

    public: // business logic methods are public
        // setter methods
        void setName(std::string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        
        //setters for health level and color
        void sethealth(int newhealth);
        void setColor(std::string newColor);

        // getter methods
        int getHunger();
        
        //getters for health level and color
        int gethealth();
        std::string getColor();

        //service method
        void print();
};
