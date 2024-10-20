#include <iostream>
using namespace std;

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
    cout << "Enter the number of terms for the series: ";
    cin >> n;
    cout << "Sum of first " << n << " terms of the series: " << sumOfSeries1(n) << endl;

    return 0;
}
