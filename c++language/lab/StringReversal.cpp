/* Write a program that accepts a full name 
(with multiple words) from the user, 
stores it in a character array, and then reverses the string.
*/

#include <iostream>
#include <cstring> // For strlen
using namespace std;

int main() {
    // Create a string to hold the full name
    char fullName[30];

    // Ask the user to input some text (full name)
    cout << "Type your full name and press enter: " << endl;

    // Get the text (multiple words input)
    cin.getline(fullName, sizeof(fullName));

    // Output the original text
    cout << "Hello " << fullName << endl;

    // Calculate the length of the string
    int length = strlen(fullName);

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = fullName[i];
        fullName[i] = fullName[length - 1 - i];
        fullName[length - 1 - i] = temp;
    }

    // Output the reversed string
    cout << "Reversed name: " << fullName << endl;

    return 0;
}
