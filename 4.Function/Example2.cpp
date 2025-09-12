/*
Topic: Utility of Functions
This program shows the use of functions to avoid code repetition.
The same function 'square()' is reused multiple times instead of writing code again.
*/

#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 10: " << square(10) << endl;
    cout << "Square of 15: " << square(15) << endl;
    return 0;
}
/*
Output:
Square of 5: 25
Square of 10: 100
Square of 15: 225
*/
