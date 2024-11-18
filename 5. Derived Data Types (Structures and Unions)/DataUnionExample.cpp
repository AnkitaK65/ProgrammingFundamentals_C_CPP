#include <iostream>  // Include for input/output

using namespace std;  // Allows direct use of standard library names like cout, endl, etc.

// Define a union to represent different data types using shared memory
union Data {
    int intValue;    // Integer data (4 bytes)
    float floatValue; // Float data (4 bytes)
    char charValue;   // Character data (1 byte)
};

int main() {
    // Declare a variable of type union Data
    union Data data;

    // Store an integer in the union
    data.intValue = 10;  // Assign 10 to intValue
    cout << "Integer: " << data.intValue << endl;  // Print the integer value

    // Store a float in the union (this will overwrite the intValue)
    data.floatValue = 5.5;  // Assign 5.5 to floatValue
    cout << "Float: " << data.floatValue << endl;  // Print the float value

    // Store a character in the union (this will overwrite the floatValue)
    data.charValue = 'A';  // Assign 'A' to charValue
    cout << "Character: " << data.charValue << endl;  // Print the character value

    // Accessing intValue or floatValue after storing a character will give undefined results, as they share the same memory space.

    return 0;  // Return from the main function
}
