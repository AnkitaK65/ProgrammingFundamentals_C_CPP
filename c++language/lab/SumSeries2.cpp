#include <iostream>
using namespace std;

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
    cout << "Enter the number of terms for the series: ";
    cin >> n;
    cout << "Sum of first " << n << " terms of the series: " << sumOfSeries2(n) << endl;

    return 0;
}
