// Write a program to check whether a given number is prime or not.

#include <stdio.h>

int main() {
    int num, i, flag = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        // Check if the number has divisors other than 1 and itself
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        // Output the result
        if (flag == 0)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}
