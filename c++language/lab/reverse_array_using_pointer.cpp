// Q. Pointers and Arrays: Input 10 integers into an array. Use a pointer to print them in reverse order.

#include <iostream>
using namespace std;

int main() {
    int arr[10];  // Declare an array to store 10 integers
    int* ptr = arr;  // Pointer to the array
    
    // Input 10 integers into the array
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    // Print the integers in reverse order using the pointer
    cout << "The integers in reverse order are: ";
    for (int i = 9; i >= 0; i--) {
        cout << *(ptr + i) << " ";  // Dereference pointer and print the value
    }
    cout << endl;
    
    return 0;
}

/*
Output:
Enter 10 integers: 1 2 3 4 5 6 7 8 9 10
The integers in reverse order are: 10 9 8 7 6 5 4 3 2 1
*/