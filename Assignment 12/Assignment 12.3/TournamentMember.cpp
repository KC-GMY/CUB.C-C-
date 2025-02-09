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

//setters for the player class
void Player::setNumber(int a){
    number=a;
}
void Player::setPosition(string a){
    position=a;
}
void Player::setFootedness(bool a){
    isLeftFooted=a;
}
//getters for the player class
int Player::getNumber(){
    return number;
}
string Player::getPosition(){
    return position;
}
int Player::getGoals(){
    return goals;
}
bool Player::getFootedness(){
    return isLeftFooted;
}
//print method
void Player::printp(){
    Player::print();
    cout<<"Number: "<<number<<endl;
    cout<<"Position: "<<position<<endl;
    cout<<"Goals: "<<goals<<endl;
    if(isLeftFooted==1){
        cout<<"Footedness: Left\n";
    }
    else{
        cout<<"Footedness: Right\n";
    }
}
//increment method
void Player::goalincrem(int a){
    goals+=a;
}
//default constructor
Player::Player():TournamentMember::TournamentMember(){
    setNumber(1);
    setPosition("LB");
    setFootedness(1);
    cout << "Player default constructor called" << endl;
}
//parameterized constructor
Player::Player(string a,string b,string c,int d,int e,int f, string g, int h,
bool i):TournamentMember::TournamentMember(a,b,c,d,e){
    setNumber(f);
    setPosition(g);
    goalincrem(h);
    setFootedness(i);
    cout << "Player Parameterized constructor called" << endl;
}
//copy constructor 
Player::Player(Player &a):TournamentMember::TournamentMember(a){
    setNumber(a.number);
    setPosition(a.position);
    goalincrem(a.goals);
    setFootedness(a.isLeftFooted);
    cout << "Player-Copy constructor called" << endl;
}
//destructor
Player::~Player(){
    cout<<"Player destructor called"<<endl;
}
