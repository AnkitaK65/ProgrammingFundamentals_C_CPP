/* Write a program that accepts a full name 
(with multiple words) from the user, 
stores it in a character array, and then reverses the string.
*/

#include <stdio.h>
#include <string.h> // For strlen function

int main() {
    // Create a string to hold the full name
    char fullName[30];

    // Ask the user to input some text (full name)
    printf("Type your full name and press enter: \n");

    // Get the text (multiple words input)
    fgets(fullName, sizeof(fullName), stdin);

    // We use the scanf() function to get a single word as input, and use fgets() for multiple words.
    // scanf("%s", firstName);

    //In C, fgets() includes the newline character in the input string,
    // requiring manual removal, while in C++, 
    //std::getline() automatically discards the newline without storing it. 
    //This prevents the issue of unwanted newlines in C++.

    // Remove the newline character that fgets() stores (if present)
    fullName[strcspn(fullName, "\n")] = 0;

    // Output the original text
    printf("Hello %s\n", fullName);

    // Calculate the length of the string
    int length = strlen(fullName);

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = fullName[i];
        fullName[i] = fullName[length - 1 - i];
        fullName[length - 1 - i] = temp;
    }

    // Output the reversed string
    printf("Reversed name: %s\n", fullName);

    return 0;
}
