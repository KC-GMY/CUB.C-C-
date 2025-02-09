/* CH-230-A
TounamentMember.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "TournamentMember.h"

//setter and getter methods
string TournamentMember::setF_name(string a){
    for(int i=0;i<36;i++){
     f_name[i]=a[i];
    }
    f_name.resize(36);
    return f_name;
}
string TournamentMember::getF_name(){
    return f_name;
}
string TournamentMember::setL_name(string a){
    for(int i=0;i<36;i++){
     l_name[i]=a[i];
    }
    l_name.resize(36);
    return l_name;
}
string TournamentMember::getL_name(){
    return l_name;
}
string TournamentMember::setD_birth(string a){
    for(int i=0;i<11;i++){
     d_birth[i]=a[i];
    }
    d_birth.resize(11);
    return d_birth;
}
string TournamentMember::getD_birth(){
    return d_birth;
}
string TournamentMember::setLocation(string a){
    return location=a;
}
string TournamentMember::getLocation(){
    return location;
}
int TournamentMember::setAge(int a){
    return age=a;
}
int TournamentMember::getAge(){
    return age;
}
int TournamentMember::setHeight(int a){
    return height=a;
}
int TournamentMember::getHeight(){
    return height;
}

//empty constructor
TournamentMember::TournamentMember(){
    setF_name("Random");
    setL_name("Member");
    setD_birth("2001-01-01");
    setLocation("Bremen");
    setAge(18);
    setHeight(180);
    cout<<"Default constructor called.\n";
}
//parameterized constructor
TournamentMember::TournamentMember(string a,string b,string c,string d,
int e,int f){
    setF_name(a);
    setL_name(b);
    setD_birth(c);
    setLocation(d);
    setAge(e);
    setHeight(f);
    cout<<"Parameterized constructor called.\n";
}
//destructor
TournamentMember::~TournamentMember(){
    cout<<"Destructor called.\n";
}
//copy constructor
TournamentMember::TournamentMember(const TournamentMember& a):f_name(a.f_name),
l_name(a.l_name),d_birth(a.d_birth),location(a.location), age(a.age),
height(a.height){
    cout<<"Copy constructor called.\n";
}
//print method
void TournamentMember::print(){
    cout<<"Member presentation:\n";
    cout<<"First Name: "<<f_name<<endl;
    cout<<"Last Name: "<<l_name<<endl;
    cout<<"Date of birth: "<<d_birth<<endl;
    cout<<"Location: "<<location<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;
}