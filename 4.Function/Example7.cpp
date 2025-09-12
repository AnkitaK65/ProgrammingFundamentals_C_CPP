/*
Topic: Void Functions
This program shows a function that does not return any value.
*/

#include <iostream>
using namespace std;

void displayMessage() {
    cout << "This is a void function." << endl;
}

int main() {
    displayMessage();
    return 0;
}

/*
Output:
This is a void function.
*/