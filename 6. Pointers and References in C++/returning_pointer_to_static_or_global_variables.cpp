// Topic: Returning Pointer to Static or Global Variables in C++

#include <iostream>
using namespace std;

// Function to return a pointer to a static variable
int* getStaticVar() {
    static int num = 10;  // Static variable persists after the function ends
    return &num;          // Return the address of the static variable
}

int main() {
    // Call the function and store the returned pointer
    int *ptr = getStaticVar();

    // Use the pointer to access and display the static variable
    cout << "Value: " << *ptr << endl; // Access the value stored in the static variable

    return 0;
}
// Value: 10