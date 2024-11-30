// Topic: Reference Initialization in a Function

#include <iostream>
using namespace std;

void modify(int& ref) {
    ref = 30;  // Modifying the value of ref changes the value of the original variable
}

int main() {
    int a = 10;
    
    cout << "Before modify: " << a << endl;  // Output: 10
    
    modify(a);  // Passing the reference of a to the function
    
    cout << "After modify: " << a << endl;  // Output: 30
    
    return 0;
}
// Before modify: 10
// After modify: 30