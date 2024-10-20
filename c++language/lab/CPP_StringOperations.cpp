#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    // Input two strings
    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    // Length of strings
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Length of str2: " << str2.length() << endl;

    // Copy str2 to str1
    str1 = str2;
    cout << "After copying, str1: " << str1 << endl;

    // Concatenate two strings
    str1 += str2;
    cout << "After concatenation, str1: " << str1 << endl;

    // Compare two strings
    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    // Find a character in a string
    size_t found = str1.find('a');
    if (found != string::npos) {
        cout << "Character 'a' found at position: " << found << endl;
    } else {
        cout << "Character 'a' not found." << endl;
    }

    // Substring operation
    cout << "Substring of str1 (first 5 characters): " << str1.substr(0, 5) << endl;

    // Reverse the string
    reverse(str1.begin(), str1.end());
    cout << "Reversed str1: " << str1 << endl;

    return 0;
}

/*
Top Methods from <string> (C++ Library):
length() – Get the length of the string.
substr() – Extract a substring.
find() – Find a character or substring.
compare() – Compare two strings.
append() – Append to the string.
erase() – Erase characters from a string.
replace() – Replace part of a string with another string.
insert() – Insert a substring into a string.
clear() – Clear the string.
reverse() – Reverse the string (using algorithms like std::reverse() from <algorithm>)
*/