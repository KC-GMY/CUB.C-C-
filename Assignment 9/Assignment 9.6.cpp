/* CH-230-A
a9_p6.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

//receives an array of int and returns the first pos. even int in the array
int myfirst(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            return arr[i];
        }
    }
    return -1;
}

//receives an array of floats, returns the first neg. double without fraction
double myfirst(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i]<0&&arr[i]==static_cast<int>(arr[i])) {
            return arr[i];
        }
    }
    return -1.1;
}

//receives an array of char returns the first consonant in the array
char myfirst(char arr[], int size) {
    for (int i = 0; i <size; i++) {
        char ch = tolower(arr[i]);
        if ((ch >= 'a' && ch <= 'z') && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            return arr[i];
        }
    }
    return '0';
}

int main() {
    //declaring and reading an int and array of int from the user input
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;
    int intArr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> intArr[i];
    }
    //printing the result of the function
    cout << "First positive even integer: " << myfirst(intArr,n) << endl;
    //declaring and reading an int and array of double from the user input
    int m;
    cout << "Enter the number of doubles: ";
    cin >> m;
    double d_arr[m];
    cout << "Enter " << m << " doubles: ";
    for (int i = 0; i < m; i++) {
        cin >> d_arr[i];
    }
    //printing the result of the function
    cout<<"First negative integer double: "<<myfirst(d_arr,m)<< endl;
    //declaring and reading an int and array of char from the user input
    int l;
    cout << "Enter the number of characters: ";
    cin >> l;
    char charArr[l];
    cout << "Enter " << l << " characters: ";
    for (int i = 0; i < l; i++) {
        cin >> charArr[i];
    }
    //printing the result of the function
    cout<<"First consonant:"<< myfirst(charArr, l)<< endl;
    return 0;
}
