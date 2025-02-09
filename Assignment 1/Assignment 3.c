/* CH-230-A
 a1_p1.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h> //forgot the # to include the library
int main() {
float result;
int a = 5;
float b = 13.5; //Using the wrong data type for variable b
result = a / b;
printf("The result is %f\n", result); //using the format specifier for integer instead of float
return 0; 
}