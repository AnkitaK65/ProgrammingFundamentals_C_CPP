#include <stdio.h>

/*
Question:
6. Write a function to generate the prime numbers less than 100.
*/

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    printf("Prime numbers less than 100:\n");
    
    for (int num = 2; num < 100; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    return 0;
}
