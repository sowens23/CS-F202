# Final Exam - Part A (13%)


<pre>$ make main
g++ -std=c++17 -c main.cpp
g++ -std=c++17 -c Starship.cpp
g++ -std=c++17 -o main main.o Starship.o
</pre>


</pre>$ ./main
 ./main 
Starship Enterprise (NCC 1701-D) is ready to explore strange new worlds.

                       __...---'-----`---...__    
                  _===============================
 ______________,/'      `---..._______...---'     
(____________LL). .    ,--'                       
 /    /.---'       `. /                           
'--------_  - - - - _/                            
          `~~~~~~~~'                               

Battlestar Galactica (BS-75) is ready to lead a rag-tag fugitive fleet.

⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠋⠉⠉⠙⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⠀⠀⠀⠀⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀
⠀⣠⣶⣶⡄⠰⣿⣿⣿⣿⣦⣀⣀⣴⣿⣿⣿⣿⠆⢠⣶⣶⣄⠀
⢠⣿⣿⣿⣿⡄⠀⠈⢹⣿⣿⣿⣿⣿⣿⡏⠁⠀⢠⣿⣿⣿⣿⡄
⣿⣿⣿⣿⣿⣇⣀⣀⣠⣿⣿⣿⣿⣿⣿⣄⣀⣀⣸⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⠿⠿⣿⣿⠛⠛⠛⠛⣿⣿⠿⠿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣷⣤⣤⣿⣿⠀⢀⡀⠀⣿⣿⣤⣤⣾⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⡟⠛⠛⣿⣿⠐⢿⡿⠂⣿⣿⠛⠛⢻⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⢿⣿⣿⣿⣿⡇⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⢸⣿⣿⣿⣿⡿
⠀⢿⣿⣿⡟⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⢻⣿⣿⡿⠀
⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀

</pre>


Copy your `Starship` code from `part_b` into the `part_a` subdirectory.

Add a function `virtual void draw() const = 0;` to `Starship`

Create two child classes that each inherit from `Starship` called `FederationStarship` and `Battlestar`. Each child class should implement its own `void draw()` method that is appropriate for that type of starship (see the ASCII art above).

For each child class, write a default constructor that calls the super-class constructor with the appropriate parameters.

Use the provided `main` that creates an instance of each type of ship, and then calls `draw()` on each `Starship`



