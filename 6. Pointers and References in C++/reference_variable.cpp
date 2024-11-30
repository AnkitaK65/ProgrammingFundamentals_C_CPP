// Topic: Reference Variables in C++

#include <iostream>
using namespace std;

int main() {
   int a = 10;      // A normal variable
   int& ref = a;    // ref is a reference to variable a
    
   cout << "a: " << a << endl;    // Output: 10
   cout << "ref: " << ref << endl;  // Output: 10

   ref = 20; // Changing the value of ref also changes the value of a
    
   cout << "a after modifying ref: " << a << endl;  // Output: 20
   cout << "ref after modification: " << ref << endl; // Output: 20
    
    return 0;
}
// a: 10
// ref: 10
// a after modifying ref: 20
// ref after modification: 20