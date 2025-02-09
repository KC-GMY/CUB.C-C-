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

#endif