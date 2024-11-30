// Topic: Returning a Reference to a Static Variable

#include <iostream>
using namespace std;

// Function that returns a reference to a static variable
int& getStaticVar() {
    static int x = 10;  // Static variable persists across function calls
    return x;  // Returns a reference to the static variable
}

int main() {
    // Getting a reference to the static variable
    int& ref = getStaticVar();
    cout << "Initial value: " << ref << endl;  // Output: 10

    // Modifying the value using the reference
    ref = 30;  // Updates the value of the static variable
    cout << "Modified value: " << getStaticVar() << endl;  // Output: 30

    return 0;
}

// Initial value: 10
// Modified value: 30
