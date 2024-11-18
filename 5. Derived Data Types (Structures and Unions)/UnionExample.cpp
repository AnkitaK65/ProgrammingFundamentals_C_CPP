// Filename: UnionExample.cpp
#include <iostream>
using namespace std;

// Define a union to represent a data item
union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Direct Initialization using curly braces
    Data data1 = {10}; // Directly initializing the first member (intValue) with the value 10

    // List Initialization (C++11 and later)
    // Data data2{5.5f};  
    // Initializes floatValue with 5.5
    
    Data data2;
    // Using assignment to change the value
    data2.charValue = 'A';

    // Display the union members
    cout << "Data1 (int): " << data1.intValue << endl;
    cout << "Data2 (float): " << data2.floatValue << " (but may not be valid)" << endl;
    cout << "Data2 (char): " << data2.charValue << endl;

    return 0;
}

/*
Output:
Data1 (int): 10
Data2 (float): 0.00 (but may not be valid)
Data2 (char): A
*/