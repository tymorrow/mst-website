---
layout: cs1580lab
title: Lab 3
---

## Lab 3 <small>Arithmetic</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab3`
4. Change your current directory to `lab3`
5. Create a new file named `lab3.cpp` using `jpico`

---

#### <span class="badge">2</span> Program specifications

Today's lab will require that you write a program to calculate the amount of snacks needed for any social events you host.
This is useful because planning an event can require a lot of logistics, one of which is knowing how many appetizers to buy.
You will use a highly scientific appetizer equation for your calculation, i.e., you will implement this equation in C++ in your `lab3.cpp` file.

Knowing how the appetizers are served will help us obtain a unit of measurement with which to work.
Therefore, your program will assume `appetizers will be consumed in single bite portions` (think cheese on a stick).
However, food at the store isn't labeled in bites, so keep in mind that `one bite weighs approximately 10 grams`.

Additionally, the amount of appetizers eaten by guests changes significantly based on the existence of a full meal and the time of day (lunch/dinner time).

- A party should not have a full meal outside of a meal time so we will just assume the user won't want to do that.
- If there will be a full meal and the party is during a meal time, expect guests to eat `3.4 bites per hour`.
- If there will not be a full meal and the party is not during a meal time, expect guests to eat `5.5 bites per hour`.
- If there will not be a full meal and the party is during a meal time, expect guests to eat `9.75 bites per hour`.

With all of this in mind, the equation for the estimated weight of the appetizers is as follows:

$$
\begin{align*}
  \text{appetizerWeight} = guestCount * partyDuration * biteRate * BITE\_WEIGHT\\
\end{align*}
$$

The value of the variable `biteRate` is determined by user-provided answers about the presence of a full meal and the time of day.
So you will have to somehow set the value of `biteRate` based on the user's answers.

*Hint: multiplying a number by zero eliminates the number, whereas multiplying the number by a one gives you the same number.*

**Note: You cannot use if-statements for this assignment!**

Lastly, the program needs to prompt the user for the amount of grams per package of the appetizer - `gramsPerPackage`.
This is needed because the program can use this value to calculate the number of appetizer packages to buy for the party.
This is done by calculating `(appetizerWeight / gramsPerPackage) + 1`, where the plus 1 is accounting for any remainder.
Speaking of remainder, make sure to output just how much **will be leftover** - think modulus.

---

##### Implementation Guide

In order to avoid a lot of compiler errors at once, program incrementally and compile regularly!  
The following is an example of how you might do this:

1. Implement basic program and declare/initialize all variables and constants, then `compile`.
2. Get the number of quests from the user, then `compile`.
3. Get the duration of the party from the user, then `compile`.
4. Get the value for whether or not the party will have a full meal, then `compile`.
5. Get the value for whether or not the party will be during meal time, then `compile`.
6. Determine the value of `biteRate`, calculate `appetizerWeight`, output result, then `compile`.
7. And so on.

---

#### <span class="badge">2</span> Program Behavior  
Your program is expected to function as follows:

1. Greet the user
2. Ask how many guests will be attending; store the value in an integer variable
3. Ask how long the party will last in hours; store the value in a float variable
4. Ask if the party will have a full meal (0 for no, 1 for yes); store the value in a boolean variable
5. Ask if the party will be during a meal time (0 for no, 1 for yes); store the value in a boolean variable
6. Calculate and display the result in grams **as an integer** (use static_cast)
7. Ask the user for the weight of a package of the appetizer; store the value in an integer variable
8. Calculate and display the number of packages to buy and the amount of leftovers.
9. Terminate the program with a farewell message.

---

#### <span class="badge">3</span> Submission
**Make sure you are in the `~/SDRIVE/cs1580/lab3` directory before doing the following.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12pm): `cssubmit 1580 B 3`
  - Section D (6pm): `cssubmit 1580 D 3`
  - Note: the commands above are based on the following format:  
      `cssubmit <course #> <section letter> <lab #>`
2. When prompted for inputs, enter:
  - `50` for the number of quests
  - `3.5` for the duration of the party
  - `0` for there not being a full meal
  - `1` for the party occurring during a meal time
  - The value you get should be: 50 * 3.5 * 9.75 * 10 = 17062.5 -> cast -> `17062`
  - `450` for the weight of a package
  - The values you get should be:  `38` for the number of packages, `38` for leftovers

***biteRate calculation***
{% highlight c %}
// BRIEF: Conditionally set the value of biteRate based on user input.
// THIS CODE JUST SHOWS YOU HOW TO DO THE BITE RATE
#include <iostream>
using namespace std;

int main ()
{
  const float RATE_1 = 3.4;
  const float RATE_2 = 5.5;
  const float RATE_3 = 9.75;
  float biteRate = 0;
  bool hasMeal = false, isDuringMealTime = false;

  cout << "Will the party have a meal (1 for yes, 0 for no)? ";
  cin >> hasMeal;
  cout << "Will the party occur during a meal time (1 for yes, 0 for no)? ";
  cin >> isDuringMealTime;

  biteRate =
    ( hasMeal *  isDuringMealTime * RATE_1) +
    (!hasMeal * !isDuringMealTime * RATE_2) +
    (!hasMeal *  isDuringMealTime * RATE_3);

  cout << "The bite rate is: " << biteRate << endl;

  return 0;
}
{% endhighlight %}

***Explanation for leftovers***  
We know we will need 38 packages to feed everyone, but the 38th package will not be fully eaten.
Well, *17062 % 450* gives you the amount of the 38th package that will be eaten.
Therefore, the leftover amount is the package size minus how much will be eaten, i.e., *450 - 17062 % 450 =* `38`

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
