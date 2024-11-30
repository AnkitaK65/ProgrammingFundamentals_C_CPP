// Topic: Multidimensional Arrays as Pointers

#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Pointer to the first row of the array
    int (*ptr)[3] = arr;  // Pointer to an array of 3 integers

    // Accessing elements using pointer arithmetic
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(ptr + i) + j) << " ";  // Dereferencing pointer to access elements
        }
        cout << endl;
    }

    return 0;
}
// 1 2 3 
// 4 5 6 