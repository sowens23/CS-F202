/*  Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-Feb-17
    Program Name: FancyBox.cpp
    Program Function: Alright let's try this again
*/

#include <string>
#include <iostream>
#include <vector>
#include "FancyBox.h"
using std::cout;
using std::string;
using std::endl;
using std::vector;

FancyBox::FancyBox (int w, int h, char c) : Box{w,h}{
	width = w;
	height = h;
	fill = c;
}

string FancyBox::asString() const {
	string return_box{};
	for (int i=0;i<height;i++) {
		for (int x=0;x<width;x++) {
			if (i==0 || i==(height-1)) {
				if (i==0 && x==0) return_box += "╔";
				if (i==0 && x==(width-1)) return_box += "╗";
				if (i==(height-1) && x==0) return_box += "╚";
				if (i==(height-1) && x==(width-1)) return_box += "╝";
				if (x!=0 && x!=(width-1)) return_box += "═";
			}
			if (i!=0 && i!=(height-1)) {
				if (x==0 || x==(width-1)) return_box += "║";
				if (x!=0 && x!=(width-1)) return_box += " ";
				
			}
		}
		return_box += "\n";
	}
	return return_box;
}

vector <string> FancyBox::SuperFancy() {
	vector <string> return_v {};
	for (int i=0;i<height;i++) {
		//return_v.push_back(std::to_string(i)); //For troubleshooting
		for (int x=0;x<width;x++) {
			if (i==0 || i==(height-1)) {
				if (i==0 && x==0)  return_v.push_back("╔");
				if (i==0 && x==(width-1))  return_v.push_back("╗");
				if (i==(height-1) && x==0) return_v.push_back("╚");
				if (i==(height-1) && x==(width-1)) return_v.push_back("╝");
				if (x!=0 && x!=(width-1)) return_v.push_back("═");
			}
			if (i!=0 && i!=(height-1)) {
				if (x==0 || x==(width-1)) return_v.push_back("║");
				if (x!=0 && x!=(width-1)) return_v.push_back(" ");
				
			}
			//return_v.push_back(std::to_string(x)); //For troubleshooting
		}
		//return_v.push_back("n"); //For troubleshooting
		return_v.push_back("\n");
	}
	return return_v;
}


