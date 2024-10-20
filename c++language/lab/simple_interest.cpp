// Write a program to calculate Simple Interest (SI)

#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    // Input values for principal, rate, and time
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Output the result
    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}
