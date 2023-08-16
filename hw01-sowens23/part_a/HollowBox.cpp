/*  Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-Feb-17
    Program Name: HollowBox.cpp
    Program Function:
    * Implement a class called `HollowBox` in `HollowBox.h` that
      - inherits from `Box`
      - has a constructor that takes a width, height, and character, and calls the Box constructor to initialize the width and height
      - has a protected member variable called `char fill`
      - implements `std::string asString() const override`
*/

#include <string>
#include "HollowBox.h"
using std::string;

HollowBox::HollowBox (int w, int h, char c) : Box{w,h}{
	width = w;
	height = h;
	fill = c;
}

string HollowBox::asString() const {
	string return_box {""};
	
	for (int i=0;i<height;i++) {
		for (int x=0;x<width;x++) {
			if (i==0 || i==(height-1)) return_box += fill;
			if (i!=0 && i!=(height-1)) {
				if (x==0 || x==(width-1)) return_box += fill;
				if (x!=0 && x!=(width-1)) return_box += " ";
				
			}
		}
		return_box += "\n";
	}
	return return_box;
}
