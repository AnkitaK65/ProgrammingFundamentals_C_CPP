// WAP to Print the elements of an array in reverse order.

#include <stdio.h>  // Include input/output stream library

int main() {
    int n, i;  // Declare variables for number of elements and loop counter

    // Input: Asking user to enter the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size n

    // Input: Asking user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output: Printing the elements of the array in reverse order
    printf("Array elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;  // Indicate that the program ended successfully
}
