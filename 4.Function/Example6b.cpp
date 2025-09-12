#include <iostream>
#include <string>   // ✅ string is available in C++, not in C
using namespace std;

/*
    Demonstration of various return types in C++
    ------------------------------------------------
    ✔ int, float, double, char, void, bool
    ✔ string (C++ feature, not in C)
    ✔ reference (C++ feature, not in C)
    
    ⚠ C++ vs C Notes:
    - C++ has a built-in 'bool' type (since the beginning).
    - Can return string objects directly (unlike C).
    - Can return references (&), which C does not allow.
    - Pointers exist but references are preferred in C++.
*/

// Function returning int
int add(int a, int b) {
    return a + b;
}

// Function returning float
float divide(int a, int b) {
    if (b == 0) {
        cout << "Division by zero!" << endl;
        return 0.0f;
    }
    return static_cast<float>(a) / b;
}

// Function returning double
double multiply(double a, double b) {
    return a * b;
}

// Function returning char
char grade(int marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 50) return 'C';
    else return 'F';
}

// Function returning void
void greet() {
    cout << "Hello, welcome to return type demo in C++!" << endl;
}

// Function returning string (C++ only)
string subject() {
    return "Programming Fundamentals using C++";
}

// Function returning reference (C++ only)
int& updateValue() {
    static int value = 100;
    value += 10;
    return value;
}

// Function returning bool (built-in type in C++)
bool isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    greet();

    int sum = add(5, 7);
    cout << "Sum = " << sum << endl;

    float div = divide(10, 3);
    cout << "Division = " << div << endl;

    double prod = multiply(3.5, 2.0);
    cout << "Multiplication = " << prod << endl;

    char g = grade(82);
    cout << "Grade = " << g << endl;

    cout << "Subject = " << subject() << endl;

    cout << "Update value 1 = " << updateValue() << endl;
    cout << "Update value 2 = " << updateValue() << endl;

    int num = 8;
    cout << num << " is " << (isEven(num) ? "Even" : "Odd") << endl;

    return 0;
}

/*
Output:
Hello, welcome to return type demo in C++!
Sum = 12
Division = 3.33333
Multiplication = 7
Grade = B
Subject = Programming Fundamentals using C++
Update value 1 = 110
Update value 2 = 120
8 is Even
*/