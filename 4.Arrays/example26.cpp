/* 
    Topic: using namespace std

    🔹 What it is:
        - In C++, all standard library classes and functions (like cout, cin, string, vector) 
            are defined inside the namespace called 'std'.
        - To access them, you either need to prefix them with 'std::' or use 'using namespace std;'

    🔹 Why it is used:
        - To avoid repeatedly typing 'std::' before standard library identifiers.
        - Makes code cleaner and easier to read, especially in small programs.

    🔹 Important:
        - 'using namespace std;' is **specific to C++** and not used in C.
*/

#include <iostream>

int main() {

    /* ---------- Example 1: Without using namespace std ---------- */
    std::cout << "Example 1 (without using namespace std):" << std::endl;

    int num1;
    std::cout << "Enter a number: ";
    std::cin >> num1;
    std::cout << "You entered: " << num1 << std::endl;

    std::cout << "-----------------------------------" << std::endl;

    /* ---------- Example 2: With using namespace std ---------- */
    using namespace std;  // Now we can omit 'std::'

    cout << "Example 2 (with using namespace std):" << endl;

    int num2;
    cout << "Enter a number: ";
    cin >> num2;
    cout << "You entered: " << num2 << endl;

    return 0;
}

/*
Output:
Example 1 (without using namespace std):
Enter a number: 6
You entered: 6
-----------------------------------
Example 2 (with using namespace std):
Enter a number: 12
You entered: 12
*/