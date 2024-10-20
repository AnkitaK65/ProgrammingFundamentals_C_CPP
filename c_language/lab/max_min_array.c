//WAP to Print the maximum and minimum elements of an array.

#include <stdio.h>  // Include input/output stream library

int main() {
    int n, i, max, min;  // Declare variables for number of elements, loop counter, max, and min

    // Input: Asking user to enter the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size n

    // Input: Asking user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = min = arr[0];

    // Loop through the array to find max and min elements
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if the current element is greater
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if the current element is smaller
        }
    }

    // Output: Printing the maximum and minimum elements of the array
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;  // Indicate that the program ended successfully
}
