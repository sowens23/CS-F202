# HW03 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapters 17 and 18 of Programming Principles and Practice using C++][textbook].


### What you should do

In this subdirectory:

* Link class
  - Create a file called `Link.h` that contains a `Link` class as described below:
      * A default constructor
      * A public constructor that takes a `double`
      * A public destructor
      * A public member variable `double value`
      * A public member variable `Link * next`
  - Create a file called `Link.cpp` that implements the methods of the `Link` class.
      * The constructor should
        - set the member variables, setting `next` to `nullptr` and value to 'user provided variable(?)'
        - print a message to `cerr` stating that the constructor is being called
      * The destructor should 
        - print a message to `cerr` stating that the destructor is being called
        - `delete next`
        - print a message to `cerr` stating that the destructor has been called
  - A main function in `part_d.cpp` that
      * Constructs a Link object

* A makefile that contains the following targets:
  - run (runs ./part_d)
  - part_d (links part_d)
  - part_d.o (compiles)
  - Link.o (compiles)
  - clean (deletes *.o)
  - cleanest (also deletes part_d)

* Don't forget to add in a .ignore file.

### What the results should look like

Your code should successfully compile, link, and run with no errors and no warnings using
<pre>$ make
g++ -std=c++17 -c part_d.cpp
g++ -std=c++17 -c Link.cpp
g++ -std=c++17 -o part_d part_d.o Link.o
./part_d
Link object constructed using Link() default constructor
Link(0) object is being destructed using ~Link() destructor
Link(0) object has been destructed using ~Link() destructor
</pre>



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch10.xhtml#ch10

