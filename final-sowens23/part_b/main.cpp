/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-May-5
	Program Name: main.cpp
	Program Function: part_b
		Change `main` so that it accepts a single argument from the command line.

		If `main` is called with anything other than the name of the program 
		plus one command line arguments, print a usage message that prints 
		the name of the program as it was called, and return 1 instead of 0.

		Create a `vector<Starship>`.

		Treat the command line argument as a file name. Create an `ifstream` to read from the file. 
		If the file can't be read, print an error message to `cerr` and return 2 instead of 0.

		Each line in the text file represents a Starship. Use a `while` loop to read the 
		values three at a time from the file. For each line, create a Starship object and 
		add it to the vector.

		Use a for-each loop to print each Starship to cout.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include "Starship.h"

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char * * argv) {
	//Check arguments
	if (argc != 2) {
		std::cerr << "Usage: ./main starships.txt" << endl;
		return 1;
	}

	//I/O streams and formatting
	std::ifstream input_stream(argv[1]);

	//Check initialization
	if (input_stream.fail()) {
		std::cerr << "Error opening file " << argv[1] << "\n";
		return 2;
	}

	//While loop print Starship from file into vector
	string t_name, t_id, t_mission;
	vector<Starship> starships;

	while (input_stream >> t_name >> t_id >> t_mission) {
		Starship s{t_name,t_id,t_mission};
		starships.push_back(s);
	}

	//Read vector
	for(Starship s: starships) {
		cout << s << endl;
	}
	
	return 0;
}

