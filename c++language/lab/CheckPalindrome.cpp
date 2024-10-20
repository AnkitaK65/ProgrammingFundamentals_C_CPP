#include <iostream>
#include <cctype>
using namespace std;

/*
Question:
5. Write a function that checks whether a given string is a Palindrome or not.
Use this function to find whether the string entered by user is Palindrome or not.
*/

// Function to check if a string is a palindrome
bool isPalindrome(const string &str) {
    int left = 0;                     // Start from the beginning
    int right = str.length() - 1;    // Start from the end

    while (left < right) {
        // Ignore non-alphanumeric characters
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;

        // Check if characters are the same (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Is a palindrome
}

int main() {
    string str;

    // Get user input
    cout << "Enter a string: ";
    getline(cin, str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        cout << "'" << str << "' is a palindrome." << endl;
    } else {
        cout << "'" << str << "' is not a palindrome." << endl;
    }

    return 0;
}
