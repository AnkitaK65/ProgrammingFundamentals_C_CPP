// Topic: Declaring and Using Pointers to Pointers in C++

#include <iostream>
using namespace std;

int main() {
    int num = 10;         // A simple integer variable
    int *ptr = &num;      // Pointer to 'num'
    int **ptr_to_ptr = &ptr; // Pointer to the pointer 'ptr'

    // Display values and addresses at each level
    cout << "Value of num: " << num << endl; 
    cout << "Address of num (&num): " << &num << endl; // Address of 'num'
    cout << "Value stored in ptr (address of num): " << ptr << endl; // Value stored in 'ptr', address of 'num'
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl; // Dereferencing 'ptr' gives the value of 'num'
    cout << "Address of ptr (&ptr): " << &ptr << endl; // Address of the pointer 'ptr'
    cout << "Value stored in ptr_to_ptr (address of ptr): " << ptr_to_ptr << endl; // Address of 'ptr'
    cout << "Value pointed to by ptr_to_ptr (*ptr_to_ptr): " << *ptr_to_ptr << endl; // Dereferencing 'ptr_to_ptr' gives 'ptr'
    cout << "Value pointed to by *ptr_to_ptr (**ptr_to_ptr): " << **ptr_to_ptr << endl; // Dereferencing twice gives the value of 'num'

    return 0;
}
// Value of num: 10
// Address of num (&num): 0x16d293118
// Value stored in ptr (address of num): 0x16d293118
// Value pointed to by ptr (*ptr): 10
// Address of ptr (&ptr): 0x16d293110
// Value stored in ptr_to_ptr (address of ptr): 0x16d293110
// Value pointed to by ptr_to_ptr (*ptr_to_ptr): 0x16d293118
// Value pointed to by *ptr_to_ptr (**ptr_to_ptr): 10