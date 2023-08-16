/* 	Name: Spencer Owens
	Class: Spring CS F202
 	Date: 2023-March-28
    Program Name: part_c.cpp
	Program Function: Operate as last program but round input lines to hundreth
*/

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * * argv) {
	//Check arguments
	if (argc < 2) {
		std::cerr << "Usage: ./part_c input.txt\n";
		return 1;
	}

	//Declare variables
	using std::cout;
	using std::endl;
	using std::string;
	double number;
	string program_name = argv[0];
	string input_filename = argv[1];

	//I/O streams and formatting
	std::ifstream input_stream(input_filename);
	cout << std::fixed << std::cout.precision(2);
	while (input_stream >> number) {
		cout << std::fixed;
		cout << number << "\n";
	}
	input_stream.close();
	
	return 0;
}