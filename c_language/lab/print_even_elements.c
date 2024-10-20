// WAP to Input an array and print even-valued elements.

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

    // Output: Printing even-valued elements
    printf("Even-valued elements in the array are:\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);  // Print the even element
        }
    }

    return 0;  // Indicate that the program ended successfully
}
