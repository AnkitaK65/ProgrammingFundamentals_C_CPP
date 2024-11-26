#include <iostream>
using namespace std;

struct Book {
    char title[50];     // Array to store the title of the book
    char author[50];    // Array to store the author of the book
    float price;        // Variable to store the price of the book
};

int main() {
    // Initialize an array of 2 Book structures
    Book library[2] = {
        {"The Alchemist", "Paulo Coelho", 299.99},
        {"1984", "George Orwell", 199.50}
    };

    // Display the information of each book
    cout << "Book 1: " << library[0].title << " by " << library[0].author << ", Price: " << library[0].price << endl;
    cout << "Book 2: " << library[1].title << " by " << library[1].author << ", Price: " << library[1].price << endl;

    return 0;
}
/*
Book 1: The Alchemist by Paulo Coelho, Price: 299.99
Book 2: 1984 by George Orwell, Price: 199.5
*/
