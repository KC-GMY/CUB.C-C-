#include "TournamentMember.h"

int main() {
    // Testing Default Constructor
    TournamentMember member1;
    member1.print();

    // Testing Parameterized Constructor
    TournamentMember member2("John", "Doe", "1995-03-15", "Berlin", 28, 180);
    member2.print();

    // Testing Copy Constructor
    TournamentMember member3(member2);
    member3.print();

    // Testing Static Location
    TournamentMember::setLocation("Hamburg");
    cout << "Location set to: " << TournamentMember::getLocation() << endl;

    member1.print(); // Verify location change
    member2.print();

    return 0;
}
