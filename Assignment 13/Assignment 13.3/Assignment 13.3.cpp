/* CH-230-A
Assignment 13.3.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
#include <fstream>

using namespace std;

int main (){
 //declaring and reading an int from the user input
 int n;
 cout<<"Enter the number of files: ";
 cin>>n;
 cin.ignore();
 //declaring an array of n strings
 string *p=new string[n];
 //reading the strings from the user input
 for(int i=0;i<n;i++){
  cout<<"Enter the file name: ";
  getline(cin,p[i]);
 }
 //opening the files and copying the content
 ofstream out("concatn.txt",ios::binary);
 if(!out) {
		cerr << "Error opening output file" << endl;
		exit(3);
	}
 for(int i=0;i<n;i++){
  ifstream in(p[i],ios::binary);
  if (!in) {
		cerr << "Error opening input file " << endl;
		exit(2);
	 }
  out<<in.rdbuf();
  out<<'\n';
  in.close();
 }
 delete[] p;
 out.close();
 return 0;
}