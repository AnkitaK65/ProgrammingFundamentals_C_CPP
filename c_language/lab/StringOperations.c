#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void stringLength();
void stringCopy();
void stringConcatenate();
void stringCompare();
void stringToUpper();
void stringToLower();
void checkPalindrome();
void reverseString();

int main() {
    int choice;

    do {
        // Display menu
        printf("\n--- String Operations Menu ---\n");
        printf("1. Length of a String\n");
        printf("2. Copy a String\n");
        printf("3. Concatenate Two Strings\n");
        printf("4. Compare Two Strings\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Convert to Lowercase\n");
        printf("7. Check Palindrome\n");
        printf("8. Reverse a String\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character

        switch (choice) {
            case 1: stringLength(); break;
            case 2: stringCopy(); break;
            case 3: stringConcatenate(); break;
            case 4: stringCompare(); break;
            case 5: stringToUpper(); break;
            case 6: stringToLower(); break;
            case 7: checkPalindrome(); break;
            case 8: reverseString(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 9);

    return 0;
}

// Function to calculate length of a string
void stringLength() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
    printf("Length of the string: %zu\n", strlen(str));
}

// Function to copy a string
void stringCopy() {
    char source[100], destination[100];
    printf("Enter source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = 0; // Remove newline
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}

// Function to concatenate two strings
void stringConcatenate() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Function to compare two strings
void stringCompare() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than the second string.\n");
    } else {
        printf("First string is greater than the second string.\n");
    }
}

// Function to convert a string to uppercase
void stringToUpper() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase string: %s\n", str);
}

// Function to convert a string to lowercase
void stringToLower() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase string: %s\n", str);
}

// Function to check if a string is a palindrome
void checkPalindrome() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
    int length = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
}

// Function to reverse a string
void reverseString() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline
    int length = strlen(str);

    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');
}
