Programming Fundamentals using C/C++

Welcome to the ProgrammingFundamentals_C_CPP repository.
This repo is designed for BCA Semester 1 students to learn the basics of C and C++ programming through lab sessions and practice examples.

It contains unit-wise code examples and lab codes, neatly organized for quick learning.

📑 Index

[Basic Lab Etiquettes](#1-basic-lab-ettiquettes)

Coding Pre-requisites

Test Code for Setup Verification

How to Save C and C++ Code

How to Compile and Run C and C++ Code

Repository Structure

Setting up VS Code for C/C++

Additional Tips

## 1. Basic Lab Etiquettes
## 1-basic-lab-ettiquettes
Turning ON the System

Switch ON the main power switch.

Check that the red light of the UPS is glowing.

Turn ON the UPS.

Press the CPU power button (for desktop systems).

Ensure keyboard, mouse, and monitor connections are properly attached.

For All-in-One systems: Power button is usually at the back corner of the monitor.

During Power Failure

If light goes off and UPS starts beeping → Immediately shut down the system.

Shutting Down the System

From the Start Menu → Shut Down.

After system is completely off → Switch OFF UPS → Switch OFF main power.

Adjust the chair properly before leaving.

Reporting Issues

If you face any system issue, write it in the Lab Register with:

Your Roll Number

System Number

Description of the Issue

Lab Assistant will fix it later.

2. Coding Pre-requisites

Compiler: MinGW
 (for Windows C/C++ development).

IDE (Optional but Recommended):

VS Code

Or any text editor (Notepad++, Sublime, Vim, etc.)

✅ On Linux/macOS → GCC/G++ is usually pre-installed.

3. Test Code for Setup Verification
C Test Code (hello.c)
#include <stdio.h>
int main() {
    printf("C Compiler is working!\n");
    return 0;
}

C++ Test Code (hello.cpp)
#include <iostream>
using namespace std;
int main() {
    cout << "C++ Compiler is working!" << endl;
    return 0;
}


👉 Run these codes to check if VS Code + Compiler are installed properly.

4. How to Save C and C++ Code

Save C files with extension: .c (e.g., program1.c)

Save C++ files with extension: .cpp (e.g., program1.cpp)

Always keep files in a dedicated folder (like C_Lab or CPP_Lab).

5. How to Compile and Run C and C++ Code
On Windows (with MinGW in PATH):
# Compile C
gcc program.c -o program
./program

# Compile C++
g++ program.cpp -o program
./program


👉 Note:

If you only write gcc program.c or g++ program.cpp (without -o):

On Windows → Output file is a.exe

On Linux/macOS → Output file is a.out

gcc program.c      # creates a.exe (Windows) or a.out (Linux/macOS)
./a.exe            # (on Windows)
./a.out            # (on Linux/macOS)

6. Repository Structure
ProgrammingFundamentals_C_CPP/
│
├── c_language/
│   └── lab/        # C lab codes
│
├── cpp_language/
│   └── lab/        # C++ lab codes
│
├── assets/
│   └── setup-guide/   # Screenshots for VS Code + Compiler setup
│
└── README.md

7. Setting up VS Code for C/C++
Step 1: Install VS Code

👉 Download from: https://code.visualstudio.com/

📸 (screenshot will be placed in /assets/setup-guide/)

Step 2: Install Compiler

Windows: Install MinGW-w64

During installation → Add path C:\mingw64\bin to Environment Variables → PATH

Linux/macOS:

sudo apt install build-essential   # Ubuntu/Debian
xcode-select --install             # macOS


📸 (screenshot: Adding MinGW to PATH)

Step 3: Install Extensions in VS Code

Open VS Code → Extensions (Ctrl+Shift+X) and install:

C/C++ (by Microsoft)

Code Runner (optional, for quick run)
📸 (screenshot: Extensions panel in VS Code)

Step 4: Configure VS Code

Open a folder (e.g., C_Lab).

Create program.c or program.cpp.

Write test code (from section 3).
📸 (screenshot: Writing hello.c in VS Code)

Step 5: Run the Program

Using Terminal:

gcc program.c -o program
./program


Using Code Runner (if installed):

Right-click → Run Code

✅ If you see the output → setup is successful.

8. Additional Tips

Indent code properly for readability.

Use comments (// or /* */) to explain your logic.

Practice writing simple programs before moving to complex ones.

Always test your code with different inputs.

Backup your lab programs in GitHub / pen drive.

✨ Happy Coding & Learning! 🚀

⚡ Now, would you like me to design the actual screenshots (installation, adding PATH, running program in VS Code) and save them in /assets/setup-guide/ for your repo? That way, students can follow step-by-step visually.

You said:
will they now where to run the command
gcc program.c -o program

in vs code terminal or in cmd

the path should be of where the file is stored
ChatGPT said:

Exactly 👍 That’s the most common beginner confusion → “Where should I type gcc program.c -o program?”

Let me make this super clear in your README:

🔑 Where to Run gcc / g++ Commands

You can run the commands in two ways:

1. Inside VS Code

Open your code file (program.c or program.cpp) in VS Code.

Open Terminal → New Terminal (shortcut: Ctrl+`).

The terminal will open at the project folder path.

Run:

gcc program.c -o program
./program


(or g++ program.cpp -o program for C++).

⚠️ Make sure you are inside the folder where your code file is saved.
For example:

C:\Users\Student\Documents\C_Lab> gcc program.c -o program

2. Using Windows CMD (Command Prompt)

Open CMD.

Navigate to the folder where your file is saved:

cd C:\Users\Student\Documents\C_Lab


Then run:

gcc program.c -o program
./program


✅ Golden Rule:
👉 Always navigate to the folder where the code file is saved before running gcc or g++.
Otherwise, you’ll get “file not found” errors.