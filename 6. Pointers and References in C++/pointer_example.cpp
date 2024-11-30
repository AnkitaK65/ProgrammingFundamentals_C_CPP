// Topic: Declaring and Initializing a Pointer in C++

#include <iostream>
using namespace std;

int main() {
    int num = 10;      // Normal integer variable
    int *ptr = &num;   // Pointer variable storing the address of 'num'

    // Output the value of 'num'
    cout << "Value of num: " << num << endl;
    
    // Output the address of 'num'
    cout << "Address of num: " << &num << endl;
    
    // Output the value stored in pointer 'ptr' (which is the address of 'num')
    cout << "Value stored in ptr (address of num): " << ptr << endl;
    
    // Output the value pointed to by pointer 'ptr' (which is the value of 'num')
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}

// Value of num: 10
// Address of num: 0x16b5b3138
// Value stored in ptr (address of num): 0x16b5b3138
// Value pointed to by ptr: 10