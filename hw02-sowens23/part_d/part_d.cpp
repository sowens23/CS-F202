/* 	Name: Spencer Owens
	Class: Spring CS F202
 	Date: 2023-March-28
    Program Name: part_d.cpp
	Program Function: Input stream from .txt error out on lackage of argument or output the .txt
*/

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char * * argv) {
	using std::cout;
	using std::endl;

	if (argc < 2) {
		//Check to make sure there are additional arguments
		std::cerr << "Usage: ./part_d input.txt\n";
		//Exits, returns message with return value 1
		return 1;
	}
	std::string program_name = argv[1];
	std::ifstream input_stream(program_name);
	char c;
	while (input_stream.get(c)) {
		cout << c;
	}
	input_stream.close();
	return 0;
}