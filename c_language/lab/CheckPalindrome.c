#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Question:
5. Write a function that checks whether a given string is a Palindrome or not.
Use this function to find whether the string entered by user is Palindrome or not.
*/

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int left = 0;                     // Start from the beginning
    int right = strlen(str) - 1;     // Start from the end

    while (left < right) {
        // Ignore non-alphanumeric characters
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        // Check if characters are the same (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
