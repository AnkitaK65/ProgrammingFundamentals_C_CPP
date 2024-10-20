// WAP to Calculate the Area of a Triangle using Heron's Formula in C++
#include <iostream>
#include <cmath> // Required for sqrt function
using namespace std;

int main() {
    float a, b, c, s, area;

    // Input the lengths of the triangle sides
    cout << "Enter the lengths of the three sides of the triangle:" << endl;
    cin >> a >> b >> c;

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Apply Heron's formula to calculate the area
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output the area of the triangle
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}
