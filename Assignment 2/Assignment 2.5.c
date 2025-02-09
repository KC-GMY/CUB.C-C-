/* CH-230-A
 a2_p5.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>

int main (){
  int a;
  //declaration of the integer
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("a=%d",a);
  //reading and printing the integer from the user input
  int *ptr_a= &a;
  //declaration and initialization of the pointer
  printf("\nThe address of the pointer is: %p", ptr_a);
  //printing the address of the pointer
  *ptr_a= *ptr_a+5;
  printf("\nThe modified value is: %d\n", a);
  printf("The address of the variable is:%p", ptr_a);
  //printing the modified value of a and the address
  return 0;

}