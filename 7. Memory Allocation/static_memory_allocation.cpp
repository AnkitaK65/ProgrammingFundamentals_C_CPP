#include <iostream>
using namespace std;

// Topic: static memory allocation - storage location

int globalVar = 10;  // Stored in Data Segment

void func() {
    static int staticVar = 5; // Stored in Data Segment
    int localVar = 20;        // Stored in Stack
    cout << "Local: " << localVar << ", Static: " << staticVar << endl;
}

int main() {
    func();
    return 0;
}
//Local: 20, Static: 5