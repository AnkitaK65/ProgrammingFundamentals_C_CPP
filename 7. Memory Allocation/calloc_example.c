// Topic: calloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocating memory for 5 integers
    int* ptr = calloc(5, sizeof(int));
    // The calloc (or any malloc family function: malloc, realloc) function returns a void * pointer,
    //  which is automatically and implicitly converted to any other pointer type in C
    
    // In C++, however, an explicit cast like (int *) is required because C++ is stricter about type conversions.
    // int* ptr = (int*)calloc(5, sizeof(int));


    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Displaying initialized values
    printf("Allocated memory contains: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]); // Values will be 0
    }
    printf("\n");

    // Freeing the allocated memory
    free(ptr);

    return 0;
}

// Allocated memory contains: 0 0 0 0 0 
