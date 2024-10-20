// WAP to Calculate and print the sum and average of array elements.

#include <stdio.h>  // Include input/output stream library

int main() {
    int n, i;  // Declare variables for number of elements and loop counter
    float sum = 0, avg;  // Declare variables for sum and average

    // Input: Asking user to enter the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size n

    // Input: Asking user to enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add the element to sum
    }

    // Calculation: Calculate average
    avg = sum / n;

    // Output: Printing the sum and average of the array
    printf("Sum of array elements: %.2f\n", sum);
    printf("Average of array elements: %.2f\n", avg);

    return 0;  // Indicate that the program ended successfully
}
