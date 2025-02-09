/* CH-230-A
TournamentMember.h
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include <string>
#ifndef __TESTTOURNAMENTMEMBER_H
#define __TESTTOURNAMENTMEMBER_H

using namespace std;

class TournamentMember{
private:
    string f_name;
    string l_name;
    string d_birth;
    int age;
    int height;
public:
    //Static Location shared by all members
    static string Location;

    //getters
    string getf_name();
    string getl_name();
    string getd_birth();
    int getAge();
    int getHeight();

    //setters
    void setf_name(string);
    void setl_name(string);
    void setd_birth(string);
    void setAge(int);
    void setHeight(int);

    //constructor
    TournamentMember();
    //parameterized constructor
    TournamentMember(string,string,string,int,int);
    //destructor
    ~TournamentMember();
    //copy constructor
    TournamentMember(TournamentMember &);

    //print methods
    void print();
    void change_loc(const string&);
};

class Player: public TournamentMember{
    private:
    int number;
    string position;
    int goals=0;
    bool isLeftFooted;
    public:
    //setter and getter
    void setNumber(int);
    int getNumber();
    void setPosition(string);
    string getPosition();
    int getGoals();
    void setFootedness(bool);
    bool getFootedness();
    //print method
    void printp();
    //increment method
    void goalincrem(int);
    //default constructor
    Player();
    //parameterized constructor
    Player(string,string,string,int,int,int, string, int,bool);
    //copy constructor
    Player(Player &);
    //destructor
    ~Player();
};
#endif