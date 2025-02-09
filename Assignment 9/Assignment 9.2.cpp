/* CH-230-A
a9_p2.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
using namespace std;

int main() {
    //declaring an int, double, string and reading them from the user input
    int n;
    double x;
    string s;
    cout << "Enter an int, a double and a string: ";
    cin >> n >> x >> s;

    //printing s and x n times
    for (int i = 0; i < n; ++i) {
        cout << s << ":" << x << endl;
    }
    return 0;
}