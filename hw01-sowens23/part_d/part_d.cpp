/* 	Name: Spencer Owens
	Class: Fall CS F202
 	Date: 2023-Feb-16
    Program Name: part_d.cpp
	Program Function: 
		Implement a class called FilledBox in FilledBox.h and FilledBox.cpp
			The constructor should take:
				int w representing the width of the box
				int h representing the height of the box
				char c representing the character that will be used to fill the box
			Implement the following methods:
				int getWidth() const that returns the width of the box
				int getHeight() const that returns the height of the box
				std::string asString() const that returns a string representation of the filled box
			Store the following as private member variables:
			int width
			int height
			char fill
		Implement int main() in part_d.cpp that prompts the user for a width, height, and fill character, then prints the box to cout
		Implement a Makefile for this partV
*/

#include <iostream>
#include <string>
#include <vector>
#include "FilledBox.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
	vector <string> prompt {"Enter Width: ", "Enter Height: ", "Enter Fill Character: "};
	int width_t; int height_t; char fill_t;
	cout << "\n" << prompt[0]; cin >> width_t;
	cout << prompt[1]; cin >> height_t;
	cout << prompt[2]; 
	while (cin >> fill_t) {
		FilledBox temp_shape = FilledBox(width_t, height_t, fill_t);
		cout << temp_shape.asString();
		cout << "\n" << prompt[0]; cin >> width_t;
		cout << prompt[1]; cin >> height_t;
		cout << prompt[2];
	}	
	return 0;
}
