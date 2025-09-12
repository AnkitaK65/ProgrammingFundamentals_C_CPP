/*
Topic: Basic Function
This program demonstrates a very simple function in C++ that prints a message.

A function is a block of code designed to perform a specific task.
*/

#include <iostream>
using namespace std;

void greet() {  
    cout << "Hello! This is my first function." << endl;
}

int main() {
    greet(); // calling the function
    return 0;
}

/*
Output:
Hello! This is my first function.
*/