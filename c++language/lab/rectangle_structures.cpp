// Q. Passing Structures: Create a Rectangle structure. Write functions to calculate the area and update dimensions, passing the structure.

#include <iostream>
using namespace std;

// Define a structure to represent a rectangle
struct Rectangle {
    float length;  // Length of the rectangle
    float breadth; // Breadth of the rectangle
};

// Function to calculate the area of the rectangle
// Note: The parameter is passed by const reference to avoid creating a copy of the Rectangle object (efficient for large structures) 
// and to ensure the function does not modify the original object (safe and read-only access).
// Any attempt to change rect.length or rect.breadth inside the function will result in a compilation error.
float calculateArea(const Rectangle& rect) {
    return rect.length * rect.breadth;
}

// Function to update the dimensions of the rectangle
void updateDimensions(Rectangle& rect, float newLength, float newBreadth) {
    rect.length = newLength;
    rect.breadth = newBreadth;
}

int main() {
    // Create a Rectangle structure
    Rectangle rect;

    // Input initial dimensions of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> rect.length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> rect.breadth;

    // Display the area of the rectangle
    cout << "\nInitial Rectangle:\n";
    cout << "Length: " << rect.length << ", Breadth: " << rect.breadth << "\n";
    cout << "Area: " << calculateArea(rect) << "\n";

    // Update the dimensions of the rectangle
    float newLength, newBreadth;
    cout << "\nEnter new length of the rectangle: ";
    cin >> newLength;
    cout << "Enter new breadth of the rectangle: ";
    cin >> newBreadth;
    updateDimensions(rect, newLength, newBreadth);

    // Display the updated rectangle and its area
    cout << "\nUpdated Rectangle:\n";
    cout << "Length: " << rect.length << ", Breadth: " << rect.breadth << "\n";
    cout << "Area: " << calculateArea(rect) << "\n";

    return 0;
}
/*
Output:
Enter the length of the rectangle: 23.2
Enter the breadth of the rectangle: 42.3

Initial Rectangle:
Length: 23.2, Breadth: 42.3
Area: 981.36

Enter new length of the rectangle: 20
Enter new breadth of the rectangle: 42.5

Updated Rectangle:
Length: 20, Breadth: 42.5
Area: 850
*/