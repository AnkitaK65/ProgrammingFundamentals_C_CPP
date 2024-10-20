//WAP to remove duplicate elements from an array and print the result.

#include <stdio.h>  // Include input/output stream library

int main() {
    int n, i, j, k;  // Declare variables for number of elements and loop counters

    // Input: Asking user to enter the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size n

    // Input: Asking user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Removing duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // If a duplicate is found, shift all elements left to remove it
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  // Reduce the size of the array
                j--;  // Decrement j to check the shifted element
            }
        }
    }

    // Output: Printing the array after removing duplicates
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;  // Indicate that the program ended successfully
}
