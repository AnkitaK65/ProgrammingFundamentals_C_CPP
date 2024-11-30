// Topic: Passing Pointer to Array in C++

#include <iostream>
using namespace std;

// Function to print array elements using a pointer
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Access array elements using pointer
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};               // Declare and initialize an array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    // Passing pointer to array
    printArray(arr, size);

    return 0;
}
/*
Explanation:
- printArray(int *arr, int size) accepts a pointer to an integer and the size of the array.
- The function uses the pointer arr to access each element of the array.
- The size of the array is passed as an argument to avoid accessing out-of-bounds memory.
- arr[i]is equivalent to *(arr + i).

*/

//1 2 3 4 5

