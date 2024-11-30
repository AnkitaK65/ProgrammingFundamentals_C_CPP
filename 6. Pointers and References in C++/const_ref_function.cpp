// Topic: Reference to Constant as Function Argument

#include <iostream>
using namespace std;

// Function that accepts a constant reference as an argument
void printValue(const int& num) {
    cout << "Value: " << num << endl;  // Prints the value of the passed variable
}

int main() {
    int a = 100;  // Declare and initialize variable a
    
    printValue(a);  // Passes a reference to a (constant reference)
    return 0;
}
//Value: 100