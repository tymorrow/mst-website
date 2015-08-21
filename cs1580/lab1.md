---
layout: cs1580lab
title: Lab 1
---

## Lab 1
---

#### Covers
  1. Connecting to campus Unix computers via PuTTY
  2. Navigating directories and working with files
  3. Create a *"Hello World!"* program in C++
  4. Submission

---

#### 1. PuTTY
1. Open PuTTY and double-click any of the saved sessions entitled *CS213 Linux ##* where the ## is any number from 1 to 16
[<i class="fa fa-external-link"></i>](http://it.mst.edu/services/linux/hostnames/).
  - If there are no saved sessions, enter *"rc##xcs213.managed.mst.edu"* (change the ## to a number 1-16) into the host name field, then click *Open*.
  - If you receive some kind of warning message, just select "Yes" to bypass it.
2. A terminal will appear likely asking you for your credentials. Use your S&amp;T SSO username and password (same that you use to log into Joe'SS and Blackboard).

---

#### 2. Directories and Files
1. Navigate into the *SDRIVE* directory using the `cd` command.
2. Make two directories using the `mkdir` command:
    1. cs1570
    2. cs1580
3. Navigate into the *cs1580* directory.
4. Make a directory named *lab1*.
5. Navigate into the *lab1* directory.
6. Create a file using the *jpico* text editor using the following: `jpico lab1.cpp`
7. Enter the following text into the editor:

Hello World Program

{% highlight cpp linenos %}
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello, world!" << endl;
  cout << "My Name is " << endl;

  return 0;
}
{% endhighlight %}
