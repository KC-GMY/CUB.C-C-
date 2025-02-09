/* CH-230-A
a9_p4.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
using namespace std;

//receives two integers and returns their difference
int mycount(int a, int b) {
    return b-a;
}

//receives a char, string, returns the occurrences of the char in the string
int mycount(char ch,string str) {
    int count = 0;
    for (char c:str) {
        if (c==ch) {
            count++;
        }
    }
    return count;
}

int main() {
    //declaring two integers and reading them from user input
    int a, b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<"The difference is: "<<mycount(a,b)<<endl;

    //declaring a character and a string, then reading them from user input
    char ch;
    string str;
    cout<<"Enter a character: ";
    cin>>ch;
    cin.ignore();
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<"The number of occurrences is:"<< mycount(ch, str)<<endl;
    return 0;
}