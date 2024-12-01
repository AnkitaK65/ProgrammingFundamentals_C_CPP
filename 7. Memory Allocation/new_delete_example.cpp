// Topic: new and delete operator

#include <iostream>
using namespace std;

int main() {
    // Allocating memory for a single integer
    int* ptr = new int;
    
    // Assigning a value to the allocated memory
    *ptr = 10;

    // Displaying the value
    cout << "Allocated integer value: " << *ptr << endl;

    // Deallocating the memory
    delete ptr;
    
    // Allocating memory for an array of 5 integers
    int* arr = new int[5];
    
    // Assigning values to the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Displaying the array values
    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocating the array memory
    delete[] arr;

    return 0;
}
// Allocated integer value: 10
// Array values: 1 2 3 4 5