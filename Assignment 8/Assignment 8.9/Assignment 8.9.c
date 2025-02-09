/* CH-230-A
a8_p9.c
Omar Benmoussa
obenmoussa@constructor.university */

#include <stdio.h>
#include <stdlib.h>
#define BS 64

int main() {
    //declaring an int a string ,reading the int from the user input
    int n;
    char fname[256];
    printf("Enter the number of files: ");
    scanf("%d", &n);
    //opening a file in binary write mode and checking if it was successfull
    FILE *pF = fopen("output.txt", "wb");
    if (pF==NULL) {
        printf("This file doesn't exist!");
        exit (1);
    }
    printf("Concating the content of %d files ...\nThe result is:\n", n);
    for (int i=0;i<n;i++) {
        //reading the filename from the user input
        printf("Enter a name: ", i + 1);
        scanf("%s",fname);
        //opening it in binary reading mode and checking if it was successfull
        FILE *pP=fopen(fname,"rb");
        if (pP==NULL) {
            printf("This file doesn't exist!");
            fclose(pF);
            exit (1);
        }
        //reading and writing the file content to the standard output and file
        char buffer[BS];
        size_t bytesRead;
        while ((bytesRead = fread(buffer, 1, 1, pP)) > 0) {
            fwrite(buffer, 1, bytesRead, stdout);
            fwrite(buffer, 1, bytesRead, pF);
        }
        fwrite("\n", 1, 1, stdout);
        fwrite("\n", 1, 1, pF);

        //closing the file
        fclose(pP);
    }

    //closing the output file
    fclose(pF);
    printf("The result was written into output.txt\n");
    return 0;
}