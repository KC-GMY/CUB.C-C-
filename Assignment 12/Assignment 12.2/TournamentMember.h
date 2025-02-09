/* CH-230-A
TounamentMember.h
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
using namespace std;

class TournamentMember{
    private:
        string f_name;
        string l_name;
        string d_birth;
        string location;
        int age;
        int height;
    public:
        //setter and getter methods
        string setF_name(string);
        string getF_name();
        string setL_name(string);
        string getL_name();
        string setD_birth(string);
        string getD_birth();
        string setLocation(string);
        string getLocation();
        int setAge(int);
        int getAge();
        int setHeight(int);
        int getHeight();
        //empty constructor
        TournamentMember();
        //parameterized constructor
        TournamentMember(string,string,string,string,int,int);
        //destructor
        ~TournamentMember();
        //copy constructor
        TournamentMember(const TournamentMember &);
        //print method
        void print();
};