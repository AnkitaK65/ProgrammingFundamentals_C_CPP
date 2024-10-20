//WAP to Print the maximum and minimum elements of an array.

#include <iostream>  // Include input/output stream library
using namespace std;

int main() {
    int n, max, min;  // Declare variables for number of elements, max, and min

    // Input: Asking user to enter the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare the array of size n

    // Input: Asking user to enter the elements of the array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with the first element of the array
    max = min = arr[0];

    // Loop through the array to find max and min elements
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if the current element is greater
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if the current element is smaller
        }
    }

    // Output: Printing the maximum and minimum elements of the array
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;  // Indicate that the program ended successfully
}
