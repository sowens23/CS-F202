# Final Exam - Part D (61%)

Complete the code in the `part_d` subdirectory so that it can be run as shown below:

<pre>$ make run
g++ -std=c++17 -c main.cpp
g++ -std=c++17 -c Starship.cpp
g++ -std=c++17 -o main main.o Starship.o
./main
Starship Enterprise (NCC 1701-D) is ready to explore strange new worlds.
Battlestar Galactica (BS-75) is ready to lead a rag-tag fugitive fleet.
</pre>

You must have the following:
* in `main.cpp`
  - any needed `#include` and `using` statments
  - a `main` function (provided for you - do not change)
* in `Starship.h` 
  - a `Starship` class with
    * a public constructor that takes three strings as arguments
    * private member variables for each argument (provided for you - do not change)
    * a public const get method for each argument
  - a function in `Starship.h` that overrides `operator<<`; this function should have `const Starship& s` as its second argument
* in `Starship.cpp`
  - appropriate implementations of all functions from `Starship.h`
* in `Makefile`
  - targets for
    * run
	* main
	* main.o
	* Starship.o
	* clean
	* cleanest

