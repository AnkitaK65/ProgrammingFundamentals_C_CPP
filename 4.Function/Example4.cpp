/*
Topic: Call by Reference (C++)
In call by reference, the function gets the reference (alias) of the variable.
Changes made inside the function reflect in the original variable.
*/

#include <iostream>
using namespace std;

void change(int &x) {
    x = x + 10;
}

int main() {
    int a = 5;
    change(a);
    cout << "Value of a after function call: " << a << endl; // becomes 15
    return 0;
}
/*
Output:
Value of a after function call: 15
*/