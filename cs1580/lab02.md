---
layout: cs1580lab
title: Lab 2
---

<!-- Stuff to talk about
  - Talk to helpers about mrhmmm
  - Give Quiz
  - To Class about:
    - Visibility
    - SDRIVE, Editors (Notepad++, vim, emacs), compilers (clang)
    - FORMATTING!!!!!
    - SUBMITTING CORRECTLY!!!!!
    - BREATHE!!!! READ!!!!!
 -->

## Lab 2 <small>Debugging</small>
---

#### Description
Today you are receiving some C++ code that was horribly written by Professor Price; your task is to fix it by making it compile and work properly.

The goal is to get you more comfortable with compiler errors and warnings because you will likely see quite a few of them over the course of the semester.  The more practice you get, the easier assignments and future labs will be.

What is a compiler error?
Sometimes code does not follow the syntax rules of C++ (because humans make mistakes).  When a compiler (like `fg++`) tries to compile improper code, it can't, and outputs what is called a compiler error to the terminal.  This message provides some information into the nature of the problem.

**To remove a compiler error or warning, you must identify and correct the portion of the code that is not following the rules.**

---

#### Anatomy of a Compiler Error <small>GCC</small>
![Ah! Image not found!]({{site.baseurl}}/img/compiler-error.png "A sample compiler error")

  - `lab2.cpp` represents the file where the problem occurred.
  - `6:19` denotes the `<line number>:<column number>` where the problem is located.
  - `error: expected ',' or ';' before 'float'` is a user-friendly message about the nature of the problem.  In this case, it's saying that someone forgot to type a comma or semicolon.
  - `^` (caret) visually denotes where the problem is located below a print out of the actual code.

#### Anatomy of a Compiler Warning <small>GCC</small>
![Ah! Image not found!]({{site.baseurl}}/img/compiler-warning.png "A sample compiler warning")

As you can see, the structure of a compiler warning is almost identical to that of a compiler error.
A major difference between the two is that a compiler warning does not prevent the code from being compiled, whereas an error does.
**Regardless, for this class, there will be points taken off if your submission has any compiler warnings.**

---

#### Story Time
Professor Price is getting overwhelmed.  He used to teach math and some local high school students found out about this.  So now, on top of teaching C++ this semester, doing a ton of advising, and taking vitamins, these local students are taking their math homework to him for help.  He does his best to be accommodating but he is finding it a little hard to manage.  It's even worse because his cows are calling him on his cell phone wondering why [he does not take them for romantic walks anymore]({{site.baseurl}}/img/clayton1.jpg).  He decided to try and write a simple program for these students that would help them speed up their calculations.  Unfortunately, he had one minute of free time in which to do it, so he had to [type the code quickly]({{site.baseurl}}/img/drummer.gif).  As a result, his code is a disaster, but fortunately for everyone, he has you to fix it.

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab2`
4. Change your current directory to `lab2`
5. Create a new file named `lab2.cpp` using `jpico`
6. Copy and paste the code below into `jpico`
7. Save the file and exit `jpico`
8. Try to compile using `fg++`
  - As expected, there are a lot of compiler errors

{% highlight c %}
// Price's program
// First ask the user for a value of the radius of a circle,
// calculate the area of the circle, and then output the result.
// It should then ask the user for a value for the base and height of a triangle,
// calculate the area of the triangle, and then output the result.
// A greeting and farewell message would also be nice.
include <iostream>
USING LAMESPACE STD;

int main {
float someVar = 0 float p = 0
cout << "Area of Circle Calculation" <<
"Enter the value for the height: " cin >> someVar
cout << endl << "The area of the circle is: " << someVar << endl

float anotherVar = 0 float h = 0
cout << "Area of Triangle Calculation" <<
"Enter the value for the height: ";
cin >> h;
cout <<
"Enter for other value?: "; cin >> anotherVar
cout << endl << "The area of the triangle is: " << anotherVar*anotherVar << endl;
return 0}
{% endhighlight %}

---

#### <span class="badge">2</span> Fix `lab2.cpp`
**Strategy**  
These are the steps you are advised to follow, **in order**, for correcting the "horrible code":

1. **Make the code more readable** ([follow the rules](http://web.mst.edu/~cpp/cpp_coding_standard_v1_1.pdf))  
  - Fix indentation and remove unnecessary empty lines.  
  - Move variable declarations to the top of `main()`  
  - Identify and improve inappropriately named variables
  - Format the header comment appropriately
2. **Syntax correction** (make it compile. Note: a program may compile without performing its intended tasks)  
  - Add any missing semicolons; remove unnecessary ones  
  - Fix typos
3. **Logic correction** (make the program do what it was intended to do)  
  - First, read and understand what the code currently does and compare that with the specifications  
  - Rewrite the code as needed to make it adhere to the specifications

---

#### <span class="badge">3</span> Submission
**Make sure you are in the `~/SDRIVE/cs1580/lab2` directory before doing the following.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12pm): `cssubmit 1580 B 2`
  - Section D (6pm): `cssubmit 1580 D 2`
  - Note: the commands above are based on the following format:  
      `cssubmit <course #> <section letter> <lab #>`
2. When prompted for inputs, enter:
  - `9` for the radius of the circle
  - `1.2` for the height of the triangle
  - `1.5` for the base of the triangle

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
