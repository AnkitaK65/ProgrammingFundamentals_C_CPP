// Write a program to check whether a given number is prime or not.

#include <iostream>
using namespace std;

int main() {
    int num, i, flag = 0;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Prime numbers are greater than 1
    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
    } else {
        // Check if the number has divisors other than 1 and itself
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        // Output the result
        if (flag == 0)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }

    return 0;
}
