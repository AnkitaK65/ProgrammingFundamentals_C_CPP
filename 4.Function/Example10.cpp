/*
Topic: Function Parameters
This program demonstrates function with parameters.
*/

#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice"); //Type : (const char [6])"Alice"
    greet("Bob");
    return 0;
}
/*
Output:
Hello, Alice!
Hello, Bob!
*/