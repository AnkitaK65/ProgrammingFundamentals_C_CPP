// Topic: realloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocating memory for 3 integers
    int* arr = (int*)malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initializing the array
    for (int i = 0; i < 3; i++) {
        arr[i] = i + 1;
    }

    // Displaying the original array
    printf("Original array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resizing the array to hold 5 integers
    arr = (int*)realloc(arr, 5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initializing the new elements
    for (int i = 3; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Displaying the resized array
    printf("Resized array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(arr);

    return 0;
}
// Original array: 1 2 3 
// Resized array: 1 2 3 4 5 