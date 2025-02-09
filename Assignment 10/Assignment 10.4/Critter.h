/* CH-230-A
Critter.h
Omar Benmoussa
obenmoussa@constructor.university*/

#include <string> 
#include <iostream>

using namespace std;

class Critter
{
    private:  //data members are private
        string name;
        int hunger;
        int boredom;
        double height;

    public: //business logic methods are public
        // default constructor, with name parameter and multiple paramaters 
        Critter();
        Critter(string newname);
        Critter(string newname,int newhunger,int newboredom,double newheight);

        //setter methods
        void setName(string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);

        //getter method
        int getHunger();

        //service method
        void print();
};
