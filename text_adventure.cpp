/* 1.
In order to complete this project, you should be familiar with C++ conditionals and control flow, loops, and setting variables using user input. Ideally, you’ve finished the first four sections of Learn C++ (through Loops).

Project Requirements
2.
Your program should have a storyline with:

a beginning
at least three possible endings
It can help to map out your ideas on paper and draw out your possible branches before you begin coding anything.

In our solution, we used Alice’s Adventures in Wonderland as the premise for our storyline, but you can choose any topic you like! Some possible ideas include:

A fantasy book you love
Your favorite TV show
A funny movie
A murder mystery
A game show
3.
Your program should contain at least three branch points where the user must make a choice about what to do next. At each branch point, the program should:

give the user at least two choices
accept user input
Note that not every story branch needs its own ending; it can also add something and then reconnect with another storyline.

4.
Your program should incorporate at least one kind of loop.

Loops come in handy in a couple scenarios:

to validate user input (e.g., check if the user entered something other than your listed choices and then list the choices again)
to give the user multiple chances to choose a specific outcome (e.g., give a user three chances to pick an option that won’t get them killed)
to continue the adventure until the user makes a particular choice
Note: On Codecademy’s platform, if you plan to obtain user input within a loop, we recommend sticking with a for loop. Due to the way our platform is set up, a while loop that includes user input will trigger an infinite loop.

5.
Your program should handle user choices using conditional logic. We encourage you to use if/else if statements and switch statements where you see fit.

Note: If your user has reached an ending, you can use return 0; to exit the main() function and end the program. */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string choice;
    int attempts;

    // Beginning of the story
    cout << "Welcome to the Magical Forest Adventure!\n";
    cout << "You find yourself at the edge of a mysterious forest.\n";
    cout << "Do you want to enter the forest? (yes/no): ";
    cin >> choice;

    if (choice != "yes" && choice != "no") {
        do {
            cout << "Please enter 'yes' or 'no': ";
            cin >> choice;
        } while (choice != "yes" && choice != "no");
    }

    if (choice == "no") {
        cout << "You decide to stay home. Maybe next time!\n";
        return 0;
    }

    // First branch point
    cout << "\nYou step into the forest and see two paths.\n";
    cout << "Do you want to go left towards the glowing light or right towards the dark shadows?\n";
    cout << "Enter 'left' or 'right': ";
    cin >> choice;

    while (choice != "left" && choice != "right") {
        cout << "Invalid choice. Please enter 'left' or 'right': ";
        cin >> choice;
    }

    if (choice == "left") {
        // Second branch point
        cout << "\nYou walk towards the glowing light and find a friendly fairy.\n";
        cout << "She offers you a magic potion.\n";
        cout << "Do you accept the potion? (yes/no): ";
        cin >> choice;

        while (choice != "yes" && choice != "no") {
            cout << "Please enter 'yes' or 'no': ";
            cin >> choice;
        }

        if (choice == "yes") {
            cout << "\nYou drink the potion and feel empowered! You safely exit the forest. The End.\n";
            return 0;
        } else {
            cout << "\nYou politely decline and continue your journey safely out of the forest. The End.\n";
            return 0;
        }
    } else {
        // choice == "right"
        // Third branch point
        cout << "\nYou venture into the shadows and encounter a mischievous troll.\n";
        cout << "He asks for a riddle to pass.\n";
        attempts = 3;

        string answer;
        bool correct = false;

        while (attempts > 0 && !correct) {
            cout << "Here's the riddle: What has keys but can't open locks? ";
            cin >> answer;

            if (answer == "piano" || answer == "a piano") {
                correct = true;
                cout << "Correct! The troll lets you pass. You exit the forest safely. The End.\n";
                break;
            } else {
                attempts--;
                if (attempts > 0) {
                    cout << "Wrong answer. Try again (" << attempts << " attempts left): ";
                }
            }
        }
        if (!correct && attempts == 0) {
            cout << "\nYou failed the riddle. The troll blocks your way, and you have to go back.\n";
            cout << "Would you like to try the other path? (yes/no): ";
            cin >> choice;
            if (choice == "yes") {
                // Loop back to the second branch
                // For simplicity, we just restart the game
                cout << "\nRestarting your adventure...\n";
                // In a real game, you'd implement a loop or call a function
            } else {
                cout << "You decide to leave the forest. Safe travels!\n";
                return 0;
            }
        }
    }

    return 0;
}
