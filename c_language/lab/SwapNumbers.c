#include <stdio.h>

/*
Question:
Write a program that swaps two numbers using pointers.
*/

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a; // Store the value at the address of a
    *a = *b;       // Assign the value at the address of b to a
    *b = temp;    // Assign the stored value to b
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Print values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(&num1, &num2);

    // Print values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
