---
layout: cs1580lab
title: Lab 1
---

## Lab 1 <small>First Program</small>
---

#### <span class="badge">1</span> PuTTY
1. Open PuTTY and double-click any of the saved sessions entitled *CS213 Linux ##* where the ## is any number from 1 to 16
[<i class="fa fa-external-link"></i>](http://it.mst.edu/services/linux/hostnames/).
  - If there are no saved sessions, enter *"rc##xcs213.managed.mst.edu"* (change the ## to a number 1-16) into the host name field, then click *Open*.
  - If you receive some kind of warning message, just select "Yes" to bypass it.
2. A terminal will appear likely asking you for your credentials. Use your S&amp;T SSO username and password (same that you use to log into Joe'SS and Blackboard).

---

#### <span class="badge">2</span> Managing Directories
1. Navigate into the *SDRIVE* directory (also known as a folder) using the `cd` command.
  - This is the same as navigating files and folders via Explorer in Windows, but instead of double-clicking to go into a directory, you're typing a command.
  - When you first connect with PuTTY, you're in the "~" (tilda) directory, also known as the *Home* directory.
  - Your *Home* directory likely has some sub-directories, one of which is *SDRIVE*.  To change from the *Home* directory to the *SDRIVE* directory, use the command `cd SDRIVE`.
  - Take a look to the left to see some of the other commands you can use, such as `pwd` and `ls`.
2. Make two directories using the `mkdir` command:
    1. cs1570
    2. cs1580
3. Navigate into the *cs1580* directory.
4. Make a directory named *lab1*.
5. Navigate into the *lab1* directory.
    - You can verify your current directory with the following command: `pwd`
    - You can verify your current directory's contents with the following command: `ls`

---

#### <span class="badge">3</span> "Hello, World!"

{% highlight c linenos %}
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, world!" << endl;
    // TODO: Change ... to your name and do not include this line.
    cout << "My name is ..." << endl;

    return 0;
}
{% endhighlight %}

1. Create a file using the *jpico* text editor using the following command: `jpico lab1.cpp`
2. Enter the *Hello World* code above into the editor.
3. Save the file and exit *jpico* (see commands to left).
4. Compile your code with the following command: `fg++ lab1.cpp -o lab1`
  - Explanation:
  - `fg++` is the command to run the *GCC* compiler (you will learn more about this in CS 1570)
  - `lab1.cpp` is the file you just created that will be *compiled* into a program.
  - `-o lab1` tells the compiler to name the program "lab1".
5. Run your program by entering the name of the program output by the compiler: `lab1`

---

#### <span class="badge">4</span> Submission
1. Submit your program using the **appropriate** command based on your section:
  - Section B (12pm): `cssubmit 1580 B 1`
  - Section D (6pm): `cssubmit 1580 D 1`
2. Note: the commands above are based on the following format:  
    `cssubmit <course #> <section letter> <lab #>`

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
