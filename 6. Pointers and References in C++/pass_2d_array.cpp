// Topic: Passing Multidimensional Arrays

#include <iostream>
using namespace std;

// Function to print a 2D array
void print2DArray(int arr[][3], int rows) {  // Fixed number of columns (3) is specified
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";  // Accessing elements using array indexing
        }
        cout << endl;  // Move to the next line after printing each row
    }
}

int main() {
    // Initialize a 2x3 2D array
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Passing the 2D array to the function
    print2DArray(arr, 2);

    return 0;
}
// 1 2 3 
// 4 5 6