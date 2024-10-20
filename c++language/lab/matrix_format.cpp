//WAP to Take the size of a 2D array and print it in matrix format.

#include <iostream>  // Include input/output stream library
using namespace std;

int main() {
    int rows, cols;  // Declare variables for the number of rows and columns

    // Input: Asking user to enter the size of the 2D array (rows and columns)
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];  // Declare the 2D array with user-defined size

    // Input: Asking user to enter the elements of the 2D array
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];  // Read each element into the array
        }
    }

    // Output: Printing the 2D array in matrix format
    cout << "The array in matrix format is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";  // Print each element followed by a space
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;  // Indicate that the program ended successfully
}
