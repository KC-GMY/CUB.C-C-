/* CH-230-A
testPlayer.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "TournamentMember.h"

using namespace std;

int main() {
    cout << "Test Default constructor:" << endl;
    Player p1;
    p1.printp();

    cout << "Test parameterized constructor:" << endl;
    Player p2("Alvaro","Arbeloa","1983-01-17",41,180,3,"RB",4,false);
    p2.printp();

    cout << "Test copy constructor:" << endl;
    Player p3=p2;
    p3.printp();

    //changing location
    p1.change_loc("Hamburg");
    cout<<"New: \n";
    p1.printp();
    p2.printp();
    return 0;
}