#include <stdio.h>

/*
Question:
7. Write a program to compute the factors of a given number.
*/

// Function to compute factors of a given number
void computeFactors(int number) {
    printf("Factors of %d are: ", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int number;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Compute and display the factors
    computeFactors(number);

    return 0;
}
