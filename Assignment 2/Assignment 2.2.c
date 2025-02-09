/* CH-230-A
 a2_p2.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
 #include <stdio.h>

 int main (){
   char a; 
   printf("Enter a character: ");
   scanf("%c", &a);
   //reading a char from the user input
   printf("character=%c\ndecimal=%d\noctal=%o\nhexadecimal=%x",a,a,a,a);
   //printing the char as a character, decimal, octal and hexadecimal
   return 0;
 }