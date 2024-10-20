#include <stdio.h>
#include <stdlib.h> // For malloc and free

/*
Question:
Write a program to find the sum of n elements entered by the user.
To write this program, allocate memory dynamically using malloc() / calloc() functions.
*/

int main() {
    int n, *arr, sum = 0;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if allocation failed
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    printf("Sum of the elements: %d\n", sum);

    // Free the allocated memory
    free(arr);

    return 0;
}
