---
layout: cs1580lab
title: Lab 6
---

## Lab 6 <small>Functions</small>

---

<a href="{{site.baseurl}}/cs1580/solutions/lab06solution.cpp"
class="btn btn-info pull-right">
  <i class="fa fa-exclamation-circle"></i>
  Lab 6 Solution
</a>

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab6`
4. Change your current directory to `lab6`
5. Create a new file named `lab6.cpp` using `jpico`

---

#### <span class="badge">2</span> Program Specifications
Today you are going to write a program, **using functions**, that computes some mathematical quantities.

Your program will execute as follows:

1. Output a welcome message
2. Ask the user for a floating point value called `theta`
  - Values should be between `THETA_MIN` AND `THETA_MAX`, inclusive (values are given in code sample below)
  - **Re-prompt the user if the value is not valid** (use a do-while)
3. Calculate factorial with `theta`
4. Calculate `theta`<sup>2</sup>
5. BONUS: Compute and output `sin(theta)` only up to the term with exponent 7 (make 7 a const)
6. Output a farewell message

FYI: The equation for computing the bonus sine function is as follows:

$$
sin(x) = \frac{x}{1!} - \frac{x^3}{3!} + \frac{x^5}{5!} + \frac{x^7}{7!} + \dots
$$

**!!! THE ONLY SYSTEM LIBRARY YOU MAY USE IS IOSTREAM!**
**!!! IMPLEMENT FUNCTION STUBS AND MAIN() FIRST BEFORE WRITING FUNCTION DEFINITIONS!**

**Mandatory Functions**

Your program must have no more and no less than the following functions:

1. `void PrintGreeting()`
2. `float GetThetaFromUser()`
  - Also verifies that the value is between -90 and 90
3. `float CalculatePower(float base, float exponent)`
3. `int CalculateFactorial(int value)`
4. BONUS: `float CalculateSine(float theta)`
5. `void PrintFarewell()`

Your `lab6.cpp` should start out looking like this:

{% highlight c %}
// Appropriate header comment
#include<iostream>
using namespace std;

// Function prototypes

const float THETA_MIN = -90;
const float THETA_MAX = 90;

int main()
{
  float theta = 0;

  PrintGreeting();

  theta = GetThetaFromUser();
  cout << "Factorial: " << CalculateFactorial(theta) << endl;
  cout << "    Power: " << CalculatePower(static_cast<int>(theta), 2) << endl;

  // BONUS: CalculateSine(theta);

  PrintFarewell();
  return 0;
}

// Function definitions
{% endhighlight %}

---

#### <span class="badge">3</span> Submission
**Make sure you are in the `~/SDRIVE/cs1580/lab6` directory and you have ONLY ONE .cpp FILE in your lab6 directory before doing the following.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 6`
  - Section D (06:00pm): `cssubmit 1580 D 6`
2. When prompted for inputs, enter:
  - `100` (should not be accepted)
  - `6`
  - 6! = 720
  - 6<sup>2</sup> = 38
  - Sine(6*pi/180) should be roughly 0.104528

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done

<script type="text/javascript">
  MathJax.Hub.Config({
    jax: ["input/TeX","output/HTML-CSS"],
    displayAlign: "left"
  });
</script>
