/*
Topic: Call by Value
In call by value, the function gets a copy of the variable. 
Changes made inside the function do not affect the original value.
*/

#include <iostream>
using namespace std;

void change(int x) {
    x = x + 10; // Set breakpoint here and debug to see value of local variablle
}

int main() {
    int a = 5;
    change(a);
    cout << "Value of a after function call: " << a << endl; // remains 5
    return 0;
}
/*
Output:
Value of a after function call: 5
*/