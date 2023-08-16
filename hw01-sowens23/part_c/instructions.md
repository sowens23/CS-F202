# HW01 - Part C (13%)

Part C of [this assignment](../README.md) provides you with an opportunity to demonstrate a satisfactory understanding of the contents from [Chapters 9 and 14 of Programming Principles and Practice using C++][textbook].

### What you should do

Your task is to write a C++ program in a file called `part_c.cpp` in the `part_c` subdirectory of your HW01 repository. When your code is compiled and run, the resulting program should:
* Prompt the user to enter two numbers
* Use `cin` to read two numbers from the user, storing each as a `double`. Call your variables `first_operand` and `second_operand`
* Print a message that presents the user with the result of dividing the first number by the second number
* Use the `{}`-list notation, attempt to convert each of the two numbers from `double` to `int`.  Call your variables `first_int` and `second_int`.
   - Note the error message. 
   - If your error message was `error: expected ';' at end of declaration`, then you need to add the flag `-std=c++17` when you call `g++`. 
   - Once you do that, you should get the error message `type 'double' cannot be narrowed to 'int' in initializer list`
   - Fix the error by explicitly casting your existing `double` variables using `static_cast<int>( )`
* Using these two newly converted integer values, print a message that presents the user with the result of dividing the first integer by the second integer
* Using these same two integer values, print a message that presents the user with the result of the first integer modulo the second integer


### What you should do

In the part_d subdirectory:

* Implement an abstract class called `Box` in `Box.h`
  - The constructor should take:
    * int w representing the width of the box
    * int h representing the height of the box
  - Implement the following methods:
    * int getWidth() const that returns the width of the box
    * int getHeight() const that returns the height of the box
    * virtual std::string asString() const = 0; 
  - Store the following as protected member variables:
    * int width
    * int height
* Implement a class called `HollowBox` in `HollowBox.h` that
  - inherits from `Box`
  - has a constructor that takes a width, height, and character, and calls the Box constructor to initialize the width and height
  - has a protected member variable called `char fill`
  - implements `std::string asString() const override`
* Implement `int main()` in part_c.cpp that prompts the user for a width, height, and character, then prints the box to cout
* Implement a Makefile for this part


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_d
Please enter an integer width: <b>10</b>
Please enter an integer height: <b>5</b>
Please enter a character: <b>*</b>
**********
*        *
*        *
*        *
**********
</pre>




### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_c
Enter two numbers (may be real numbers or integers), separated by a space: <b>17.5</b> <b>2</b>
Using floating point division, 17.5 / 2 = 8.75
Using integer division, 17 / 2 = 8
Using integer division, 17 % 2 = 1
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part C, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW01 Github repository
* You must have a file called `part_c.cpp` located in the `part_c` subdirectory (not in the root of your HW01 git repository)
* The file `part_c.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_c part_c.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part C.




### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D, Part C of this assignment is designed to assess satisfactory understanding of the content from [Chapter 9 of Programming Principles and Practice using C++][textbook].

The term **satisfactory understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part C indicates successful demonstration of the skills listed in [the grading rubric for Part C](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

