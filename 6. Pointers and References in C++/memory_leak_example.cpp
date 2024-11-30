// Topic: Memory Leak in C++

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int(10); // Dynamically allocate memory and initialize with 10

    // Memory leak occurs because 'delete' is not called for the allocated memory
    // The memory remains allocated but inaccessible after the program ends

    //Add below 2 lines to Avoid Memory Leak:
    // delete ptr; // Free the dynamically allocated memory
    // ptr = nullptr; // Nullify the pointer to avoid dangling pointer issues

    return 0;
}
