// Topic: Using Array as Pointer to Access Elements in C++

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare an array

    // Accessing array elements using pointer notation
    int *ptr = arr;  // Pointer to the first element of the array

    cout << "First element using pointer: " << *ptr << endl;  // Dereferencing pointer to get first element

    // Accessing other elements using pointer arithmetic
    cout << "Second element: " << *(ptr + 1) << endl;  // Accessing second element using pointer arithmetic
    cout << "Third element: " << *(ptr + 2) << endl;   // Accessing third element using pointer arithmetic

    return 0;
}
// First element using pointer: 10
// Second element: 20
// Third element: 30