// Topic: Passing a Reference to Modify a Variable

#include <iostream>
using namespace std;

// Function that modifies the original variable using a reference
void addTen(int& num) {
    num += 10;  // Modifies the original variable by adding 10
}

int main() {
    int a = 5;  // Declare and initialize variable a
    cout << "Before addTen: " << a << endl;  // Output: 5
    
    addTen(a);  // Passes the reference of a to the function
    cout << "After addTen: " << a << endl;  // Output: 15
    
    return 0;
}
// Before addTen: 5
// After addTen: 15