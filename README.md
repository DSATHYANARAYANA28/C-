# C++
Hello World
Hello World!
Take a look at the hello.cpp file in the code editor that is placed in the middle of the screen. It’s a C++ program!

In our code editor, the file name is displayed at the top:

File

C++ programs are stored in files which usually have the file extension .cpp, which simply stands for “C Plus Plus”.

The code inside our C++ file is a classic first step all new programmers take — they greet the world through the terminal!

The terminal is the black panel on the right. It should be blank right now. The code in the text editor will print text out onto the terminal. More specifically, it will print the phrase Hello World!.

Before we explain what all that mumbo jumbo is, let’s run the program to see what happens.

![image](https://github.com/user-attachments/assets/ae107dcd-6811-49e8-bc12-255619df6489)
C++, like most programming languages, runs line by line, from top to bottom. Here is the structure of a C++ program:

Program Structure

In between the curly braces is what we are going to focus on for now.

std::cout << "Hello World!\n";



std::cout is the “character output stream”. It is pronounced “see-out”.
<< is an operator that comes right after it.
"Hello World!\n" is what’s being outputted here. You need double quotes around text. The \n is a special character that indicates a new line.
; is a punctuation that tells the computer that you are at the end of a statement. It is similar to a period in a sentence.

Hello World
Pattern
We learned how to output a line of text with the following code:

std::cout << "🚙💨\n";

Copy to Clipboard

It will output:

🚙💨

Copy to Clipboard

We can also output multiple lines by adding more std::cout statements:

std::cout << "Hello\n";
std::cout << "Goodbye\n";

Copy to Clipboard

This will output:

Hello
Goodbye

Hello World
A C++ program has a very specific structure in terms of how the code is written. Let’s take a closer look at the Hello World program — line by line!

C++ programs have a very specific structure in terms of how the code is written. There are some key elements that you use in all your C++ programs.

Here, we have a program called hello.cpp. It is a classic first program!

// This program outputs the message "Hello World!" to the monitor

#include <iostream>

int main() {

   std::cout << "Hello World!\n";

   return 0;

}

This program writes the phrase “Hello, World!” to your terminal.

C++ is a case-sensitive language. Case sensitivity means that your keywords and variable declarations must match the case. For example, the C++ keyword for outputting is cout. If you were to type Cout or COUT, the compiler would not know that your intention was to use the keyword cout.

Note: Don’t be intimidated by all the new information. You’ll learn about all of these things (and a whole lot more)!

Let’s go over this hello.cpp program line by line:

// This program outputs the message "Hello World!" to the monitor

This is a single-line comment that documents this code. The compiler will ignore everything after // to the end of the line. Sometimes, you will find this comment to include the author’s name or document what the code does.
#include <iostream>

This is known as a pre-processor directive. It instructs the compiler to locate the file that contains code for a library known as iostream. This library contains code that allows for input and output, such as displaying data in the terminal window or reading input from your keyboard.
int main() {
    // Statements
}

Every C++ program must have a function called main(). A function is basically a sequence of instructions for the computer to execute. This main() function houses all of our instructions for our program. This is where we will be writing our code.
std::cout << "Hello World!\n";

This code uses a method known as cout (pronounced “see out”) to send the text “Hello World!” to the terminal for output.
return 0;

The return statement is used to end a function. If the program reaches this statement, returning a value of 0 is an indication to the operating system that the code executed successfully. This line of code is optional.
C++ programs permit judicious use of white space (tabs, spaces, new lines) to create code that is easier to read. The compiler completely ignores the white space, with a small exception concerning if statements that will be covered later. It is highly recommended that you make use of white space to indent and separate lines of code to aid in the readability of your source code files.

