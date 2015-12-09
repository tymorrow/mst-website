---
layout: cs1580lab
title: Lab 7
---

## Lab 7 <small>Menu, Functions, Separate Files</small>

---

<a href="{{site.baseurl}}/cs1580/solutions/lab07solution.zip"
class="btn btn-info pull-right">
  <i class="fa fa-exclamation-circle"></i>
  Lab 7 Solution
</a>

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab7`
4. Change your current directory to `lab7`
5. Create three files:
   1. `main.cpp`
   2. `calcFunctions.cpp`
   3. `calcFunctions.h`

---

#### <span class="badge">2</span> Program Specifications

#### Behavior
Your program is to perform like a simple calculator.
It will provide a menu to the user with five options:

1. Add
2. Subtract
3. Multiply
4. Division
5. Quit

**Follow the pseudocode in the `main.cpp` starter file.**

<a href="https://gist.github.com/tymorrow/8ed787d2862b2f873cdf" target="_blank"
   class="btn btn-warning">
  Starter Files <i class="fa fa-download"></i>
</a>

#### `main.cpp`

This is where your welcome/farewell messages, menu, and function calls go.

You should only have variables for the following: menu selection, quantity X, quantity Y, and result.

**You must use the following:**

- **do-while** : for looping the menu
- **switch-case** : for choosing what to do based on the menu selection

Your do-while's loop condition must be the same variable as the menu selection.

Use your switch-cases's default case to notify the user that an invalid selection was made.

#### `calcFunctions.cpp`

This file contains the definitions/implementations of your functions declared in `calcFunctions.h`.

#### `calcFunctions.h`

This file should just contain function **documentation** and the following prototypes:

- `void Add(const float quantityX, const float quantityY, float & result);`
- `void Subtract(const float quantityX, const float quantityY, float & result);`
- `void Multiply(const float quantityX, const float quantityY, float & result);`
- `void Divide(const float quantityX, const float quantityY, float & result);`

See link <a href="http://classes.mst.edu/compsci1570/codedocumentation.htm" target="_blank">here</a>
for what proper documention looks like and means.

---

#### <span class="badge"></span> Bonus!
Implement:

- Powers (from lab 6)
- Factorials (from lab 6)

in your program.
Modify the functions to use pass-by-reference and properly document them.

---

#### <span class="badge">3</span> Compilation

    fg++ *.cpp -o lab7

---

#### <span class="badge">4</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab7` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 7`
  - Section D (06:00pm): `cssubmit 1580 D 7`
2. When prompted for inputs, enter:
  - Select option 1, then 2, then 3, then 4, and for each, enter 10 for X, and 3 for Y.
  - Select option 5 last to quit.

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
