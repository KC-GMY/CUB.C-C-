/* CH-230-A
 a2_p6.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>

int main (){
  double x,y;
  //declarations of the doubles
  printf("Enter the value of x: ");
  scanf("%lf",&x);
  printf("Enter the value of y: ");
  scanf("%lf",&y);
  //reading the two variables from the user input
  double *ptr_one=&x,*ptr_two=&x,*ptr_three=&y; 
  //declaration and initialization of the pointers
  printf("The memory of address of ptr_one is:%p",ptr_one);
  printf("\nThe memory of address of ptr_two is:%p",ptr_two);
  printf("\nThe memory of address of ptr_three is:%p",ptr_three);
  //printing the memory address of the three pointers
  return 0;
}