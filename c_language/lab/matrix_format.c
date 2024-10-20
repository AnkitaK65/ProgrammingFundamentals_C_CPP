//WAP to Take the size of a 2D array and print it in matrix format.

#include <stdio.h>  // Include input/output stream library

int main() {
    int rows, cols;  // Declare variables for the number of rows and columns

    // Input: Asking user to enter the size of the 2D array (rows and columns)
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];  // Declare the 2D array with user-defined size

    // Input: Asking user to enter the elements of the 2D array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);  // Read each element into the array
        }
    }

    // Output: Printing the 2D array in matrix format
    printf("The array in matrix format is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);  // Print each element followed by a space
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;  // Indicate that the program ended successfully
}
