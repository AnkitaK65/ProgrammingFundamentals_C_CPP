// Q. Pointers to Structures: Create a Book structure. Dynamically allocate memory, then input and display book details.

#include <iostream>
using namespace std;

// Define a structure to represent a book
struct Book {
    string title;  // Title of the book
    string author; // Author of the book
    float price;   // Price of the book
};

int main() {
    // Dynamically allocate memory for the Book structure using a pointer
    Book* bookPtr = new Book;

    // Input book details
    cout << "Enter the title of the book: ";
    getline(cin, bookPtr->title);
    
    cout << "Enter the author of the book: ";
    getline(cin, bookPtr->author);
    
    cout << "Enter the price of the book: ";
    cin >> bookPtr->price;

    // Note: 
    // - cin reads from the standard input stream, and stops at whitespace (space, tab, or newline).
    // - getline() also reads from the standard input stream, but reads the entire line, including spaces, until it encounters a newline character (\n).
    // - However, it removes the newline character (\n) from the input buffer after reading the line. 
    // - cin.ignore() is used to clear or ignore characters in the input buffer.
    // - It is typically used when switching from cin (which extracts input) to getline() (which reads an entire line including spaces).
    // - This is necessary when cin was previously used to read input, and a newline character (\n) is left in the buffer, which would interfere with the next getline() call.

    // cin reads input until it encounters whitespace (spaces, tabs, newlines).
    // After reading a value (int/float), it leaves the whitespace in the buffer.
    // When cin reads a number followed by a newline, it consumes only the number and leaves the newline.
    // For subsequent cin operations, it skips any leading whitespace (including newline) before reading the next value.


    // Display the book details
    cout << "\nBook Details:\n";
    cout << "Title: " << bookPtr->title << "\n";
    cout << "Author: " << bookPtr->author << "\n";
    cout << "Price: " << bookPtr->price << "\n";

    // Free the dynamically allocated memory
    delete bookPtr;

    return 0;
}

/*
Output:
Enter the title of the book: C++ Programming
Enter the author of the book: John Doe
Enter the price of the book: 29.99

Book Details:
Title: C++ Programming
Author: John Doe
Price: 29.99
*/