/*
Question: Write a program to calculate the area of a triangle.
*/

#include <iostream>  // Include input/output stream library

using namespace std;

int main() {
    float base, height, area;  // Declare variables for base, height, and area

    // Input: Asking user to enter the base and height of the triangle
    cout << "Enter the base of the triangle: ";
    cin >> base;  // Reads base value from user

    cout << "Enter the height of the triangle: ";
    cin >> height;  // Reads height value from user

    // Calculation: Formula for area of triangle (Area = 1/2 * base * height)
    area = 0.5 * base * height;

    // Output: Display the calculated area
    cout << "The area of the triangle is: " << area << endl;  // Prints the result

    return 0;  // Indicate that the program ended successfully
}
