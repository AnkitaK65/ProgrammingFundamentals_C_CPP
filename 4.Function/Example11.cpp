/*
Topic: Actual vs Formal Parameters
Actual parameters are the values passed from the calling function.
Formal parameters are the variables defined in the function definition.
*/

#include <iostream>
using namespace std;

void display(int x) { // x is formal parameter
    cout << "Value received: " << x << endl;
}

int main() {
    int a = 10;
    display(a); // a is actual parameter
    return 0;
}

/*
Output:
Value received: 10
*/