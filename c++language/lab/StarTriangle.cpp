#include <iostream>
using namespace std;

/*
Question:
9. Write a program to print a triangle of stars as follows (take number of lines from user):
                                   *
                                  ***
                                 *****
                                *******
                               *********
*/

// Function to print the star triangle
void printStarTriangle(int lines) {
    for (int i = 1; i <= lines; i++) {
        // Print spaces
        for (int j = i; j < lines; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int lines;

    // Get user input
    cout << "Enter the number of lines for the star triangle: ";
    cin >> lines;

    // Print the star triangle
    printStarTriangle(lines);

    return 0;
}
