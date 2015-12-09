---
layout: cs1580lab
title: Lab 15
---

## Lab 15 <small>Intro to Standard Template Library (STL)</small>

---

#### <span class="badge">1</span> Set up your workspace

1. Connect to a linux machine with PuTTY
2. Change your current directory to `~/SDRIVE/cs1580/`
3. Make a new directory named `lab15`
4. Change your current directory to `lab15`
5. Create one file:
  - `lab15.cpp`

---

#### <span class="badge">2</span> Choose a Data Structure

1. vector
2. map

#### <span class="badge">3</span> Demonstrate Using the Data Structure

----

You will need to use internet resources to accomplish the lab.  
One for each data structure has also been provided.

----

#### Vector
<a target="_blank"
   href="http://www.cplusplus.com/reference/vector/vector/">Reference</a>

1. Create a vector of integers 1-10 in reverse order (10,9,8,etc.) by pushing items onto the back or by passing an array of integers into the constructor of the vector.
2. Print out the contents of the vector (you would benefit more from making a function that utilizes actual iterators rather just counting with an integer variable).
3. Sort the vector (you'll need to use `#include<algorithm>`).
4. Print out the contents of the vector.
5. Delete the last 3 elements of the vector by popping elements off the back.
6. Print out the contents of the vector.
7. Print out the size of the vector, the allocated memory for the vector, and the maximum possible size for the vector.
8. Clear the vector.
9. Print out the contents of the vector.

----

#### Map
<a target="_blank"
   href="http://www.cplusplus.com/reference/map/map/">Reference</a>

Use a map to count the number of occurrences of each word entered to the console until the word "QUIT" (all caps) is received.  Just using `cin` is sufficient.
The key for the map is the word entered and the value for the map is the number of occurrences.

Use the following text as input:

    aa bb cc dd ee ki aj aa bb al os cs cs cs 23


---

#### <span class="badge">4</span> Submission

**Make sure you are in the `~/SDRIVE/cs1580/lab14` directory.**

1. Once the program compiles and works properly, submit using the **appropriate** command based on your section:
  - Section B (12:00pm): `cssubmit 1580 B 15`
  - Section D (06:00pm): `cssubmit 1580 D 15`
2. Your program should not have any input values for the vector but it will for map.  Your output should look like the following based on the data structure you chose:

##### Vector

<img src="{{site.baseurl}}/cs1580/images/lab15-vector-output.png"
     class="img-responsive" />

##### Map

<img src="{{site.baseurl}}/cs1580/images/lab15-map-output.png"
     class="img-responsive" />

---

#### <span class="badge"><i class="fa fa-check"></i></span> Done
