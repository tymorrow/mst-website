---
layout: cs1580lab
title: Lab 14
---

## Lab 14 <small>Templated Class</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab14`
4. Change your current directory to `lab14`
5. Create one file:
  - `lab14.cpp`

---

#### <span class="badge">2</span> Program Specifications

Today you will creating two animal classes: dog (do NOT use the one from previous labs) and cat.
The purpose of today's lab is to apply templating in a way that (kinda) makes sense.
Start by creating the dog and cat classes per the specs below.

##### Dog Class
- Add a private member variable: `string m_name`  
- Add a default (sets name to "Champ") and overloaded constructor (sets name to whatever is passed in)
- Add a public accessor function (get) for the name
- Add a public, static function called `static string get_species()` that returns the string "Dog"

##### Cat Class
- Add a private member variable: `string m_name`  
- Add a default (sets name to "Whiskers") and overloaded constructor (sets name to whatever is passed in)
- Add a public accessor function (get) for the name
- Add a public, static function called `static string get_species()` that returns the string "Cat"

##### Kennel\<T\> Class
- Add a public member variable: `const static int MAX_RESIDENTS = 3`
- Add a private member variable: `int m_num_residents` (this keeps the current count of residents)
- Add a private member variable: `T m_residents[MAX_RESIDENTS]`
- Add a default constructor (sets `m_num_residents = 0`)
- Add a public function called `bool add_resident(const T resident)`
  - Returns `true` if the resident was added successfully to `m_residents`, otherwise `false`
  - Residents can be added to the array `m_residents` if `m_num_residents` is less than `MAX_RESIDENTS`
  - Print out an appropriate message for whatever ends up happening with the resident
- Add a public function called `void print_residents()` that prints out a NICE table of the current kennel residents
  - Use the `setw()` function in `iomanip` appropriately

##### Regarding Documentation
Do NOT do all of the usual DESC/PRE/POST documentation for this lab.
However, you are still expected to do one particular piece of documentation for the kennel class that goes right above the definition.
This documentation must state the preconditions (aka requirements) for the T parameter.
I.e., any type T must have \.\.\.

- Hint 1: there are two things it must have
- Hint 2: what happens if you try to create a kennel where T is not a dog or cat?

##### Follow the code below exactly!

You can do this lab completely with about 100 lines of code.

{% highlight c %}
// HEADER COMMENT
#include <iostream>
#include <iomanip>
using namespace std;

// Dog class definition (you should do all function implementations inline)

// Cat class definition (you should do all function implementations inline)

// Kennel<T> class COMMENT
// Kennel<T> class definition

// Kennel<T> function implementations
// template <class T>
// bool kennel<T>::add_resident(const T pal)
// { }

// template <class T>
// void kennel<T>::print_residents()
// { }

int main()
{
  dog d1, d2("Bruno"), d3("Prince");
  cat c1("Whiskers");
  kennel<dog> dog_kennel;
  kennel<cat> cat_kennel;

  dog_kennel.add_resident(d1);
  dog_kennel.add_resident(d2);
  dog_kennel.add_resident(d3);
  dog_kennel.add_resident(d1);
  cat_kennel.add_resident(c1);
  cat_kennel.print_residents();

  return 0;
}

{% endhighlight %}

---

#### <span class="badge">3</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab14` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 14`
  - Section D (06:00pm): `cssubmit 1580 D 14`
2. Your program should not have any input values, but it should output something similar to the following:

<img src="{{site.baseurl}}/cs1580/images/lab14-output.png"
     class="img-responsive" />

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
