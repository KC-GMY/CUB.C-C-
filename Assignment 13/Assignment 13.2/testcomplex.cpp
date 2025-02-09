/* CH-230-A
testcomplex.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include "Complex.h"

int main() {
    //creating 3 object
    Complex a,b;
    //opening the files
    ifstream in1("in1.txt",ios::in);
    ifstream in2("in2.txt",ios::in);
    ofstream out("output.txt",ios::out);
    if (!in1) {
		cerr << "Error opening input file " << endl;
		exit(2);
	}
    if (!in2) {
		cerr << "Error opening input file " << endl;
		exit(2);
	}
    if(!out) {
		cerr << "Error opening output file" << endl;
		exit(3);
	}
  //reading integers from the files
  in1>>a;
  in2>>b;
  //Printing the sum, the difference and the product of the complex numbers
  //in the output file as well as the screen
  cout<<"Sum: "<<a+b;
  out<<"Sum: "<<a+b;
  cout<<"Difference: "<<a-b;
  out<<"Difference: "<<a-b;
  cout<<"Product: "<<a*b;
  out<<"Product: "<<a*b;
  return 0;
}