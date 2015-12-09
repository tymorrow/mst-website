---
layout: cs1580lab
title: Lab 11
---

## Lab 11 <small>NTCA Manipulation</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab11`
4. Change your current directory to `lab11`
5. Create one file:
  - `lab11.cpp`

---

#### <span class="badge">2</span> Program Specifications

Your program will first create the following null-terminating character array (NTCA):

    char text[250] = "Yzu^wpll^nzt[rfcfpve[an>F^zn>thp*>a**pgnmfnt!";

Your program must manipulate the NTCA in the following ways to reassemble a coherent message:

  1. Replace all `*` characters with `s`
  2. Replace all `z` characters with `o`
  3. Replace all `^`, `[`, and `>` characters with a space
  4. Replace all `p` characters with `i`
  5. Replace all `f` characters with `e`

DO NOT use multiple files, or structs for the above specifications, **BUT YOU SHOULD DEFINITELY USE FUNCTION(S) APPROPRIATELY.**

**Your program should print out the message after each stage of reassembly.**

#### Bonus

Apply the following, additional rules to the message:

  1. Replace all `F` characters with `A`
  2. Remove any occurrences of the word `not`

Modify your program to read in this message from a file called `input.dat` and then write the manipulated array to 'output.dat'.

---

#### <span class="badge">3</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab11` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 11`
  - Section D (06:00pm): `cssubmit 1580 D 11`
2. Your program should output the message at each stage of reassembly.

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
