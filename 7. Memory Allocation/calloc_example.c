// Topic: calloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocating memory for 5 integers
    int* ptr = (int*)calloc(5, sizeof(int));

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
