#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline from fgets

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline from fgets

    // Length of strings
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // Copy str2 to str1
    strcpy(str1, str2);
    printf("After copying, str1: %s\n", str1);

    // Concatenate two strings
    strcat(str1, str2);
    printf("After concatenation, str1: %s\n", str1);

    // Compare two strings
    if (strcmp(str1, str2) == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Find a character in a string
    char *ch = strchr(str1, 'a');
    if (ch != NULL) {
        printf("Character 'a' found at position: %ld\n", ch - str1);
    } else {
        printf("Character 'a' not found.\n");
    }

    // Reverse the string
    strrev(str1); // strrev is not standard, use custom implementation if unavailable
    printf("Reversed str1: %s\n", str1);

    return 0;
}


/*
Top Functions from <cstring> (C Library):
strlen() – Get the length of the string.
strcpy() – Copy one string to another.
strcat() – Concatenate two strings.
strcmp() – Compare two strings.
strchr() – Find the first occurrence of a character in a string.
strrchr() – Find the last occurrence of a character in a string.
strstr() – Find a substring in a string.
strncpy() – Copy specified number of characters.
strncat() – Concatenate specified number of characters.
memset() – Fill memory with a constant byte.
*/