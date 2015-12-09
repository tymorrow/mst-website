---
layout: cs1580lab
title: Lab 12
---

## Lab 12 <small>Simple Class</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab12`
4. Change your current directory to `lab12`
5. Create one file:
  - `lab12.cpp`

---

#### <span class="badge">2</span> Program Specifications

In your `lab12.cpp` file, **and only there**, you will create a *dog* class.

The `Dog` class will have the following private member variables: breed, color, weight.

It will also have the following public member functions:

  - a default constructor (sets breed to "unidentified", color to "unknown", and weight to zero)
  - an overloaded constructor with parameters: breed, color, weight
  - a *bark* function that just outputs a "Woof!" to the console
  - a *set_info* function that sets the information for the dog based on user input (don't need to validate)
  - a *compare_with* function that takes another dog as a parameter (const and by reference) and outputs both dogs' attributes side-by-side.

You main function should look as follows:

{% highlight c %}
// HEADER COMMENT
#include <iostream>
using namespace std;

// Class definition

int main()
{
  Dog dog1;
  Dog dog2("German Shephard","Brown",80);
  dog1.set_info();
  dog1.compare_with(dog2);
  return 0;
}

// Class function implementations

{% endhighlight %}

---

#### <span class="badge">3</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab12` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 12`
  - Section D (06:00pm): `cssubmit 1580 D 12`
2. Your program should ask you for dog 1's info.  Give it the following info:
  - Breed: `Labrador`
  - Color: `Black`
  - Weight: 50

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
