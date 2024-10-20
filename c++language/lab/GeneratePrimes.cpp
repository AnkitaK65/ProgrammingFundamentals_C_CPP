#include <iostream>
using namespace std;

/*
Question:
6. Write a function to generate the prime numbers less than 100.
*/

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; // Not a prime number
        }
    }
    return true; // Prime number
}

int main() {
    cout << "Prime numbers less than 100:" << endl;

    for (int num = 2; num < 100; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
