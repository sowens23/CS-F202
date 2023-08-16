# HW02 - Part B (13%)

Part B of [this assignment](../README.md) provides you with an opportunity to demonstrate a high understanding of the contents from [Chapter 10 and 11 of Programming Principles and Practice using C++][textbook].


### What you should do

In this subdirectory:

Create a file called part_b.cpp that contains a main function `int main(int argc, char * * argv) { ... }`. Within `main`:

* Create a `string` variable called `program_name` that is initialized to the value of the program. Hint: get this from `argv[0]`
* If the number of arguments provided by the user is not equal to 2, print a usage message to `std::cerr` and return 1
* Otherwise, create a `vector<string>` variable called `arguments` that is initialized to the values of the command line arguments provided by the user
* Treat the first argument provided by the user as an input file name (consisting of floating point numbers separated by whitespace), and the second argument as an output file name (which will consist of floating point numbers rounded to exactly 2 decimal points)
* Using your `arguments` variable, `ifstream`, and `ofstream`, read the contents of the input file one token at a time using `>>`, writing each number to its own line in the output file using `<<`. The `ofstream` must be configured such that each floating point number will be printed using only 2 digits after the decimal point (see `std::fixed` and `std::setprecision`)


### What the results should look like

A successful run of the program should look like this:
<pre>$ ./part_b ; echo "Return value is $?"
Usage: ./part_b input.txt output.txt
Return value is 1
</pre>


<pre>$ rm -f output.txt; ./part_b input.txt output.txt && cat output.txt
3.14
100.00
-1.01
1.00
1.11
10.00
</pre>


Your prompts should exactly match those shown above, and the format of your response to the user should exactly match that shown above.

### Minimum criteria required for code to be graded

To earn any credit for Part B, the following criteria must be met:
* Your code must be correctly pushed to the **main** branch of your HW02 Github repository
* You must have a file called `part_b.cpp` located in the `part_b` subdirectory
* The file `part_b.cpp` must cleanly compile on `aurora` with no errors or warnings with the command: `g++ -std=c++17 -o part_b part_b.cpp`

If either of these criteria are not met, your code will not be graded and you will receive zero credit for Part B.



### What does it mean if I successfully complete this part of the assignment?

In conjunction with Part D and Part C, Part B of this assignment is designed to assess high understanding of the content from [Programming Principles and Practice using C++][textbook].

The term **high understanding** is used in the description of the [UAF grading system](https://catalog.uaf.edu/academics-regulations/grading-system-gpa-computation).




[textbook]: https://learning.oreilly.com/library/view/programming-principles-and/9780133796759/ch10.xhtml#ch10

