/*
Topic: Reference Return Type
This program demonstrates returning a reference from a function.
Allows function call to appear on left-hand side of assignment.
*/

#include <iostream>
using namespace std;

int& getElement(int arr[], int index) {
    return arr[index]; // returns reference
}

int main() {
    int numbers[3] = {1, 2, 3};
    getElement(numbers, 1) = 100; // directly modifies numbers[1]
    cout << "Updated array: ";
    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
Output:
Updated array: 1 100 3 
*/
