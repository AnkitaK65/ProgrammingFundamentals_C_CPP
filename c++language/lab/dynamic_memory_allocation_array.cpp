// Q. Dynamic Memory Allocation: Use malloc, calloc, and new to allocate memory for an array. 
// Input values, calculate the sum, and free memory. 

// Note: malloc and calloc should be avoided in C++. Use new and delete instead, as they are safer, type-safe, and work better with constructors/destructors.

// Program to demonstrate dynamic memory allocation using malloc, calloc, and new
// It inputs values into an array, calculates the sum, and frees the memory.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Using malloc
    cout << "Enter the number of elements for malloc: ";
    cin >> n;
    int* arr_malloc = (int*)malloc(n * sizeof(int));
    if (arr_malloc == nullptr) {
        cout << "Memory allocation failed using malloc." << endl;
        return 1;
    }

    // Input values for malloc array
    cout << "Enter " << n << " integers for malloc array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr_malloc[i];
        sum += arr_malloc[i];
    }

    // Output sum for malloc array
    cout << "Sum of elements (malloc): " << sum << endl;

    // Free memory allocated by malloc
    free(arr_malloc);

    // Reset sum and n for next allocation
    sum = 0;

    // Using calloc
    cout << "\nEnter the number of elements for calloc: ";
    cin >> n;
    int* arr_calloc = (int*)calloc(n, sizeof(int));
    if (arr_calloc == nullptr) {
        cout << "Memory allocation failed using calloc." << endl;
        return 1;
    }

    // Input values for calloc array
    cout << "Enter " << n << " integers for calloc array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr_calloc[i];
        sum += arr_calloc[i];
    }

    // Output sum for calloc array
    cout << "Sum of elements (calloc): " << sum << endl;

    // Free memory allocated by calloc
    free(arr_calloc);

    // Reset sum and n for next allocation
    sum = 0;

    // Using new
    cout << "\nEnter the number of elements for new: ";
    cin >> n;
    int* arr_new = new int[n];
    if (arr_new == nullptr) {
        cout << "Memory allocation failed using new." << endl;
        return 1;
    }

    // Input values for new array
    cout << "Enter " << n << " integers for new array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr_new[i];
        sum += arr_new[i];
    }

    // Output sum for new array
    cout << "Sum of elements (new): " << sum << endl;

    // Free memory allocated by new
    delete[] arr_new;

    return 0;
}

/*
Output:
Enter the number of elements for malloc: 5
Enter 5 integers for malloc array: 1 2 3 4 5
Sum of elements (malloc): 15

Enter the number of elements for calloc: 3
Enter 3 integers for calloc array: 10 20 30
Sum of elements (calloc): 60

Enter the number of elements for new: 4
Enter 4 integers for new array: 7 8 9 10
Sum of elements (new): 34
*/