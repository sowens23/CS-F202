/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-May-5
	Program Name: main.cpp
	Program Function: part_d 
		* in `main.cpp`
			- any needed `#include` and `using` statments
			- a `main` function (provided for you - do not change)
*/

#include <iostream>
#include "Starship.h"

using std::cout;
using std::endl;

int main() {
	
	const Starship enterprise{"Starship Enterprise", "NCC 1701-D", "explore strange new worlds"};
	const Starship galactica{"Battlestar Galactica", "BS-75", "lead a rag-tag fugitive fleet"};

	cout << enterprise << endl;
	cout << galactica << endl;
}

