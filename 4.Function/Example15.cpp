/*
Topic: Default Arguments
In C++, we can assign default values to function parameters.
If the caller does not pass value, default is used.
*/

#include <iostream>
using namespace std;

int add(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << "add(5): " << add(5) << endl;       // b=10
    cout << "add(5, 20): " << add(5, 20) << endl; // b=20
    return 0;
}

/*
Output:
add(5): 15
add(5, 20): 25
*/