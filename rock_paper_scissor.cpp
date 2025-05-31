/* 
Begin by writing a multi-line comment that describes what this program will do.

3.
Let’s create a skeleton for the program. Add:

#include <iostream>

int main() {
  
  // Live long and prosper
  
}

Copy to Clipboard

4.
In this program, we need a random number for the computer’s choice and we also need to declare an int variable called user for the user’s choice.

So add this line of code at the top:

#include <stdlib.h>

Copy to Clipboard

And the code below in main():

srand (time(NULL));
  
int computer = rand() % 3 + 1;

int user = 0;

Copy to Clipboard

Now we have a random number that could be 1, 2, or 3 for the computer. And we also have a variable for user’s input.

5.
Before moving on, let’s compile and execute using the terminal to make sure there are no bugs.

Prompt the user to select either Rock, Paper, or Scissors:
6.
We can do something like:

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";

Copy to Clipboard

7.
Grab user’s input using std::cin and store it into user.

Use the power of conditionals & logic:
8.
Now we have both the user’s choice and the computer’s randomized choice, let’s use conditionals & logic to determine the winner.

Make sure to jot down the logic of Rock Paper Scissors on a piece of paper before you start coding.

Take your time! */

#include <iostream>
#include <cstdlib>

int main() {

  srand(time(NULL));

  int computer = std::rand() % 3 + 1;

  int user;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";

  std::cin >> user;

  if (user == 1)
    std::cout << "you choose: ✊\n";
  else if (user == 2)
    std::cout << "you choose: ✋\n";
  else
    std::cout << "you choose: ✌️\n";

  if (computer == 1)
    std::cout << "cpu choose: ✊\n";
  else if (computer == 2)
    std::cout << "cpu choose: ✋\n";
  else
    std::cout << "cpu choose: ✌️\n";


  if (user == computer) {

    std::cout << "it's a tie!\n";

  }

  // user rock

  else if (user == 1) {

    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }
    if (computer == 3) {

      std::cout << "you won! woohoo!\n";

    }

  }

  // user paper

  else if (user == 2) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 3) {

      std::cout << "you lost! boo!\n";

    }

  }

  // user scissors

  else if (user == 3) {

    if (computer == 1) {

      std::cout << "you won! woohoo!\n";

    }
    if (computer == 2) {

      std::cout << "you lost! booooo!\n";

    }

  }

  return 0;

}
