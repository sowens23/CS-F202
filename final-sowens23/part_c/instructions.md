# Final Exam - Part C (13%)


<pre>$ make main
g++ -std=c++17 -c main.cpp
g++ -std=c++17 -c Starship.cpp
g++ -std=c++17 -o main main.o Starship.o
</pre>

<pre>$ ./main ; echo $?
Usage:	./main "Starship name" "Starship ID" "starship mission"
1
</pre>

</pre>$ ./main "Starship Enterprise" "NCC 1701-D" "explore strange new worlds"
Starship Enterprise (NCC 1701-D) is ready to explore strange new worlds.
</pre>

<pre>$ ./main "Battlestar Galactica" "BS-75" "lead a rag-tag fugitive fleet"
Battlestar Galactica (BS-75) is ready to lead a rag-tag fugitive fleet.
</pre>


Copy your `Starship` code from `part_d` into the `part_c` subdirectory.

Change `main` so that it accepts arguments from the command line instead of having the values hard-coded.

If `main` is called with anything other than the name of the program plus three command line arguments, print a usage message that prints the name of the program as it was called, and return 1 instead of 0.
