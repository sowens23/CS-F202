# HW03 - Part C (13%)

Part C of [this assignment](../README.md) provides you with an opportunity to demonstrate a satisfactory understanding of the contents from [Chapters 17 and 18 of Programming Principles and Practice using C++][textbook].


### What you should do

In this subdirectory:

Begin with your code from `part_d`

* Link class
  - Add a public constructor `Link(double value)` to `Link.h`
  - Add the implementation of this constructor in `Link.cpp`. The body of the constructor should print a message to `cerr` stating that the constructor is being called

* Link `operator<<`
  - In `Link.h`, declare a standalone function `std::ostream& operator<<(std::ostream& os, const Link& link);`
  - In `Link.cpp`, implement the standalone function `std::ostream& operator<<(std::ostream& os, const Link& link)`
  

* LinkedList class
  - Create a file called LinkedList.h that contains a `LinkedList` class as described below:
    * A public default constructor
	* A public destructor
    * A private member variable `Link * head`
	* A public method `void LinkedList::push_back(double value)`
  - Create a file called LinkedList.cpp that implements the methods of the `LinkedList` class.
    * The constructor should 
	  - set the member variable, setting `head` to `nullptr`
	  - print a message to `cerr` stating that the constructor is being called
	* The destructor should
    - print a message to `cerr` stating that the destructor is being called
	  - `delete head`
	  - print a message to `cerr` stating that the destructor has been called
  * The method `void LinkedList::push_back(double value)` should insert a new Link object at the end of the LinkedList, maintaining the other items in the list, and should print a message to `cerr` explaining what is happening that uses the `operator<<` from `Link.h`
	
* A main function in `part_c.cpp` that
  - Constructs a LinkedList object
  - Adds the numbers `37.0`, `100.25`, and `-17.5` to the list in that order

* A makefile with all appropriate targets


### What the results should look like

Your code should successfully compile with no errors and no warnings using
<pre>$ make
g++ -std=c++17 -c part_c.cpp
g++ -std=c++17 -c LinkedList.cpp
g++ -std=c++17 -o part_c part_c.o Link.o LinkedList.o
./part_c
LinkedList object constructed using LinkedList() default constructor
Link object constructed using Link(37) constructor
After adding 37: Link(37)
Link object constructed using Link(100.5) constructor
After adding 100.5: Link(37) -> Link(100.5)
Link object constructed using Link(-17.5) constructor
After adding -17.5: Link(37) -> Link(100.5) -> Link(-17.5)
LinkedList object is being destructed using ~LinkedList() destructor
Link(37) object is being destructed using ~Link() destructor
Link(100.5) object is being destructed using ~Link() destructor
Link(-17.5) object is being destructed using ~Link() destructor
Link(-17.5) object has been destructed using ~Link() destructor
Link(100.5) object has been destructed using ~Link() destructor
Link(37) object has been destructed using ~Link() destructor
LinkedList object has been destructed using ~LinkedList() destructor
</pre>



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch10.xhtml#ch10

