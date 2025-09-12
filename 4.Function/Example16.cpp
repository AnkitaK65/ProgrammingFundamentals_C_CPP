/*
Topic: Multiple Default Arguments
This program demonstrates multiple parameters with some default values.
*/

#include <iostream>
using namespace std;

void showDetails(string name, int age = 18, string city = "Unknown") {
    cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
}

int main() {
    showDetails("Alice");                     // default age and city
    showDetails("Bob", 25);                   // default city
    showDetails("Charlie", 30, "Delhi");      // all provided
    return 0;
}

/*
Output:
Name: Alice, Age: 18, City: Unknown
Name: Bob, Age: 25, City: Unknown
Name: Charlie, Age: 30, City: Delhi
*/