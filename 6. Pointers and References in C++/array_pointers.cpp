// Topic: Array of Pointers

#include <iostream>
using namespace std;

int main() {
    // Array of pointers to constant characters (strings)
    const char* names[] = {"Alice", "Bob", "Charlie", "David"};

    // Printing names using array of pointers
    for (int i = 0; i < 4; i++) {
        cout << *(names + i) << endl;  // Dereferencing pointer to access string
    }

    return 0;
}
// Alice
// Bob
// Charlie
// David
