/*
Topic: Inline Functions
Inline functions are expanded at compile time to reduce function call overhead.
Useful for small, frequently used functions.
*/

#include <iostream>
using namespace std;

inline int cube(int n) {
    return n * n * n;
}

int main() {
    cout << "Cube of 3: " << cube(3) << endl;
    return 0;
}

/*
Output:
Cube of 3: 27
*/