/* 
    Topic: Various Types of Arrays in C
*/

#include <stdio.h>

int main() {
    int intArr[3] = {1,2,3};
    float floatArr[3] = {1.1, 2.2, 3.3};
    char charArr[6] = "Hello"; // String stored as char array
    //char charArr[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("intArr[1] = %d\n", intArr[1]);
    printf("floatArr[1] = %.2f\n", floatArr[1]);
    printf("charArr = %s\n", charArr);
    return 0;
}

/*
Output:
intArr[1] = 2
floatArr[1] = 2.20
charArr = Hello
*/