/* 	Name: Spencer Owens
	Class: Spring CS F202
 	Date: 2023-April-2
    Program Name: part_a.cpp
	Program Function: Operate as last program but expand on error logging
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

int main(int argc, char * * argv) {
	//Declare namespace
	using std::cout;
	using std::endl;
	using std::string;
	using std::vector;

	//Check arguments
	if (argc != 3) {
		std::cerr << "Usage: ./part_a input.txt\n";
		return 1;
	}

	//Declare variables
	double number;
	vector <string> arguments{argv[1],argv[2]};

	//I/O streams and formatting
	std::ifstream input_stream(arguments[0]);
	std::ofstream output_stream(arguments[1]);

		//Check initialization
		if (input_stream.fail()) {
			std::cerr << "Error opening file " << arguments[0] << "\n";
			return 2;
		}
		if (output_stream.fail()) {
			std::cerr << "Error opening file " << arguments[1] << "\n";
			return 3;
		}

	output_stream << std::fixed << std::setprecision(2);
	while (input_stream >> number) {
		output_stream << number << "\n";
	}
		//Check if input_stream failed before EOF
		if (input_stream.fail() && input_stream.eof() == false) {
			std::cerr << "Failed to read entire input file " << arguments[0] << "\n";
			return 4;
		}

	input_stream.close();
	output_stream.close();
	
	return 0;
}