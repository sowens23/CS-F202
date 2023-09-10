# CS-F202 Computer Science II
## Class Notes and Homework Repository :dizzy: :earth_americas:

```
#include <iostream>
int main() {
	std::cout << "Hello traveller, here's a towel for protection. Take care of yourself out there." << std::endl;
}
```

## Class Repositories and References
  - [sowens23-GitHub](https://github.com/sowens23)
  - [GitHubPortal](https://github.com/sowens23/Newbie-Gains/blob/main/README.md)
	- [Header Notes](https://github.com/2023-Spring-UAF-CS202/notes-sowens23/blob/main/HeaderNotes.md)
	- [CS-F202 Class Homepage](https://github.com/2023-Spring-UAF-CS202/overview) 
	- [CS-F202 Class Github](https://github.com/2023-Spring-UAF-CS202/sample_code)

## Notes, Assignments and Labs
	| Weekly Notes | Assignments | Labs |
	| --- | --- | --- |
	| [Week-1](#Week-1) | [Homework01](https://github.com/2023-Spring-UAF-CS202/hw01-sowens23) | [Lab00](https://github.com/2023-Spring-UAF-CS202/lab00-sowens23) |
	| [Week-2](#Week-2) | [Homework02](https://github.com/2023-Spring-UAF-CS202/hw02-sowens23) | [Lab01](https://github.com/2023-Spring-UAF-CS202/lab01-sowens23) |
	| [Week-3](#Week-3) | [Homework03](https://github.com/2023-Spring-UAF-CS202/hw03-sowens23) | [Lab02](https://github.com/2023-Spring-UAF-CS202/lab02-sowens23) |
	| [Week-4](#Week-4) | [Homework04](https://github.com/2023-Spring-UAF-CS202/hw04-sowens23) | [Lab03](https://github.com/2023-Spring-UAF-CS202/lab03-sowens23) |

	| Hello | Bop |
 	| --- | --- |
  	| wtf? | wtf? |
 
	| [Week-5](#Week-5) | | |
	| [Week-6](#Week-6) | | [Lab05](https://github.com/2023-Spring-UAF-CS202/lab05-sowens23) |
	| [Week-7](#Week-7) | | |
	| [Week-8](#Week-8) | | |
	| [Week-9](#Week-9) | | |
	| [Week-10](#Week-10) | | |
	| [Week-11](#Week-11) | | |
	| [Week-12](#Week-12) | | |
	| [Week-13](#Week-13) | | |
	| [Week-14](#Week-14) | | |
	| [Week-15](#Week-15) | | |

# Big Notes
	- Empty and sad.

# Week-15
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week15) : No Overview : [Top](#TOP)
### 4/27/2023

### 4/25/2023
	- Talked about HW04

# Week-14
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week14) : No Overview : [Top](#TOP)
### 4/20/2023
	- Passing functions to as a parameter
		- void firstFunction(std::function<void(int)> secondFunction) {...}
	- When you call a function with a parameter
		- A copy constructor must exist for you to pass a class object.
		- A copy constructor does not exist for a virtual class
		- You can pass as a reference to bypass this
		- Using the '&' reference operater to pass an object is common practice
		- Not using & uses the COPY Constructor to pass an identical copy of the object
		```
		class Animal {
			public:
			virtual void speak() = 0;
		}
		class Cat : public Animal {
			public:
			//Automatically created if we don't make it
			  //Cat() {}
			  //~Cat() {}
			  //Cat(const Cat& other) {}
			void speak() override { // Override not necessary
				cout <<"meow">>;
			}
		}
		//This line below is the focus of this example.
		//You cannot call Animal animal as a parameter here because a virtual class DOES NOT have a copy constructor for this function parameter to COPY. So you MUST pass this as a reference instead.
		// The '&' is necessary to pass as reference here.
		void speakTo(Animal& animal) {
			animal.speak();
		}
		int main () {
			Cat garfield;
			speakTo(garfield);
		}
		```
### 4/18/2023
[Zoom](https://alaska.zoom.us/rec/share/2smzmpV8NVMlvPLyGCL7HgWK4NvHzdnejB2UEl1WFHeiDpg_3r84eeMh8jKpfuGV.uhwrqM-Jr6JHxL1W)
	- Assigned and reviewed HW03 concepts
	- virtual void speak() = 0;
		- = 0, means that when a child class inherits this, it must be overridden, or the class will remain virtual.

# Week-13
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week13) : No Overview : [Top](#TOP)
	- Vector is actually a brilliant way of safetly managing 'chunks' of memory.
		- When you create a 'new' int pointer `int* p = new int`, it allocates enough bits for you to store a single int variable, but if you call p[-1], you can alter a peice of memory from that pointer that is not supposed to be changed.
		- When managing a vector<int> you basically will only ever be able to access those same 'chunks' of memory, but with limitations making it more safe. You can't access a [-2] location of a vector and alter the memory value of 2 locations before it in the heap. 

	- You can initialize a pointer to nowhere 'double* pd0 = nullptr;'
		- Nullpointer check [2] 'if (pd0 != nullptr)' and 'if (pd0)'

	- '->' '.' Arrow and . Notaion are often called 'member access operators'

### 4/13/2023
	- When an object...
		- is created: At minimum it's default constructor WILL run.
		- becomes out of scope: At minimum, it's deconstructor WILL run.
		- If an object has allocated memory, it should be deleted at end of scope.
	- scope is defined by the parameters of the local curly brace
	- If you are calling *new*, doing so
		- allocates a chunk of memory on the *free store* (aka the heap)
		- and then calls the appropriate constructor
	- If you all delete, doing so
		- recycles the appropriate memory chunk back to the heap
	- Ever invocation of *new* should have exacly one invocation of *delete*
		- every *new* has a *delete*
		- every *new[]* has a *delete[]*
	- Generally we want to use these power, inside of a constructor 99% of the time.
	- To reiterate: Every class that 'owns' a resource needs a deconstructor

### 4/11/2023
	- Read Chapters 11, 17-19 
	- See "nm -C Task.o"
	- See week 13 examples to see how to use new/delete

	- Here is an example of a CLASS constructor, and default DECONSTRUCTOR 
	- Task(std::string message);
  	- ~Task();

	- manual memory management
		- 'new' is a constructor that will reserve a pointer address to a chunk of memory
		- 'delete' can be used to unallocate and wipe those chunks of memory
			- For every "new" pointer you reserve, you must have a "delete" pointer as well
			- "delete" should be used inside of a deconstructor
			- If you do not delete your memory after using it, this is a "memory leak"
 
# Week-12
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week12) : [Overview](https://github.com/2023-Spring-UAF-CS202/overview/tree/main/week12) : [Top](#TOP)
### 4/6/2023
[Zoom](https://alaska.zoom.us/rec/share/66chQTYvsgsrRwODFIRGtXndvkzd0Fd8ID1WXUoZq0iQCt6iOuyH9qb5dVXwMdLx.0vF_sWXcJY_L11mL)
	- Absent, I was sick

### 4/4/2023
	- No notes, turned in test and left.

# Week-11
No Sample Code - No Overview - [Top](#TOP)
### 3/30/2023
	- Midterm Exam

### 3/28/2023
[Zoom](https://alaska.zoom.us/rec/share/PhWQWfzEwZPGry0GVU0U56y1NTtX0RpKU12v5cymd7jNWgV6bZV6ECo0fVITGOjo.oLK6yuP6cuSqkog9)
	- ./part_a ; echo "Return code was $?"
	- Week 6 Sample code will help finish HW02

# Week-10
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week10) : [Overview NA]() : [Top](#TOP)
	- Pointers
		- & notation 
		- * notation
	- References
	- The this pointer in a class

### 3/23/2023
	- No class

### 3/21/2023
	- No notes

# Week-9
No Sample Code - No Overview - [Top](#TOP)
### 3/16
	- Spring break

### 3/14
	- Spring break

# Week-8
[Sample Code](https://github.com/2023-Spring-UAF-CS202/overview/tree/main/week08) : [Overview](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week08) : [Top](#TOP)

	- Formatting of streams using <iomanip>
	- The oddity of x++ vs ++x
		- understand and be able to explain the why

		int x{0};
		cout << x++ << endl;
		cout << ++x << endl;

### 3/9/2023
[Zoom](https://alaska.zoom.us/rec/share/PO1__LYmN_mNkPB7bENrWffQRfnEemb5ux94PbqWSU5g6X0Gc87JOtqzK51_1zdI.xZzgHQbhYL3BPCVQ)
	- We went over HitPoints.cpp 
	- We talked about what 'this*' is and why you should use it.
	- When you use '->' you are referencing an ADDRESS, so this->

### 3/7/2023
[Zoom](https://alaska.zoom.us/rec/share/pvwmaGVjEWzH2SppnQ77RN0iyI1uGUb3ToAfFPU9GWHu___BQNsyp-448c4e5Bau.vAagBjo66N_69L8I)
	- Unusable notes //+ - * / % 
	- To make a class operator
	- 3 Ways to use a private variable
		- Declare them as public (Wrong answer)
		- Class function to return private values
		- Allow friends access to private data

# Week-7
[Sample Code](https://github.com/2023-Spring-UAF-CS202/overview/tree/main/week07) : [Overview](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week07) : [Top](#TOP)

	- Reading command line parameters
		- `int argc`
		- `char **argv`
		- Converting an array of C-strings to `vector<string>`
	- Basic file I/O
		- Read from file using `ifstream`
		- Write to file using `ofstream`

### 3/2/2023
	- No class

### 2/28/2023
[Zoom](https://alaska.zoom.us/rec/share/60MkD7LM-eSXeLPcLyybWK4C4WEZdR1kDf6L7QxLdPUuo_WnKnBBAUcYrp2JL_hU.vQTlrHLZ45kI8bvs)
	- Lost notes

# Week-6
[Sample Code](https://github.com/2023-Spring-UAF-CS202/overview/tree/main/week06) : [Overview](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week06) : [Top](#TOP)

	- Classes
		- Member variable initialization
		- const methods
		- Inheritance
			* virtual and override
			* hierarchy of types with an is-a relationship
				- Shape
				- Rectangle is-a Shape
				- Square is-a Rectangle

### 2/23/2023
[Zoom](https://alaska.zoom.us/rec/share/1FgYKu52i6yr6HSzZa8mfL2k4VEo1k1RmmmZtWR07G0NhX2EsRMfoPnguLbuCpTM.xM2u-1kncPH_9ZYD)
	- Lost notes

### 2/21/2023
[Zoom](https://alaska.zoom.us/rec/share/x0QyYtPwMB9ULxAgiTzpuHQT9pKf0uG_V-QPMWKKVnV6lQAZn0Wml5CHrxZ7fxLw.ksjXMSKXjYgciC5T)
	- Reading Command Line Parameters
		-int main (int num_args, ) {
			- This is how you take in multiple parameters to a program.
			- Below is an example of how you can use the Pointer ```*```, this will allow you to the address location of the variable 
			
		const char * mystery_variable = "Hello"
		const char * something_else = mystery_variable +4;
		const char mystery_char = *something_else;
		cout << mystery_char << endl;
		
		- One thing to note is that mystery_variable[4] will return an 'o'. mystery_variable will return the 'beginning' of the address, where the following
			characters in Hello, will be [0] [1] [2] [3] [4]
		- in **argv
		- Converting an array of C-strings to 'vector<string>
		- Basic file I/O	
			1. Read from file using 'ifstream'
			2. Write to file using 'ofstream'

# Week-5
[Sample Code](https://github.com/2023-Spring-UAF-CS202/overview/tree/main/week05) : [Overview](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week05/shapes) : [Top](#TOP)

	- Classes
		- Member variable initialization
		- const methods
		- Inheritance
			* virtual and override
			* hierarchy of types with an is-a relationship
				- Shape
				- Rectangle is-a Shape
				- Square is-a Rectangle
	- Custom ostream <<
	- Enum classes
		- what benefit do they have
		- also, they are usable in switch-case statements
	- Custom ostream <<
	- Error handling
		- throw
		- try 
		- catch


### 2/16/2023
[Zoom](https://alaska.zoom.us/rec/share/SNHP1DaTL7Y9g3-_xcn9Fe2jZ2yRmjt3Dy1BrKxCbgToWigPoKLYMHieYx9mVNan.RkklJEoJFu6bkp0i)
	- Abstract base class
		1. We know it's abstract by "virtual" keyword, this means a child class may override this method.
		2. The "=0" in conjustion with "virtual" keyword, means that a child class must override it, or it will inheret the virtual class

### 2/14/2023
[Zoom](https://alaska.zoom.us/rec/share/vOw-S0Y8tpQ-aaWBCGBDl9RCRaZAgxW-TYtY1Dy7AAF4585m0ofjYjRNqkMgZAuG.wpdWwVq7CgzyHgsW)
	- Going over Classes again
	- We talked about the 4 parts of HW00
	- We talked about how to make a Makefile
	- Classes
	- Need 4 things to exist; Name,
	- 'virtual' int area() const = 0 means it doesn't exist unless coupled to another class/function
	- This is called an Abstract based class, this is incorporeal
	- int area() const override means that you will be implimenting a virtual variable

# Week-4
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week04) : [Overview](https://github.com/2023-Spring-UAF-CS202/overview/tree/main/week04) : [Top](#TOP)
- Review of object-oriented programming from CS 201
- Students created their own custom data structure based on a problem that they came up with
- Sample code for a [Hot Air Balloon](https://github.com/2023-Spring-UAF-CS202/sample_code/blob/main/week3/HotAirBalloon.cpp) data structure was provided
- Code for a class was broken into two files
	- a .h file that declares the class, but does not implement the body of the member functions
	- a .cpp file that implements the bodies of the member functions of the class
- That code was then used in a separate main function in another file
	- using #include "a_local_file.h"
- Misc
	- #pragma once
	- #include 
	- using
	- why *not* to use using in a header (polluting the namespace)
	- use of *class* keyword to declare a custom data type
- Constructors
	- default constructor
	- non-default constructor

Example: given either of these two, you should be able to provide the other
```
Spaceship(string name);
```
```
Spaceship enterprise{"NCC1701"};
```

- Member functions and member variables
	- what is a member function
	- what is a member variable
- each object has its own copy of each member variable
	- use dot syntax to access member functions
	- public vs private

### 2/9/2023
[Zoom](https://alaska.zoom.us/rec/share/u0HmRceVVdCKTfm_vNvwuF0PITv74NCGCYoo3rX-BW5kQPtAu6V7xDn4cAD1iOq1.ZuG9AUJqIxuWD6Uj)
	- Classes
		- #include <stdexcept>
			- using std::runtime_error;
			- if (test-fails) throw runtime_error("invalid: "+variable-with-issue)
			- try _{ test your code; } catch (const runtime_error e) { std::cerr << e.what();
		- We went over 1> 2> &> and > vs >> 
		- UNIX Philosophy - Every program should know how to take three things from user, or from program
			- Standard Output
			- Standard Input
			- Standard Error 
		- \textcolor{red}{red}
		- Makefile notes
			MAKEFILE
			CXX=g++
			CXX=g++ -g -std=c++17 -Wall -Wextra -pedantic

### 2/7/2023
[Zoom](https://alaska.zoom.us/rec/share/ZIBKEKCr6x46xWsiuv6WJSIIrJi-ym8gF0RUNXpTB0Mmvb5yoEfX4z6zgdjsd-lO.otj8VJPCy9J5OCr8)
	- Reasons to use Enum class
		1.  You can create a specific, limited amount of class variables defined in the enum
			- No more variables can be created afterwards
		2. A good way to reduce global variables
		3. Much easier to reference using switch-case function

# Week-3
[Sample Code](https://github.com/2023-Spring-UAF-CS202/sample_code/tree/main/week03) : [Overview](https://github.com/2023-Spring-UAF-CS202/overview/tree/main/week03) : [Top](#TOP)
### 2/2/2023
	- Class cancelled: Waiting for material.

### 1/31/2023
	- Absent: Waiting for class recording.


# Week-2
[Sample Code NA]() : [Overview NA]() : [Top](#TOP)
### 1/26/2023
	- Classes and Object Oriented Programming 
		- A **_function_** is a group of related code
		- A **_struct_** is a group of related data
		- A **_class_** is related data and code
		   - Data and responsibilities to do things with that data
		   - Examples
			  - Print it to an output stream
			  - get or set a value
		- Classes you are already familiar with
		   - string
		   - fstream, ifstream, ofstream, sstream
		   - vector<...>
		- Classes are like types. An _object_ of a class is a variable of that type.
		- The parts of a class are called _members_. 
			- There are _data members_ (variables in the class)
			- There are also Member functions_ (functions in the class - sometimes called _methods)
	- Class declaration review
		class Brick {
		public:
		   int getHealth();
		   Color getColor();
		   void setHealth(int health);
		   void setColor(Color color);
		   void draw();
		private:
		   int _health;
		   Color _color;
		};

### 1/24/2023
	- Types of loops
	 - For
	 - For-each
	 - While
	 - for (___; ___; ___:)
	 - Do-while

# Week-1
No Sample Code - No Overview - [Top](#TOP)
### 1/19/2023
	- Lab 01
	- Review chapter 4

### 1/17/2023
	- Course policy, schedule, expectations.

