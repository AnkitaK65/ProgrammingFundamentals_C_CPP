//WAP to show thatstring can be represented as a character array

#include <stdio.h>

int main() {
    // Declare a character array (string)
    char str[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Using fgets to read a line of text

    // Output the string
    printf("You entered: %s\n", str);

    // Calculate the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string: %d\n", length);

    return 0;
}
