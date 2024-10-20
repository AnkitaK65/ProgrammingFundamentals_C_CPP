//WAP to show thatstring can be represented as a character array

#include <iostream>
using namespace std;

int main() {
    // Declare a character array (string)
    char str[100];

    // Input a string from the user
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str)); // Using getline to read a line of text

    // Output the string
    cout << "You entered: " << str << endl;

    // Calculate the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    cout << "Length of the string: " << length << endl;

    return 0;
}
