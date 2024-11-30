// Topic: Returning a Reference to a Variable

#include <iostream>
using namespace std;

// Function that returns a reference to an array element
int& getElement(int arr[], int index) {
    return arr[index];  // Returns a reference to the specified array element
}

int main() {
    int arr[3] = {10, 20, 30};  // Initialize an array with three elements
    
    // Getting a reference to the second element (index 1)
    int& ref = getElement(arr, 1);
    
    cout << "Value before change: " << ref << endl;  // Output: 20
    
    // Modifying the value using the reference
    ref = 50;  // Changes the value of arr[1] in the original array
    cout << "Value after change: " << arr[1] << endl;  // Output: 50
    
    return 0;
}
// Value before change: 20
// Value after change: 50