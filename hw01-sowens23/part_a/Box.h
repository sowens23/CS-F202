/*  Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-Feb-17
    Program Name:Box.h
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

#pragma once
#include <string>
using std::string;

class Box {
	public:
		Box (int w, int h);
		int getWidth();
		int getHeight();
		virtual string asString() const = 0;
	private:
	protected:
		int width;
		int height;
};
