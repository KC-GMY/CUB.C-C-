/* CH-230-A
a9_p3.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
using namespace std;

//receives a float variable, returns its absolute value
float _abs(float x) {
    if (x<0) {
        return -x;
    }
    else {
        return x;
    }
}

int main() {
    //declaring a float and reading it from the user input
    float number;
    cout<<"Enter a float number: ";
    cin>>number;
    //calling the function and storing the result
    float absvalue = _abs(number);
    //printing the absolute value of the float
    cout<<absvalue<<endl;
    return 0;
}