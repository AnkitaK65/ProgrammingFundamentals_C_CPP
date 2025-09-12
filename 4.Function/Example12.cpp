/*
Topic: Declaration vs Definition of Functions
Declaration tells the compiler about the function (prototype).
Definition provides the actual body of the function.
*/

#include <iostream>
using namespace std;

// Declaration
int multiply(int, int);

int main() {
    cout << "Product: " << multiply(5, 4) << endl;
    return 0;
}

// Definition
int multiply(int a, int b) {
    return a * b;
}

/*
Output:
Product: 20
*/