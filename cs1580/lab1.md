---
layout: cs1580lab
title: Lab 1
---

## Lab 1
---

#### 1. PuTTY
1. Open PuTTY and double-click any of the saved sessions entitled *CS213 Linux ##* where the ## is any number from 1 to 16
[<i class="fa fa-external-link"></i>](http://it.mst.edu/services/linux/hostnames/).
  - If there are no saved sessions, enter *"rc##xcs213.managed.mst.edu"* (change the ## to a number 1-16) into the host name field, then click *Open*.
  - If you receive some kind of warning message, just select "Yes" to bypass it.
2. A terminal will appear likely asking you for your credentials. Use your S&amp;T SSO username and password (same that you use to log into Joe'SS and Blackboard).

---

#### 2. Managing Directories
1. Navigate into the *SDRIVE* directory using the `cd` command.
2. Make two directories using the `mkdir` command:
    1. cs1570
    2. cs1580
3. Navigate into the *cs1580* directory.
4. Make a directory named *lab1*.
5. Navigate into the *lab1* directory.

---

#### 3. "Hello, World!"
1. Create a file using the *jpico* text editor using the following: `jpico lab1.cpp`
2. Enter the following text into the editor:

{% highlight c linenos %}
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello, world!" << endl;
  cout << "My name is ..." << endl;

  return 0;
}
{% endhighlight %}

3. Save the file and exit *jpico*.
4. Compile your code with the following command: `clang++ lab1.cpp -o lab1`
  - The `-o lab1` part of the command sets the name of the output.
5. Run your program by entering the following command: `./lab1`

---

#### 4. Submission
1. Submit your program using the **appropriate** command based on your section:
  - Section B (12pm): `cssubmit 1580 b 1`
  - Section D (6pm): `cssubmit 1580 d 1`

Note: the commands above are based on the following format: `cssubmit <course#> <section> <lab#>`
