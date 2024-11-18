#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    int pages;
    float price;
};

int main() {
    Book book1 = {"C Programming", 250, 299.99};

    // Accessing members using dot operator
    cout << "Title: " << book1.title << endl;
    cout << "Pages: " << book1.pages << endl;
    cout << "Price: " << book1.price << endl;

    return 0;
}

/*
Title: C Programming
Pages: 250
Price: 299.99
*/