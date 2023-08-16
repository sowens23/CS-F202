/*  Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-Feb-17
    Program Name: FancyBox.h
    Program Function:
*/

#pragma once
#include <string>
#include <vector>
#include "Box.h"
using std::string;
using std::vector;

class FancyBox : public Box {
	public:
		FancyBox (int w, int h, char c);
		string asString() const override;
		vector <string> SuperFancy();
	private:
		char fill;
};
