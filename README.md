# Programming Fundamentals using C/C++
Welcome to the ProgrammingFundamentals_C_CPP repository.

## 📑 Table of Contents
- [Introduction](#introduction)
- [Basic Lab Etiquettes](#basic-lab-etiquettes)
- [Coding Pre-requisites](#coding-pre-requisites)
- [How to Save Code](#how-to-save-c-and-c-code)
- [Compile and Run](#how-to-compile-and-run-c-and-c-code)
- [VS Code Setup](#setting-up-vs-code-for-cc)
- [Additional Tips](#additional-tips)

## Introduction
This repo is designed for BCA Semester 1 students to learn the basics of C and C++ programming through lab sessions and practice examples.

It contains unit-wise code examples and lab codes, neatly organized for quick learning.

## Basic Lab Etiquettes

### Turning ON the System
- Switch ON the main power switch.
- Check that the red light of the UPS is glowing.
- Turn ON the UPS.
- Press the CPU power button (for desktop systems).
    - For All-in-One systems: Power button is usually at the back corner of the monitor.
- Ensure keyboard, mouse, and monitor connections are properly attached.

**During Power Failure**: If light goes off and UPS starts beeping → Immediately shut down the system.

### Shutting Down the System
- Start Menu → Shut Down.
- After system is completely off → Switch OFF UPS → Switch OFF main power.
- Adjust the chair properly before leaving the lab.

### Reporting Issues
- If you face any system issue, write it in the Lab Register with:
    - Your Roll Number
    - System Number
    - Description of the Issue
*Lab Assistant will fix it later.*

## Coding Pre-requisites
- **Compiler**: MinGW (for Windows C/C++ development).

- **IDE** (Optional but Recommended):
    - VS Code
    - Or any text editor (Notepad++, Sublime, Vim, etc.)
>*On Linux/macOS → GCC/G++ is usually pre-installed.*

## How to Save C and C++ Code
- Save C files with extension: .c (e.g., program1.c)
- Save C++ files with extension: .cpp (e.g., program1.cpp)

## How to Compile and Run C and C++ Code
- On Windows (with MinGW in PATH):
    - Command to Compile a C Program
        `gcc program.c -o program`      # compile C program
    -   Command to Run a C Program
        `./program`                     # run on Linux/macOS
        `program` or `program.exe`      # run on Windows
    -   Command to Compile a C++ Program
        `g++ program.cpp -o program`    # compile C++ program
    -   Command to Run a C++ Program
        `program` or `program.exe`      # run on Windows
        `./program` (on Linux/macOS)    # run on Linux/macOS

👉 **Note:**
- If you only write `gcc program.c` or `g++ program.cpp` (without -o):
    - gcc program.c creates an executable file
        ./a.exe            # (on Windows)
        ./a.out            # (on Linux/macOS)
- Then you can run it using `a.exe`

## Setting up VS Code for C/C++
- Step 1: Install VS Code
    - Download from: https://code.visualstudio.com/

- Step 2: Install Compiler
    - Windows: Install MinGW-w64
        - During installation → Add path C:\mingw64\bin to
            *Environment Variables → PATH*

- Step 3: Install Extensions in VS Code
    - Open VS Code → Extensions (Ctrl+Shift+X) and install:
        - C/C++ (by Microsoft)
        - Code Runner (optional, for quick run)

- Step 4: Configure VS Code
    - Open a folder (e.g., C_Lab).(always save your code in a specific folder)
    - Create program.c or program.cpp.
    - Example: Write a test program
        ```
        // program.c
        #include <stdio.h>
        int main() {
            printf("Hello, World!\n");
            return 0;
        }
        ```

        ```
        // program.cpp
        #include <iostream>
        using namespace std;
        int main() {
            cout << "Hello, World!" << endl;
            return 0;
        }
        ```

- Step 5: Run the Program
    - Open your code file (program.c or program.cpp) in VS Code.

    1. Inside VS Code
    - Open Terminal → New Terminal (shortcut: Ctrl+`).
        The terminal will open at the project folder path.
    - Run: 
        `gcc program.c -o program` (or `g++ program.cpp -o program` for C++).
        `program`

    - Using Code Runner (if installed):
        Right-click → Run Code
 
    2. Using Windows CMD (Command Prompt)
    - Open CMD.
    - Navigate to the folder where your file is saved:
        Example - *cd C:\Users\Student\Documents\C_Lab*
    - Then run:
        `gcc program.c -o program` (or `g++ program.cpp -o program` for C++).
        `program`

⚠️ Make sure you are inside the folder where your code file is saved. Otherwise, you’ll get “file not found” errors.
    For example:
    C:\Users\Student\Documents\C_Lab> gcc program.c -o program

***If you see the output → setup is successful.***

## Additional Tips
- Indent code properly for readability.
- Use comments (// or /* */) to explain your logic.
- Practice writing simple programs before moving to complex ones.
- Always test your code with different inputs.
- Backup your lab programs in GitHub.

✨ Happy Coding & Learning! 🚀