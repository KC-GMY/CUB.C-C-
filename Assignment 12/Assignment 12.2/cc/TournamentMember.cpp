#include "TournamentMember.h"

using namespace std;

// Initialize the static member variable
char TournamentMember::location[50] = "Default Location";

// Default Constructor
TournamentMember::TournamentMember() {
    strncpy(f_name, "DefaultFirstName", sizeof(f_name) - 1);
    f_name[sizeof(f_name) - 1] = '\0';

    strncpy(l_name, "DefaultLastName", sizeof(l_name) - 1);
    l_name[sizeof(l_name) - 1] = '\0';

    strncpy(d_birth, "2000-01-01", sizeof(d_birth) - 1);
    d_birth[sizeof(d_birth) - 1] = '\0';

    age = 18;
    height = 170;

    cout << "Default constructor called." << endl;
}

// Parameterized Constructor
TournamentMember::TournamentMember(const char* first, const char* last, const char* dob, const char* loc, int a, int h) {
    strncpy(f_name, first, sizeof(f_name) - 1);
    f_name[sizeof(f_name) - 1] = '\0';

    strncpy(l_name, last, sizeof(l_name) - 1);
    l_name[sizeof(l_name) - 1] = '\0';

    strncpy(d_birth, dob, sizeof(d_birth) - 1);
    d_birth[sizeof(d_birth) - 1] = '\0';

    setLocation(loc);
    age = a;
    height = h;

    cout << "Parameterized constructor called." << endl;
}

// Copy Constructor
TournamentMember::TournamentMember(const TournamentMember& other) {
    strncpy(f_name, other.f_name, sizeof(f_name));
    strncpy(l_name, other.l_name, sizeof(l_name));
    strncpy(d_birth, other.d_birth, sizeof(d_birth));
    age = other.age;
    height = other.height;

    cout << "Copy constructor called." << endl;
}

// Destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor called." << endl;
}

// Setter and Getter Methods
void TournamentMember::setF_name(const char* first) {
    strncpy(f_name, first, sizeof(f_name) - 1);
    f_name[sizeof(f_name) - 1] = '\0';
}

const char* TournamentMember::getF_name() const {
    return f_name;
}

void TournamentMember::setL_name(const char* last) {
    strncpy(l_name, last, sizeof(l_name) - 1);
    l_name[sizeof(l_name) - 1] = '\0';
}

const char* TournamentMember::getL_name() const {
    return l_name;
}

void TournamentMember::setD_birth(const char* dob) {
    strncpy(d_birth, dob, sizeof(d_birth) - 1);
    d_birth[sizeof(d_birth) - 1] = '\0';
}

const char* TournamentMember::getD_birth() const {
    return d_birth;
}

void TournamentMember::setLocation(const char* loc) {
    strncpy(location, loc, sizeof(location) - 1);
    location[sizeof(location) - 1] = '\0';
}

const char* TournamentMember::getLocation() const {
    return location;
}

void TournamentMember::setAge(int a) {
    age = a;
}

int TournamentMember::getAge() const {
    return age;
}

void TournamentMember::setHeight(int h) {
    height = h;
}

int TournamentMember::getHeight() const {
    return height;
}

// Print Method
void TournamentMember::print() const {
    cout << "Member Details:" << endl;
    cout << "First Name: " << f_name << endl;
    cout << "Last Name: " << l_name << endl;
    cout << "Date of Birth: " << d_birth << endl;
    cout << "Location: " << location << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
}
