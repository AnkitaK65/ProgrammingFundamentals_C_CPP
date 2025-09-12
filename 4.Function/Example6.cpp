/*
Topic: Functions Returning Value
This program demonstrates a function that returns the sum of two numbers.
*/

#include <iostream>
using namespace std;

//This function returns 'int' data type
int add(int x, int y) {
    return x + y;
}

int main() {
    int result = add(10, 20);
    cout << "Sum: " << result << endl;
    return 0;
}

/*
Output:
Sum: 30
*/