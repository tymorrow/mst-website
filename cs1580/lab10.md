---
layout: cs1580lab
title: Lab 10
---

## Lab 10 <small>Reading a file to an array</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab10`
4. Change your current directory to `lab10`
5. Create two files:
  - `lab10.cpp`
  - `input.dat`
6. Inside `input.dat`, enter (copy/paste) the following text:

> Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

---

#### <span class="badge">2</span> Program Specifications

Your program will read in a file, replace a specified character with some other character, and then print the resulting message to the console.

Your program must do the following:

  1. Read in the contents of a file to a character array.
  2. Ask the user for two characters: (1) a target character to be replaced; and (2) the new character that will replace the first.
  3. Replace every occurrence of the first letter with the second letter.
  4. Print out the character array to the console.

For this lab you will NOT use functions, multiple files, or structs.
Simply demonstrate basic knowledge of reading a file into an array and replacing some character.

#### Bonus
In addition to the above, write the modified array to a file called `output.dat`.

---

#### <span class="badge">3</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab10` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 10`
  - Section D (06:00pm): `cssubmit 1580 D 10`
2. When prompted for inputs, replace the letter 'a' with '@'.

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
