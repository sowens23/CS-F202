# HW03 - Part A (13%)

Part A of [this assignment](../README.md) provides you with an opportunity to demonstrate a satisfactory understanding of the contents from [Chapters 17 and 18 of Programming Principles and Practice using C++][textbook].


### What you should do

In this subdirectory:

* Copy your `Link.h`, `Link.cpp`, `LinkedList.h`, and `LinkedList.cpp` files from `part_a`

* Add the following function to the `LinkedList` class
  - #include <functional>
  - `void processEachLink(std::function<void(Link*)> aFunction)`

The body of the function should call `aFunction` on each `Link` object, starting at the beginning of the list.


* In `part_a.cpp`
  - Write a stand-alone function `void fancyPrint(Link * link)` that prints the `Link`
  - In `main`, create a list and print the list using `list.processEachLink(fancyPrint);`




### What the results should look like

<pre>$ make
g++ -std=c++17 -c part_a.cpp
g++ -std=c++17 -c Link.cpp
g++ -std=c++17 -c LinkedList.cpp
g++ -std=c++17 -o part_a part_a.o Link.o LinkedList.o
./part_a

LinkedList:

 @ 5eb0
┏━━━━━━━━━━━━━━━━┓
┃                ┃
┃ value: 37.00   ┃
┃  next: 5ed0    ┃
┃                ┃
┗━━━━━━━━━━━━━━━━┛

 @ 5ed0
┏━━━━━━━━━━━━━━━━┓
┃                ┃
┃ value: 100.50  ┃
┃  next: 5ef0    ┃
┃                ┃
┗━━━━━━━━━━━━━━━━┛

 @ 5ef0
┏━━━━━━━━━━━━━━━━┓
┃                ┃
┃ value: -17.50  ┃
┃  next: nullptr ┃
┃                ┃
┗━━━━━━━━━━━━━━━━┛

</pre>



[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch10.xhtml#ch10

