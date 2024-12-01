// Topic: malloc
#include <stdio.h>
#include <stdlib.h>
// stdlib.h is used for dynamic memory allocation functions like malloc and free.

int main() {
    // Allocating memory for 5 integers
    int* ptr = (int*)malloc(5 * sizeof(int));
    // allocates memory for 5 integers in a contiguous block of memory.


    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Using the allocated memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1; // Assigning values
    }
    // ptr[i] is equivalent to *(ptr + i)

    // Displaying the values
    printf("Allocated memory contains: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(ptr);

    return 0;
}

//Allocated memory contains: 1 2 3 4 5 
