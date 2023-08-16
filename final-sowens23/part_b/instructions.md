# Final Exam - Part B (13%)

Copy your `Starship` code from `part_c` into the `part_b` subdirectory.

Change `main` so that it accepts a single argument from the command line.

If `main` is called with anything other than the name of the program plus one command line arguments, print a usage message that prints the name of the program as it was called, and return 1 instead of 0.

Add a copy constructor to the `Starship` class.

Create a `vector<Starship>`.

Treat the command line argument as a file name. Create an `ifstream` to read from the file. If the file can't be read, print an error message to `cerr` and return 2 instead of 0.

Each line in the text file represents a Starship. Use a `while` loop to read the values three at a time from the file. For each line, create a Starship object and add it to the vector.

Use a for-each loop to print each Starship to cout.

<pre>$ make main
g++ -std=c++17 -c main.cpp
g++ -std=c++17 -c Starship.cpp
g++ -std=c++17 -o main main.o Starship.o
</pre>

<pre>$ ./main ; echo $?
Usage:	./main starships.txt
1
</pre>

<pre> ./main /does/not/exist ; echo $?
Error opening file /does/not/exist
2
</pre>

</pre>$ ./main starships.txt
Starship_Enterprise (NCC_1701-D) is ready to explore_strange_new_worlds.
Battlestar_Galactica (BS-75) is ready to lead_a_rag-tag_fugitive_fleet.
</pre>