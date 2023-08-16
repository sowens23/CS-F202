# HW01 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapter 9 and 14 of Programming Principles and Practice using C++][textbook].

### What you should do

Copy your code from part C, and add a filled box class that inherits from Box.

Your part_b.cpp should prompt the user for which type of box they want to print.


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b
Please enter an integer width: 10
Please enter an integer height: 5
Please enter a character: *
Should the box be hollow (0) or filled (1): 1
**********
**********
**********
**********
**********
</pre>
<pre>$ ./part_b
Please enter an integer width: 7
Please enter an integer height: 8
Please enter a character: %
Should the box be hollow (0) or filled (1): 1
%%%%%%%
%     %
%     %
%     %
%     %
%     %
%     %
%%%%%%%
</pre>

In this example run, the user's input is shown in **bold**.
Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW01 Github repository
* You must have a file called `part_b.cpp` located in the `part_b` subdirectory (not in the root of your HW01 git repository)
* The file `part_b.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_b part_b.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.


### Grading rubric

If the above criteria are met, [the grading rubric for Part B](rubric.tsv) will be used to assign credit for Part B.


### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Chapter 9 of Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).

Successful completion of Part B indicates successful demonstration of the skills listed in [the grading rubric for Part B](rubric.tsv).


[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch03.xhtml#ch03

