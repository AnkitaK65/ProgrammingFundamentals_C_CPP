// Q. Array of Structures: Create a library system structure. Input book details for multiple books,
//    search by title, and display the book details.

#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
    int quantity;
};

void inputBookDetails(Book books[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter details for book " << i + 1 << endl;
        cout << "Title: ";
        cin.ignore(); // Clear the buffer before taking the title input
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Price: ";
        cin >> books[i].price;
        cout << "Quantity: ";
        cin >> books[i].quantity;
        cout << endl;
    }
}

void searchBookByTitle(Book books[], int n, const string& searchTitle) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (books[i].title == searchTitle) {
            cout << "Book found!" << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Price: " << books[i].price << endl;
            cout << "Quantity: " << books[i].quantity << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book with title '" << searchTitle << "' not found!" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;
    
    Book books[n];
    inputBookDetails(books, n);
    
    string searchTitle;
    cout << "Enter the title of the book to search: ";
    cin.ignore();  // To clear any newline character left by previous input
    getline(cin, searchTitle);
    
    searchBookByTitle(books, n, searchTitle);
    
    return 0;
}
/*
Output:
Enter the number of books: 2
Enter details for book 1
Title: C++ Programming
Author: Bjarne Stroustrup
Price: 500
Quantity: 10

Enter details for book 2
Title: Data Structures
Author: Robert Lafore
Price: 350
Quantity: 5

Enter the title of the book to search: C++ Programming
Book found!
Title: C++ Programming
Author: Bjarne Stroustrup
Price: 500
Quantity: 10
*/