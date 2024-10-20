#include <stdio.h>

/*
Question:
3. Compute the sum of the first n terms of the series S = 1 + 1/2 + 1/3 + 1/4 + ...
*/

// Function to compute the sum of the series S = 1 + 1/2 + 1/3 + 1/4 + ...
double sumOfSeries1(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; // Add 1/i to the sum
    }
    return sum;
}

int main() {
    int n;

    // Get user input
    printf("Enter the number of terms for the series: ");
    scanf("%d", &n);
    printf("Sum of first %d terms of the series: %.2f\n", n, sumOfSeries1(n));

    return 0;
}
