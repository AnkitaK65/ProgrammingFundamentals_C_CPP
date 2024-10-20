#include <iostream>
#include <cctype> // Include the cctype library for character functions

using namespace std; // Bring all names from the std namespace into the global namespace

int main() {
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Character classification
    if (isalpha(ch)) {
        cout << "'" << ch << "' is an alphabetic character." << endl;
    } else {
        cout << "'" << ch << "' is not an alphabetic character." << endl;
    }

    if (isdigit(ch)) {
        cout << "'" << ch << "' is a digit." << endl;
    } else {
        cout << "'" << ch << "' is not a digit." << endl;
    }

    if (islower(ch)) {
        cout << "'" << ch << "' is a lowercase letter." << endl;
    } else if (isupper(ch)) {
        cout << "'" << ch << "' is an uppercase letter." << endl;
    } else {
        cout << "'" << ch << "' is neither a lowercase nor an uppercase letter." << endl;
    }

    if (isspace(ch)) {
        cout << "'" << ch << "' is a whitespace character." << endl;
    } else {
        cout << "'" << ch << "' is not a whitespace character." << endl;
    }

    // Character transformation
    cout << "Lowercase of '" << ch << "': " << static_cast<char>(tolower(ch)) << endl;
    cout << "Uppercase of '" << ch << "': " << static_cast<char>(toupper(ch)) << endl;

    return 0;
}
