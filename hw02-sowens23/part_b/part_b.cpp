/* 	Name: Spencer Owens
	Class: Spring CS F202
 	Date: 2023-April-2
    Program Name: part_b.cpp
	Program Function: Operate as last program but output formated input into another file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

int main(int argc, char * * argv) {
	//Declare namespaces
	using std::cout;
	using std::endl;
	using std::string;
	using std::vector;

	//Check arguments
	if (argc != 3) {
		std::cerr << "Usage: ./part_b input.txt\n";
		return 1;
	}

	//Declare variables
	double number;
	vector <string> arguments{argv[1],argv[2]};

	//I/O streams and formatting
	std::ifstream input_stream(arguments[0]);
	std::ofstream output_stream(arguments[1]);
	output_stream << std::fixed << std::setprecision(2);
	while (input_stream >> number) {
		output_stream << number << "\n";
	}
	input_stream.close();
	output_stream.close();
	
	return 0;
}