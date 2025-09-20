/* 
    Topic: Various Types of Arrays in C++
    (C++ also has std::string, which is easier than char arrays)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int intArr[3] = {10, 20, 30};
    float floatArr[3] = {1.5, 2.5, 3.5};
    char charArr[] = "World";
    string str = "Hello C++ String";

    cout << "intArr[2] = " << intArr[2] << endl;
    cout << "floatArr[0] = " << floatArr[0] << endl;
    cout << "charArr = " << charArr << endl;
    cout << "str = " << str << endl;
    return 0;
}

/*
Output:
intArr[2] = 30
floatArr[0] = 1.5
charArr = World
str = Hello C++ String
*/
