#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

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
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Length of a String\n";
        cout << "2. Copy a String\n";
        cout << "3. Concatenate Two Strings\n";
        cout << "4. Compare Two Strings\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Convert to Lowercase\n";
        cout << "7. Check Palindrome\n";
        cout << "8. Reverse a String\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To consume the newline character

        switch (choice) {
            case 1: stringLength(); break;
            case 2: stringCopy(); break;
            case 3: stringConcatenate(); break;
            case 4: stringCompare(); break;
            case 5: stringToUpper(); break;
            case 6: stringToLower(); break;
            case 7: checkPalindrome(); break;
            case 8: reverseString(); break;
            case 9: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}

// Function to calculate length of a string
void stringLength() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    cout << "Length of the string: " << strlen(str) << endl;
}

// Function to copy a string
void stringCopy() {
    char source[100], destination[100];
    cout << "Enter source string: ";
    cin.getline(source, sizeof(source));
    strcpy(destination, source);
    cout << "Copied string: " << destination << endl;
}

// Function to concatenate two strings
void stringConcatenate() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, sizeof(str1));
    cout << "Enter second string: ";
    cin.getline(str2, sizeof(str2));
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
}

// Function to compare two strings
void stringCompare() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, sizeof(str1));
    cout << "Enter second string: ";
    cin.getline(str2, sizeof(str2));
    int result = strcmp(str1, str2);
    if (result == 0) {
        cout << "Strings are equal." << endl;
    } else if (result < 0) {
        cout << "First string is less than the second string." << endl;
    } else {
        cout << "First string is greater than the second string." << endl;
    }
}

// Function to convert a string to uppercase
void stringToUpper() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    cout << "Uppercase string: " << str << endl;
}

// Function to convert a string to lowercase
void stringToLower() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    cout << "Lowercase string: " << str << endl;
}

// Function to check if a string is a palindrome
void checkPalindrome() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    int length = strlen(str);
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
}

// Function to reverse a string
void reverseString() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str));
    int length = strlen(str);

    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}
