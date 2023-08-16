/* 	Name: Spencer Owens
	Class: Fall CS F202
 	Date: 2023-Feb-16
    Program Name: FilledBox.h
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
		Implement int main() in part_c.cpp that prompts the user for a width, height, and fill character, then prints the box to cout
*/

#pragma once
#include <string>
#include "Box.h"
using std::string;

class FilledBox : public Box {
	public:
		FilledBox (int w, int h, char c);
		string asString() const override;
	private:
		char fill;
};
