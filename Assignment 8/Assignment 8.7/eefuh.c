#include <stdio.h>
#include <stdlib.h>

int main() {
    // Array to store the doubles
    double buffer[5];

    // Open the binary file for reading
    FILE *file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error: Cannot open file\n");
        exit(1);
    }

    // Read 5 doubles from the file
    size_t elements_read = fread(buffer, sizeof(double), 5, file);

    // Check if the correct number of elements were read
    if (elements_read != 5) {
        printf("Error: Could only read %zu elements from the file\n", elements_read);
    } else {
        printf("Successfully read 5 doubles:\n");
        for (size_t i = 0; i < 5; i++) {
            printf("buffer[%zu] = %lf\n", i, buffer[i]);
        }
    }

    // Close the file
    fclose(file);
    return 0;
}
