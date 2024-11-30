// Topic: Passing Arrays of Pointers (Array of Strings)

#include <iostream>
using namespace std;

// Function to print an array of strings
void printStrings(const char* arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  // Access and print each string
    }
    cout << endl;
}

int main() {
    // Initialize an array of string pointers
    const char* names[] = {"Alice", "Bob", "Charlie"};
    int size = sizeof(names) / sizeof(names[0]);  // Calculate size of the array

    // Passing array of pointers to the function
    printStrings(names, size);

    return 0;
}
// Alice Bob Charlie