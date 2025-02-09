#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(void)
{
	Critter c;

	string inputname;
	int hunger;
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, inputname);
	c.setName(inputname);
	//c.name = "fdafa";
	//c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print();
    return 0;
}