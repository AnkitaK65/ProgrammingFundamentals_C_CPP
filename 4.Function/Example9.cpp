/*
Topic: Return Data Type of Functions
This program shows functions with different return types: int, double, void.
*/

#include <iostream>
using namespace std;

int getInt() {
    return 10;
}

double getDouble() {
    return 3.14;
}

void showMessage() {
    cout << "Hello from void function!" << endl;
}

int main() {
    cout << "Integer: " << getInt() << endl;
    cout << "Double: " << getDouble() << endl;
    showMessage();
    return 0;
}

/*
Output:
Integer: 10
Double: 3.14
Hello from void function!
*/