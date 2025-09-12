#include <stdio.h>
#include <stdbool.h>   // bool introduced in C99, not in earlier C versions

/*  
    Demonstration of various return types in C
    ------------------------------------------------
    ✔ int, float, double, char, void
    ✔ pointer
    ✔ bool (only from C99, earlier C had no bool type)
    
    ⚠ C Restrictions / Notes:
    - No 'string' return type like C++ (we use char arrays instead).
    - No reference return type (only in C++).
    - Must include <stdbool.h> for bool (since C99).
*/

// Function returning int
int add(int a, int b) {
    return a + b;
}

// Function returning float
float divide(int a, int b) {
    if (b == 0) {
        printf("Division by zero!\n");
        return 0.0f;
    }
    return (float)a / b;
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
    printf("Hello, welcome to return type demo in C!\n");
}

// Function returning pointer
int* getPointerToValue(int x) {
    static int y;   // static so value persists after function returns
    y = x;
    return &y;
}

// Function returning bool (C99 or later)
bool isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    greet();

    int sum = add(5, 7);
    printf("Sum = %d\n", sum);

    float div = divide(10, 3);
    printf("Division = %.2f\n", div);

    double prod = multiply(3.5, 2.0);
    printf("Multiplication = %.2lf\n", prod);

    char g = grade(82);
    printf("Grade = %c\n", g);

    int *ptr = getPointerToValue(42);
    printf("Pointer value = %d\n", *ptr);

    int num = 7;
    printf("%d is %s\n", num, isEven(num) ? "Even" : "Odd");

    return 0;
}

/*
Output:
Hello, welcome to return type demo in C!
Sum = 12
Division = 3.33
Multiplication = 7.00
Grade = B
Pointer value = 42
7 is Odd
*/
