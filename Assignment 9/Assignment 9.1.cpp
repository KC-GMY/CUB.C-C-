/* CH-230-A
a9_p1.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
using namespace std;

int main() {
    //declaring a string
    string s;
    std::cout<<"Enter your country of origin: ";
    //reading the string from the user input
    getline(cin,s);
    //printing the string
    std::cout<<"Your country is: ";
    std::cout<< s;
    return 0;
}