/* CH-230-A
a9_p8.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
using namespace std;

//finds the max value in the array and subtract it from all elements
void subtract_max(int *arr,int size) {
    int max_value=arr[0];
    for (int i=1;i<size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    for (int i=0;i<size;i++) {
        arr[i]-=max_value;
    }
}

//deoallocating memory for the received array
void deallocate(int *&arr) {
    delete[] arr;
    arr=nullptr;
}

int main() {
    //declaring and reading an int from the user
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    //dynamically allocating memory for the array
    int *a=new int[n];
    cout<<"Enter "<<n<<" integer values: ";
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    //calling the subtract_max function
    subtract_max(a,n);

    //printing the array after subtracting the maximum value
    cout << "Array after subtracting the maximum value: ";
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //calling the deallocate function
    deallocate(a);
    return 0;
}
