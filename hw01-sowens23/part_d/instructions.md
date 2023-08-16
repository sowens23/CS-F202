# HW01 - Part D (61%)

Part D of [this assignment](../README.md) provides you with an opportunity to demonstrate basic understanding of the contents from [Chapter 9 and Sections 14.3 and 14.4 of Programming Principles and Practice using C++][textbook].

### What you should do

In the part_d subdirectory:

* Implement a class called `FilledBox` in `FilledBox.h` and `FilledBox.cpp`
  - The constructor should take:
    * int w representing the width of the box
    * int h representing the height of the box
    * char c representing the character that will be used to fill the box
  - Implement the following methods:
    * int getWidth() const that returns the width of the box
    * int getHeight() const that returns the height of the box
    * std::string asString() const that returns a string representation of the filled box
  - Store the following as private member variables:
    * int width
    * int height
    * char fill
* Implement `int main()` in part_d.cpp that prompts the user for a width, height, and fill character, then prints the box to cout
* Implement a Makefile for this part


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_d
Please enter an integer width: <b>10</b>
Please enter an integer height: <b>5</b>
Please enter a character: <b>*</b>
**********
**********
**********
**********
**********
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part D, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW01 Github repository
* You must have a file called `part_d.cpp` located in the `part_d` subdirectory (not in the root of your HW01 git repository)
* The file `part_d.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_d part_d.cpp`


If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part D.



### What does it mean if I successfully complete this part of the assignment?

Part D of this assignment is designed to assess minimal understanding of the content from [Chapter 3 of Programming Principles and Practice using C++][textbook].

The term **minimal understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part D indicates successful demonstration of the skills listed in [the grading rubric for Part D](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch09.xhtml#ch09

