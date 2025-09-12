/*
Topic: Command Line Arguments
This program accepts command line arguments and displays them.
Command line arguments are passed to main() as parameters.
*/

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Number of arguments: " << argc << endl;
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    return 0;
}

/*
Output:

//1. When running without passing any arguments:
./a.out  
Number of arguments: 1
Argument 0: ./a.out

//2. When passing some arguments:
./a.out 1stArgument 1 1.45 3.87906 true 
Number of arguments: 6
Argument 0: ./a.out
Argument 1: 1stArgument
Argument 2: 1
Argument 3: 1.45
Argument 4: 3.87906
Argument 5: true
*/