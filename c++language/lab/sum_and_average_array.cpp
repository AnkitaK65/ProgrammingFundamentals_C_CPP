// WAP to Calculate and print the sum and average of array elements.

#include <iostream>  // Include input/output stream library
using namespace std;

int main() {
    int n;  // Declare variable for number of elements
    float sum = 0, avg;  // Declare variables for sum and average

    // Input: Asking user to enter the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare the array of size n

    // Input: Asking user to enter the elements of the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];  // Add the element to sum
    }

    // Calculation: Calculate average
    avg = sum / n;

    // Output: Printing the sum and average of the array
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << avg << endl;

    return 0;  // Indicate that the program ended successfully
}
