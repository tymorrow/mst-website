---
layout: cs1580lab
title: Lab 4
---

## Lab 4 <small>Simple Menu and Loop</small>

---

<a href="{{site.baseurl}}/cs1580/solutions/lab4solution.cpp"
   class="btn btn-info pull-right">
  <i class="fa fa-exclamation-circle"></i>
  Lab 4 Solution
</a>

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab4`
4. Change your current directory to `lab4`
5. Create a new file named `lab4.cpp` using `jpico`

---

#### <span class="badge">2</span> Program Specifications
In this lab you will be adding some features to the Appetizer Estimator you made in Lab 3.

Your program will be expected to do the same calculations as last time, but with some added features and none of the problems from your previous submission, if any.
**In other words, you can reference your code from Lab 3 but do not repeat any mistakes!**

Once you've corrected your code from Lab 3, you should implement a loop such that the user can do calculations until they want to quit, instead of just terminating after a single use.
**You are required to use a while loop for this.**

This loop will work in tandem with a menu which will have three options:

1. **User-provided estimation** // Prompt the user for all of the inputs (like in Lab 3)
2. **Random estimation** // Randomly generate all of the values
3. **Quit** // Causes the program to exit the loop and terminate

These options will be selected at the beginning of each iteration of the while loop to determine which operation to perform.
When randomly generating, make sure the values for particular variables [fall within the following ranges](http://www.cplusplus.com/reference/cstdlib/rand/):

- Has a full meal range: [`0`, `1`]
  - Constants unnecessary
- During a meal time range: [`0`, `1`]
  - Constants unnecessary
- Number of guests range: [`GUEST_MIN`, `GUEST_MAX`]
  - `GUEST_MIN` = 10
  - `GUEST_MAX` = 500
- Party duration range: [`DURATION_MIN`, `DURATION_MAX`]
  - `DURATION_MIN` = 2.0
  - `DURATION_MAX` = 6.0
  - Note: Using mod with floats does not work.  The following will suffice:  
    `partyDuration = rand() % static_cast<int>(DURATION_MAX - DURATION_MIN) + DURATION_MIN;`
- Appetizer package weight range: [`PACKAGE_SIZE_MIN`, `PACKAGE_SIZE_MAX`]
  - `PACKAGE_MIN` = 100
  - `PACKAGE_MAX` = 1000

**If values are received/generated such that the party has a full meal outside of a meal time, the calculation should not be performed; the user should be told that the estimation failed and re-shown the menu.**

**Lastly, you are required to use if-statements to accomplish the new functionality outlined here, but the biteRate calculation should stay how it was in Lab 3 (multiplying by booleans).**

---

#### <span class="badge">3</span> Program Structure

See the pseudo-code below for the structure of the program.

{% highlight c %}
// Appropriate header comment (name, date, section, file name, description)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  // Constant variables
  // Non-constant variables
  // Seed random number generator

  // Greeting message

  // While loop (boolean repeat variable)
    // Prompt menu

    // If menu selection is invalid (not 1 & not 2 & not 3)
      // Output message saying menu selection was invalid
    // Else
      // If 1 selected
        // Get values from user
      // Else if 2 selected
        // Randomly generate values

      // If 3 selected
        // Set repeat value to false
      // else if hasFullMeal && !isDuringMealTime
        // Tell the user that the calculation failed due to invalid values
      // else
        // Calculate/store results
        // Output results (appetizer weight, packages to buy, and leftover weight)

  // Farewell message
  return 0;
}
{% endhighlight %}

---

#### <span class="badge">4</span> Submission
**Make sure you are in the `~/SDRIVE/cs1580/lab4` directory before doing the following.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
- Section B (12pm): `cssubmit 1580 B 4`
- Section D (6pm): `cssubmit 1580 D 4`
- Note: the commands above are based on the following format:  
    `cssubmit <course #> <section letter> <lab #>`
2. When prompted for inputs, enter:
- **Select option `4` from the menu** (shouldn't work)
- **Select option `1` from the menu** (user-provided), and enter:
  - `50` for the number of quests
  - `3.5` for the duration of the party
  - `0` for there not being a full meal
  - `1` for the party occurring during a meal time
  - `450` for the weight of a package
  - Appetizer weight (grams): 17062
  - Number of packages: 38
  - Leftover weight (grams): 38
- **Select option `1` from the menu again**, and enter:
  - `50` for the number of quests
  - `3.5` for the duration of the party
  - `1` for there not being a full meal
  - `0` for the party occurring during a meal time
  - `450` for the weight of a package
  - (Message received about calculation failure)
- **Select option `2` from the menu** (random estimation)
- **Select option `2` from the menu again**
- **Select option `3` from the menu** (Quit)

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
