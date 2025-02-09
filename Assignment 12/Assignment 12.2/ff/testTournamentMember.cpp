/* CH-230-A
TestTournamentMember.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "TournamentMember.h"

using namespace std;

int main() {
    cout << "Test Default constructor:\n" << endl;
    TournamentMember p1;
    p1.print();

    cout << "Test parameterized constructor:\n" << endl;
    TournamentMember p2("Alvaro","Arbeloa","1983-01-17",41,180);
    p2.print();

    cout << "Test copy constructor:" << endl;
    TournamentMember p3=p2;
    p3.print();

    //changing location
    p1.change_loc("Frankfurt");
    p1.print();
    p2.print();
    return 0;
}