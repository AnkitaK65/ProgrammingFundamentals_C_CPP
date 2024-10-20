#include <stdio.h>

/*
Question:
4. Compute the sum of the first n terms of the series S = 1 - 2 + 3 - 4 + 5 - ...
*/

// Function to compute the sum of the series S = 1 - 2 + 3 - 4 + 5 - ...
int sumOfSeries2(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= i; // Subtract even numbers
        } else {
            sum += i; // Add odd numbers
        }
    }
    return sum;
}

int main() {
    int n;

    // Get user input
    printf("Enter the number of terms for the series: ");
    scanf("%d", &n);
    printf("Sum of first %d terms of the series: %d\n", n, sumOfSeries2(n));

    return 0;
}
