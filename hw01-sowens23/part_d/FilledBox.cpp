/* 	Name: Spencer Owens
	Class: Fall CS F202
 	Date: 2023-Feb-16
    Program Name: FilledBox.cpp
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
#include "FilledBox.h"
using std::cout;
using std::string;

FilledBox::FilledBox (int w, int h, char c) {
	width = w;
	height = h;
	fill = c;
}

int FilledBox::getWidth() {
	int width_t = width;
	return width_t;
}

int FilledBox::getHeight() {
	int height_t = height;
	return height_t;
}

string FilledBox::asString() const {
	string return_box {""};
	
	for (int i=0;i<height;i++) {
		for (int x=0;x<width;x++) {
			return_box += fill;
		}
		return_box += "\n";
	}
	return return_box;
}
