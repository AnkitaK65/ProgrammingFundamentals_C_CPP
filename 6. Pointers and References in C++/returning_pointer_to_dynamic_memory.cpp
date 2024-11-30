// Topic: Returning Pointer to Dynamically Allocated Memory in C++

#include <iostream>
using namespace std;

// Function to create a number using dynamic memory allocation
int* createNumber() {
    int* num = new int(20);  // Dynamically allocate memory for an integer
    return num;              // Return the pointer to the allocated memory
}

int main() {
    // Call the function and store the returned pointer
    int* ptr = createNumber();

    // Access the dynamically allocated value
    cout << "Value: " << *ptr << endl;

    // Free the dynamically allocated memory to prevent memory leaks
    delete ptr;

    return 0;
}

//Value: 20