/* CH-230-A
Assignment 13.1.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
 //declaring a string and reading from the user input
 string o_name;
 cout << "Enter a file name: ";
 getline(cin, o_name);

 // Create the output file name
 size_t dotPos = o_name.find_last_of('.');
 string Filename;
 Filename = o_name.substr(0,dotPos)+"_copy"+o_name.substr(dotPos);
 //opening files
 ifstream in(o_name,ios::binary);
 ofstream out(Filename,ios::binary);
 if (!in) {
		cerr << "Error opening input file " << endl;
		exit(2);
	}
 if(!out) {
		cerr << "Error opening output file" << endl;
		exit(3);
	}
 //copying content
 out<<in.rdbuf();
 cout<<"Copied into the new file: "<<Filename<<endl;
 return 0;
}