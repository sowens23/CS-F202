/*  Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-Feb-17
    Program Name: HollowBox.h
    Program Function:
    * Implement a class called `HollowBox` in `HollowBox.h` that
      - inherits from `Box`
      - has a constructor that takes a width, height, and character, and calls the Box constructor to initialize the width and height
      - has a protected member variable called `char fill`
      - implements `std::string asString() const override`
*/

#pragma once
#include <string>
#include "Box.h"
using std::string;

class HollowBox : public Box {
	public:
		HollowBox (int w, int h, char c);
		string asString() const override;
	private:
		char fill;
};
