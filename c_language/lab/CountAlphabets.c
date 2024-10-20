#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Question:
Write a program that prints a table indicating the number of occurrences of each alphabet in the text entered as command line arguments.
*/

// To Run: ./CountAlphabets Hello World!

int main(int argc, char *argv[]) {
    int count[26] = {0}; // Array to hold the count of each letter (a-z)

    // Iterate over command line arguments
    for (int i = 1; i < argc; i++) {
        for (char *p = argv[i]; *p != '\0'; p++) {
            if (isalpha(*p)) { // Check if the character is an alphabet
                // Convert to lowercase and increment the corresponding count
                count[tolower(*p) - 'a']++;
            }
        }
    }

    // Print the occurrences in a table format
    printf("Alphabet | Count\n");
    printf("------------------\n");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("    %c    |  %d\n", ch, count[ch - 'a']);
    }

    return 0;
}

/*
Command-Line Arguments in C:

1. **Definition**: Allow users to pass inputs to a program via the command line.
2. **Main Function**:
    - `int main(int argc, char *argv[])`
    - `argc`: Count of command-line arguments (includes program name).
    - `argv`: Array of C-style strings representing each argument.
3. **Accessing Arguments**: 
    - Loop through `argv` starting from `argv[1]` (skip program name).
4. **Example**:
    for (int i = 0; i < argc; i++) {
    printf("Argument %d: %s\n", i, argv[i]);
    }
*/