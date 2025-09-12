#include <iostream>
using namespace std;

/*
    Purpose: Demonstrate reference return type in C++.

    Notes:
    ------
    - A function can return a reference to an existing variable.
    - It allows direct modification of the original variable.
    - Must return reference to a variable that will remain alive 
        after function ends (e.g., global, static, or passed variable).
    - ⚠ Do NOT return reference to a local variable → it gets destroyed.
*/

int& getValue() {
    static int x = 10;   // static ensures variable persists
    return x;            // return reference to x
}

int main() {
    cout << "Initial value: " << getValue() << endl;

    // Using on LEFT side (modifies the original variable)
    getValue() = 50;
    cout << "After left-side assignment: " << getValue() << endl;

    // ✅ Using on RIGHT side (acts like a normal variable)
    int y = getValue();   // here y gets value of x
    cout << "Assigned to y (right side use): " << y << endl;

    // Change x again
    getValue() = 99;
    cout << "Final value of x via reference: " << getValue() << endl;

    return 0;
}

/*
Output:
Initial value: 10
After left-side assignment: 50
Assigned to y (right side use): 50
Final value of x via reference: 99
*/