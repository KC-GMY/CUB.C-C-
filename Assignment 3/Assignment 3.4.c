/* CH-230-A
a3_p4.c
Omar Benmoussa
obenmoussa@constructor.university*/
#include <stdio.h>
int position(char str[], char c)
{
    int idx;

    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
        if(str[idx+1] == c){
        return idx+1;
        }
        //loops until it finds the first occurrence of the char in the string, return it
} //The only code in the for loop was to return idx so it returns the first value
}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    return 0;
    }
}