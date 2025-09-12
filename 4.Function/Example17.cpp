/*
Topic: Constant Argument
Using 'const' ensures the function does not modify the argument.
Useful for safety and efficiency.
*/

#include <iostream>
using namespace std;

void printValue(const int x) {
    // x = x + 10; // Not allowed because x is const
    cout << "Value: " << x << endl;
}

int main() {
    int a = 50;
    printValue(a);
    return 0;
}

/*
Output:
Value: 50
*/