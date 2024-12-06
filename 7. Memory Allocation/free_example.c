#include <stdio.h>
#include <stdlib.h>

// Topic: free()
int main() {
    // Allocating memory for 5 integers
    int* arr = malloc(5 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initializing the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Displaying the array
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);
    arr = NULL; // Best practice: Set the pointer to NULL after freeing

    return 0;
}
// Array: 1 2 3 4 5 