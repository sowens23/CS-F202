/* 	Name: Spencer Owens
	Class: Fall CS F202
 	Date: 2023-Feb-16
    Program Name: Box.cpp
	Program Function: 
		In the part_c subdirectory:
		* Implement an abstract class called `Box` in `Box.h`
		  - The constructor should take:
			* int w representing the width of the box
			* int h representing the height of the box
		  - Implement the following methods:
			* int getWidth() const that returns the width of the box
			* int getHeight() const that returns the height of the box
			* virtual std::string asString() const = 0;
		  - Store the following as protected member variables:
			* int width
			* int height
*/

#include <iostream>
#include <string>
#include "Box.h"
#include "FilledBox.h"
#include "HollowBox.h"
using std::cout;
using std::string;

Box::Box (int w, int h) {
	width = w;
	height = h;
}

int Box::getWidth() {
	return width;
}

int Box::getHeight() {
	return height;
}
