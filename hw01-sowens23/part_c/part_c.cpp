/* 	Name: Spencer Owens
	Class: Fall CS F202
 	Date: 2023-Feb-17
    Program Name: part_c.cpp
	Program Function: 
		In the part_c subdirectory:
			* Implement `int main()` in part_c.cpp that prompts the user for a width, height, and character, then prints the box to cout
	* Implement a Makefile for this part
*/

#include <iostream>
#include <string>
#include <vector>
#include "Box.h"
#include "HollowBox.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
	//Declar Variables
	vector <string> prompt {"Enter Width: ", "Enter Height: ", "Enter Fill Character: "};
	int width_t; int height_t; char fill_t; int choice;
	//Initiate Input
	cout << "\n" << prompt[0]; cin >> width_t;
	cout << prompt[1]; cin >> height_t;
	cout << prompt[2]; 
	//Loop Ouput Input
	while (cin >> fill_t) {
		//Draw Ouput
		HollowBox HBtemp_shape = HollowBox(width_t, height_t, fill_t);
		cout << endl << HBtemp_shape.asString();
		cout << "\n" << prompt[0]; cin >> width_t;
		//Cycle Input
		cout << prompt[1]; cin >> height_t;
		cout << prompt[2];
	}	
	return 0;
}
