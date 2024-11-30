// Topic: Declaring and Dereferencing Pointers in C++

#include <iostream>
using namespace std;

int main() {
    int num = 25;       // Declare an integer variable and initialize it with 25
    int *ptr = &num;    // Declare a pointer 'ptr' and initialize it with the address of 'num'

    // Output the value of 'num'
    cout << "Value of num: " << num << endl;

    // Output the address of 'num'
    cout << "Address of num: " << &num << endl;

    // Output the address stored in pointer 'ptr' (which is the address of 'num')
    cout << "Value stored in ptr: " << ptr << endl;

    // Dereference the pointer 'ptr' to access the value of 'num'
    cout << "Value pointed to by ptr (dereferencing): " << *ptr << endl;

    // Modify the value of 'num' using the pointer 'ptr'
    *ptr = 50; 

    // Output the new value of 'num' after modification through the pointer
    cout << "New value of num after modification through ptr: " << num << endl;

    return 0;
}

// Value of num: 25
// Address of num: 0x16f6db118
// Value stored in ptr: 0x16f6db118
// Value pointed to by ptr (dereferencing): 25
// New value of num after modification through ptr: 50