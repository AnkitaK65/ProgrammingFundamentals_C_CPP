// Program to demonstrate swap of two numbers using references and return the larger number using references

#include <iostream>
using namespace std;

// Function to swap two numbers using references
void swapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to return the larger of two numbers and modify the larger number through reference
void getLargerNumber(int& a, int& b, int& larger) {
    if (a > b) {
        larger = a;
    } else {
        larger = b;
    }
}

int main() {
    int num1, num2, larger;

    // Input numbers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Swap the numbers
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapNumbers(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Get the larger number
    getLargerNumber(num1, num2, larger);
    cout << "The larger number is: " << larger << endl;

    return 0;
}

/*
Output:
Enter two integers: 10 5
Before swapping: num1 = 10, num2 = 5
After swapping: num1 = 5, num2 = 10
The larger number is: 10
*/