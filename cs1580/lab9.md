---
layout: cs1580lab
title: Lab 9
---

## Lab 9 <small>Functions, Arrays, & Structs</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab9`
4. Change your current directory to `lab9`
5. Create three files:
   1. `main.cpp`
   2. `peopleDb.cpp`
   3. `peopleDb.h`

---

#### <span class="badge">2</span> Program Specifications
Your program will have an array of *people* (structs) and allow the user to store new people and print out the current info in the database.
Your program must utilize the following for full points:  

  - A user-friendly menu
  - Functions
  - Multiple files
  - Array of structs

The struct you make represents a `Person` and contains a name (just first name; string), age (int), and favorite ice cream (string).
The size of the array of people should be constant at 5.

The menu should have three options: (1) Add Person; (2) Print Database; (3) Quit.

If the database is full, your program should not allow any more additions.  
For this lab, you need not worry about validating the personal info entered.
Selecting *Print Database* should just iterate over the database and print out the full list of info that was entered.
Selecting *Quit* obviously exits the loop as we've seen many times before.

Think carefully about where functions are appropriate and use what you have learned previously.
You may exclude Welcome/Farewell functions since those are only ever called once.

**No global variables other than constant ones**.

**The array of people should be inside `int main()`**.

---

#### <span class="badge">3</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab9` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 9`
  - Section D (06:00pm): `cssubmit 1580 D 9`
2. When your program runs, fill the database with your own values and try to add a sixth person (shouldn't be allowed).
  - **Don't forget that spaces are not picked as input so only use single words.**!
3. Next, select option 2 to print out the database and you should see everything you entered previously excluding your 6th attempt.
4. Selection option 3 to quit.

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
