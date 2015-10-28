---
layout: cs1580lab
title: Lab 8
---

## Lab 8 <small>Functions, Separate Files, & Static Variable</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab8`
4. Change your current directory to `lab8`
5. Create three files:
   1. `main.cpp`
   2. `numberGuesser.cpp`
   3. `numberGuesser.h`

---

#### <span class="badge">2</span> Program Specifications

#### Behavior

The program will start by generating a random number (`numberToGuess`) between 1 and 100, inclusive (make consts).
Then it will ask the user if they want hints after their guesses (store as a bool).
Then finally, the program will give the user at most 5 tries (make constant) to guess the number.

**HINTS ON**

If the user's guess is wrong, the program should tell them if it was too high or too low.

**HINTS OFF**

If the user's guess is wrong, the program should just tell them they were wrong and reprompt them.

**USER GUESSES CORRECTLY**

If the user's guess is correct, the program should tell them and then immediately exit.

#### Program Structure

Your program should utilize functions for retrieving user input and have three files: main.cpp, a .h file for function prototypes and global constants, and a .cpp file function definitions.

The code in `main.cpp` should contain necessary variables and initializations, welcome/farewell messages, asking the user about hints (function call), and a while loop with two function calls inside.

Lastly, the `ValidateUserGuess()` function should determine whether or not to return true or false based on the value of a **static variable** inside of it that keeps track of the number of times the function has been called.  This value will be compared to the constant you made for the max number of guesses allowed, which is why it's global.  Hence, the function should increment its static variable appropriately.
Additionally, this function will use if-statements appropriately to provide hints (if desired) and determine when a match is made.  The function will return true if a match is found or if the max number of guesses is reached, false otherwise.

How to do the other two functions should be known to you by now.

If you're not sure how to start, the pseudo-code provided below should get you going.

<a href="https://gist.github.com/tymorrow/62a1c7f54a5c63ab6550"
   class="btn btn-warning btn-sm">
  Starter Files <i class="fa fa-download"></i>
</a>

---

#### <span class="badge">3</span> Compilation

    fg++ *.cpp -o lab8

---

#### <span class="badge">4</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab8` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 8`
  - Section D (06:00pm): `cssubmit 1580 D 8`
2. When prompted for inputs, turn hints on, and try to guess the number!

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
