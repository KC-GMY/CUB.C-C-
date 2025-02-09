#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

#include <iostream>
#include <cstring>

class TournamentMember {
private:
    char f_name[36];   // First name
    char l_name[36];   // Last name
    char d_birth[11];  // Date of birth in yyyy-mm-dd format
    static char location[50]; // Static property for location
    int age;           // Age
    int height;        // Height in cm

public:
    // Constructors and Destructor
    TournamentMember();
    TournamentMember(const char*, const char*, const char*, const char*, int, int);
    TournamentMember(const TournamentMember&);
    ~TournamentMember();

    // Setter and Getter Methods
    void setF_name(const char*);
    const char* getF_name() const;

    void setL_name(const char*);
    const char* getL_name() const;

    void setD_birth(const char*);
    const char* getD_birth() const;

    static void setLocation(const char*);
    static const char* getLocation();

    void setAge(int);
    int getAge() const;

    void setHeight(int);
    int getHeight() const;

    // Other Methods
    void print() const;
};

#endif