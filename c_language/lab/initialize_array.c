//WAP to Initialize a 1D array with specific values and print it.

#include <stdio.h>  // Include input/output stream library

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Initialize the array with specific values

    // Output: Printing the elements of the array
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // Print each element followed by a space
    }

    return 0;  // Indicate that the program ended successfully
}
