/* 
    Topic: Modern C++ Alternatives – std::array and std::vector (template classes in C++)
    - std::array  → Fixed-size, safer wrapper around C-style arrays (size known at compile time).  
    - std::vector → Dynamic array that can grow/shrink at runtime, manages memory automatically.

    Using 'using namespace std;' means we don't need 'std::' prefix in code.
*/

#include <iostream>
#include <array>   // for array (fixed-size array wrapper)
#include <vector>  // for vector (dynamic array)
using namespace std;

int main() {
    /* ---------- std::array Example ---------- */
    // Declare a fixed-size array of 5 integers
    array<int,5> arr = {1,2,3,4,5};

    // Accessing elements
    cout << "array element at index 2 = " << arr[2] << endl;

    // Safe access with bounds checking (throws exception if out of range)
    cout << "Using .at(3) = " << arr.at(3) << endl;

    // Get size of array (always fixed)
    cout << "array size = " << arr.size() << endl;

    /* ---------- std::vector Example ---------- */
    // Declare a dynamic array (vector)
    vector<int> vec = {10,20,30};

    // Current size of vector
    cout << "\nInitial vector size = " << vec.size() << endl;

    // Add elements dynamically
    vec.push_back(40);
    vec.push_back(50);

    // Access last element
    cout << "After push_back, last element = " << vec.back() << endl;

    // Vector grows automatically
    cout << "Updated vector size = " << vec.size() << endl;

    // Iterating through vector
    cout << "All elements in vector: ";
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    /* ---------- Key Difference ---------- */
    // arr.push_back(99);   ❌ ERROR (array cannot resize)
    // vec.push_back(99);   ✅ Works (vector resizes)

    return 0;
}

/*
Output:
array element at index 2 = 3
Using .at(3) = 4
array size = 5

Initial vector size = 3
After push_back, last element = 50
Updated vector size = 5
All elements in vector: 10 20 30 40 50
*/