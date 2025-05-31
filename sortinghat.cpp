/* Harry Potter Sorting Hat Quiz
“A thousand years or more ago,
When I was newly sewn,
There lived four wizards of renown,
Whose names are still well known.”

The Hogwarts School of Witchcraft and Wizardry welcomes you! First-year students must go through the annual Sorting Ceremony.

The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to:

gryffindor
hufflepuff
ravenclaw
slytherin
Harry Potter

Write a sortinghat.cpp program that asks the user some questions and places them into one of the four Houses based on their answers!

Tasks
6/17 complete
Mark the tasks as complete by checking them off
Setting up:
1.
First things first, let’s create a skeleton for the program:

#include <iostream>

int main() {

  // The magic starts here
  
}

Copy Failed!

2.
Every time the Muggle-born quiz taker answers a question, they should receive points to one or more Houses.

Let’s declare four int variables:

gryffindor
hufflepuff
ravenclaw
slytherin
And initialize them each to 0.

3.
Let’s declare another four int variables to store each of their answers to the four quiz questions:

answer1
answer2
answer3
answer4
4.
Let’s add a std::cout statement that tells the Muggle that they have started the quiz with the phrase The Sorting Hat Quiz!.

5.
Before moving on, press Save and let’s compile and execute using the terminal to make sure there are no bugs.

Question 1) When I'm Dead...
6.
And now comes the first question!

Use multiple std::cout statements to display the following question:

Q1) When I'm dead, I want people to remember me as:

  1) The Good
  2) The Great
  3) The Wise
  4) The Bold

Copy to Clipboard

7.
Then use std::cin to receive an input from the user.

Store that input in answer1.

8.
Merlin’s beard! We have the user’s answer but now we need… conditionals & logic.

Write a control flow that:

If answer1 == 1, add one point to hufflepuff.

Else if answer1 == 2, add one point to slytherin.

Else if answer1 == 3, add one point to ravenclaw.

Else if answer1 == 4, add one point to gryffindor.

Else, output Invalid input.

9.
Compile and execute using the terminal.

Make sure to debug.

Question 2) Dawn or Dusk?
10.
And now do the same thing for question 2:

Q2) Dawn or Dusk?

  1) Dawn
  2) Dusk

Copy to Clipboard

And use std::cin to get user’s input and store it in answer2.

11.
However, for this question:

If answer2 == 1, one point to both gryffindor and ravenclaw.

Else if answer2 == 2, one point to both hufflepuff and slytherin.

Else, output the phrase Invalid input.

Question 3) Instrument
12.
Do the same thing for question 3:

Q3) Which kind of instrument most pleases your ear?

  1) The violin
  2) The trumpet
  3) The piano
  4) The drum

Copy to Clipboard

13.
For this question:

If answer3 == 1, add one to slytherin.

Else if answer3 == 2, add one to hufflepuff.

Else if answer3 == 3, add one to ravenclaw.

Else if answer3 == 4, add one to gryffindor.

Else, output Invalid input.

Question 4) Which road tempts you most?
14.
Do the same thing for question 4:

Q4) Which road tempts you most?

  1) The wide, sunny grassy lane
  2) The narrow, dark, lantern-lit alley
  3) The twisting, leaf-strewn path through woods
  4) The cobbled street lined (ancient buildings)

Copy to Clipboard

15.
For this question:

If answer4 == 1, add one to hufflepuff.

Else if answer4 == 2, add one to slytherin.

Else if answer4 == 3, add one to gryffindor.

Else if answer4 == 4, add one to ravenclaw.

Else, output Invalid input.

The answer:
16.
Now we need to find out which of the four Houses has the highest answer!

We will need another variable called max that starts at 0 and an empty string with:

std::string house;

Copy to Clipboard

And to find the maximum:

if (gryffindor > max) {
  
  max = gryffindor;
  house = "Gryffindor";
  
}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

std::cout << house << "!\n";

Copy to Clipboard

This also outputs the House.

Optional:
17.
Sample solution(s):

sortinghat.cpp
P.S. If you make something cool, share it with us! */

#include <iostream>

int main() {

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3, answer4;

  std::cout << "===============\n";
  std::cout << "The Sorting Hat\n";
  std::cout << "===============\n\n";

  // ~~~~~~~~~~ Question 1 ~~~~~~~~~~

  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";

  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer1;

  if (answer1 == 1)
    hufflepuff++;
  else if (answer1 == 2)
    slytherin++;
  else if (answer1 == 3)
    ravenclaw++;
  else if (answer1 == 4)
    gryffindor++;

  // ~~~~~~~~~~ Question 2 ~~~~~~~~~~

  std::cout << "\nQ2) Dawn or Dusk?\n\n";

  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n\n";

  std::cout << "Enter your answer (1-2): ";
  std::cin >> answer2;

  if (answer2 == 1)
  {

    gryffindor++;
    ravenclaw++;

  }
  else if (answer2 == 2)
  {

    hufflepuff++;
    slytherin++;

  }
  else
  {

    std::cout << "Invalid input\n";

  }

  // ~~~~~~~~~~ Question 3 ~~~~~~~~~~

  std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n\n";

  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";

  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer3;

  if (answer3 == 1)
    slytherin++;
  else if (answer3 == 2)
    hufflepuff++;
  else if (answer3 == 3)
    ravenclaw++;
  else if (answer3 == 4)
    gryffindor++;

  // ~~~~~~~~~~ Question 4 ~~~~~~~~~~

  std::cout << "\nQ4) Which road tempts you the most?\n\n";

  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";

  std::cout << "Enter your answer (1-4): ";
  std::cin >> answer4;

  if (answer4 == 1)
    hufflepuff++;
  else if (answer4 == 2)
    slytherin++;
  else if (answer4 == 3)
    gryffindor++;
  else if (answer4 == 4)
    ravenclaw++;

  // ========== Sorting ==========

  std::cout << "\nCongrats on being sorted into... ";

  int max = 0;
  std::string house;

  if (gryffindor > max)
  {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max)
  {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max)
  {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max)
  {

    max = slytherin;
    house = "Slytherin";

  }

  std::cout << house << "!\n";

  return 0;

}
