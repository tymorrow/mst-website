---
layout: cs1580lab
title: Lab 5
---

## Lab 5 <small>Sandwich Menu</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab5`
4. Change your current directory to `lab5`
5. Create a new file named `lab5.cpp` using `jpico`

---

#### <span class="badge">2</span> Program Specifications

You are to write another menu-driven program for ordering food.
In other words, your program will act as if it is taking sandwich orders from the user.
For this reason, **it is paramount that your program work properly AND be very user-friendly**.
Your output must look very nice!
As the user selects sandwiches, the program will keep track of the cost of the sandwiches.
At the very end, after the user is done selecting, tax will be applied to the total and then the final total will be displayed.

Your program will start by asking the user for the number of sandwiches the user will be ordering (`int sandwichCount`).
It will then loop over `sandwichCount` (**use a for loop**) and output a menu for the user to select from.
The menu should look similar to:

<pre style="background-color:#333; color:whitesmoke">
=====SANDWICH MENU=====
  1) Chicken----$2.50
  2) Turkey-----$2.00
  3) BLT--------$3.00
  4) Veggie-----$1.50
=======================
  Selection #1: <u>input here</u>
</pre>

After the user selects (`short sandwichChoice`) one of the four choices, you should validate that their selection was between 1 and 4 before going on (**use a do-while**).
I.e., *do* the menu *while* the input is invalid.
Put an if-statement as the last thing in the do-while that will output a nice error message.
Notice that the menu says "Selection #1" at the bottom.  
That number should change each iteration to reflect the sandwich they're choosing.

Once they make a valid selection, the program should decide (**use a switch-case**) the amount to add to the total price (`float totalPrice`) based on `sandwichChoice`.
I.e., *switch* on `sandwichChoice` with cases: 1, 2, 3, 4.
Each case should increase `totalPrice` by the appropriate amount (see the menu above).
The prices above should be made constants.

Once the user has selected all of their sandwiches, the program will apply a tax by multiplying `totalPrice` by `1.078`.
The tax rate should also be a constant.

<a href="{{site.baseurl}}/cs1580/lab5-flowchart.png" class="btn btn-warning" target="_blank">
  <i class="fa fa-arrows-h"></i> FLOW CHART
</a>

*Note: to make your menu price output look nice, you can use the following to make sure it always outputs 2 decimals:*

{% highlight c %}
// 'setprecision' forces the output to display to the hundredths place
cout << "  2) Turkey-----$" << fixed << setprecision(2) << TURKEY_PRICE << endl;
{% endhighlight %}

Be sure to have `#include <iomanip>` at the top of your code if you use this.

---

#### <span class="badge">3</span> Submission
**Make sure you are in the `~/SDRIVE/cs1580/lab5` directory and you have ONLY ONE .cpp FILE in your lab5 directory before doing the following.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 5`
  - Section D (06:00pm): `cssubmit 1580 D 5`
2. When prompted for inputs, enter:
  - Enter `4` for the number of sandwiches to order
  - Enter `5` for the first sandwich (shouldn't work)
  - Enter `4` for the 1st sandwich
  - Enter `3` for the 2nd sandwich
  - Enter `2` for the 3rd sandwich
  - Enter `1` for the 4th sandwich
  - Expected Result: $9.70

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
