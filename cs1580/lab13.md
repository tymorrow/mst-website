---
layout: cs1580lab
title: Lab 13
---

## Lab 13 <small>Simple Classes</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab13`
4. Run the following command: `cp lab12/lab12.cpp lab13/lab13.cpp`
5. Change your current directory to `lab13`

---

#### <span class="badge">2</span> Program Specifications

Today you are going to expand on the Dog class that you made in lab 12, and also create a FoodBowl class for dogs to interact with.

##### FoodBowl Class

- Private member variables:
  - `int m_amount`
  - `int m_capacity`
- Default constructor, set `m_amount` to zero and `m_capacity` to some global constant maximum of 50.
- `int get_amount()` function that returns `m_amount`
- `void set_amount(const int amount)` function that sets `m_amount` equal to the parameter but only if it less than or equal to the capacity.  If `amount` exceeds the capacity, then just set `m_amount` equal to `m_capacity`.
- `void refill()` function that sets `m_amount` equal to `m_capacity`.
- Add an overloaded `<<` operator function that prints out the status of the food bowl as `m_amount` over `m_capacity`, i.e., "50/50" for full, "0/50" for empty.

##### Dog Class

- Add `string m_name` and `int m_hunger` private member variables.  Modify both constructors (for the default, set name to "unnamed" and hunger to 10), the `set_info()` function, and the `compare_with()` functions appropriately.
- Refactor the `bark()` function to print out:
  - "*whines*" if `m_hunger >= 75`
  - "Woof!" if `75 > m_hunger >= 50`
  - "Woof Woof!" if `50 > m_hunger`
- Add an overloaded `<<` operator function that prints out the name of the dog and its hunger level in parenthesis.
- Add an `void eat(FoodBowl& foodBowl)` function that reduces the dog's hunger.  How to implement:
  - You'll have to use the food bowl's get and set amount functions.
  - Think about it this way: the dog will keep eating (i.e., take bites) *while* it is still hungry && there is still food in the bowl.
  - *The very last thing before `return;` should be a call to `bark()`*

### Do NOT do your pre/post/desc documentation for this lab.

### Follow the code below exactly!

You main function should look as follows:

{% highlight c %}
// HEADER COMMENT
#include <iostream>
using namespace std;

const int MAX_FOOD_BOWL_SIZE = 50;

// FoodBowl Class definition
// Dog Class definition

int main()
{
  Dog champ("Champ", "Labrador Retriever", "Black", 45, 10);
  Dog toby("Toby", "German Shephard", "Brown", 55, 10);
  FoodBowl foodBowl;

  cout << champ << toby;
  champ.compare_with(toby);
  cout << foodBowl;
  foodBowl.refill();
  cout << foodBowl;
  champ.eat(foodBowl);
  toby.eat(foodBowl);
  cout << foodBowl;
  toby.compare_with(champ);

  return 0;
}

// FoodBowl Class function implementations
// Dog Class function implementations

{% endhighlight %}

---

#### <span class="badge">3</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab13` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 13`
  - Section D (06:00pm): `cssubmit 1580 D 13`
2. Your program should not have any input values, but it should output something similar to the following:

<img src="{{site.baseurl}}/cs1580/images/lab13-output.png"
     class="img-responsive" />

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
