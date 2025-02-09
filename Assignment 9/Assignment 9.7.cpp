/* CH-230-A
a9_p7.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
using namespace std;

// swap ints
void swapping(int &a, int &b) {
    int temp =a;
    a=b;
    b=temp;
}

// swap floats
void swapping(float &x, float &y) {
    float temp=x;
    x=y;
    y=temp;
}

// swap char pointers
void swapping(const char* &str1, const char* &str2) {
    const char* temp=str1;
    str1=str2;
    str2=temp;
}

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}
