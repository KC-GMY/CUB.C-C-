/* CH-230-A
 a1_p4.c
 Omar Benmoussa
 obenmoussa@constructor.university*/
#include <stdio.h>
int main () {
    int x=17, y=4; //initialisation and declaration of x and y
    int sum=x+y;
    printf ("x=%d\ny=%d\nsum=%d\nproduct=%d\n", x, y, x+y, x*y);
    printf("difference=%d\ndivision=%f\nremainder of division=%d", x-y, (float) x/y,x%y);
    // print of x, y, sum, product, difference, division, and remainder of division.
    return 0;
}