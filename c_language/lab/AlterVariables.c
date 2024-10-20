#include <stdio.h>

/*
Question:
Write a program in which a function is passed the address of two variables and then alter its contents.
*/

// Function to alter the contents of two variables
void alter(int *a, int *b) {
    *a += 10; // Add 10 to the value at the address of a
    *b *= 2;  // Multiply the value at the address of b by 2
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Print values before alteration
    printf("Before alteration: num1 = %d, num2 = %d\n", num1, num2);

    // Call the alter function
    alter(&num1, &num2);

    // Print values after alteration
    printf("After alteration: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
