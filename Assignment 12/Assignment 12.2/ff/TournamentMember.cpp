/* CH-230-A
TournamentMember.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "TournamentMember.h"
using namespace std;

//initializing static member
string TournamentMember::Location = "Bremen";
//setters
void TournamentMember::setf_name(string a) {
    f_name=a;
}
void TournamentMember::setl_name(string a) {
    l_name=a;
}
void TournamentMember::setd_birth(string a) {
    d_birth=a;
}
void TournamentMember::setAge(int a){
    age=a;
}
void TournamentMember::setHeight(int a){
    height=a;
}
//getters
string TournamentMember::getf_name(){
    return f_name;
}
string TournamentMember::getl_name(){
    return l_name;
}
string TournamentMember::getd_birth(){
    return d_birth;
}
int TournamentMember::getAge(){
    return age;
}
int TournamentMember::getHeight(){
    return height;
}

//default constructor
TournamentMember::TournamentMember() {
    cout << "Default constructor called" << endl;
    f_name = "First";
    l_name = "Last";
    d_birth= "2001-01-01";
    Location = "Bremen";
    age=18;
    height=180;
}

//parameterized constructor
TournamentMember::TournamentMember(string f_name,
 string lname,string birth, int a, int h) {
    cout << "Parameterized constructor called" << endl;
    setf_name(f_name);
    setl_name(lname);
    setd_birth(birth);
    setAge(a);
    setHeight(h);
}
//destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor called" << endl;
}
//copy constructor
TournamentMember::TournamentMember(TournamentMember& o) {
    cout << "Copy constructor called" << endl;
    (o.getf_name());
    setl_name(o.getl_name());
    setd_birth(o.getd_birth());
    setAge(o.age);
    setHeight(o.height);
}

//printing methods
void TournamentMember::print(){
    cout<<"Member presentation:\n";
    cout << "First Name: " << f_name << endl;
    cout << "Last Name: " << l_name << endl;
    cout << "Date of Birth: " << d_birth << endl;
    cout << "Location: " << Location << endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;
}
//changing location method
void TournamentMember::change_loc(const string& newloc) {
    Location = newloc;
    cout << "The new location is: " << newloc << endl;
}