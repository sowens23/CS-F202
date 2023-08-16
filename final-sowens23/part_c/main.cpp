/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-May-5
	Program Name: main.cpp
	Program Function: part_c 
		• Copy your `Starship` code from `part_d` into the `part_c` subdirectory.

		• Change `main` so that it accepts arguments from the command line instead of having 
		the values hard-coded.

		• If `main` is called with anything other than the name of the program plus three 
		command line arguments, print a usage message that prints the name of the program 
		as it was called, and return 1 instead of 0.
*/

#include <iostream>
#include "Starship.h"

using std::cout;
using std::endl;

int main(int argc, char * * argv) {
	//const Starship enterprise{"Starship Enterprise", "NCC 1701-D", "explore strange new worlds"};
	//const Starship galactica{"Battlestar Galactica", "BS-75", "lead a rag-tag fugitive fleet"};

	if (argc != 4) {
		std::cerr << "Usage: ./main \"Starship name\" \"Starship ID\" \"starship mission\"" << endl;
		return 1;
	}

	const Starship galactica{argv[1], argv[2], argv[3]};
	cout << galactica << endl;
}

