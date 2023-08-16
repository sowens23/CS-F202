/* 	Name: Spencer Owens
	Class: Fall CS F202
 	Date: 2023-Feb-17
    Program Name: part_b.cpp
	Program Function: 
		Copy your code from part C, and add a filled box class that inherits from Box.
		Your part_b.cpp should prompt the user for which type of box they want to print.
*/

#include <iostream>
#include <string>
#include <vector>
#include "Box.h"
#include "FilledBox.h"
#include "HollowBox.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main () {
	//Declar Variables
	vector <string> prompt {"Enter Width: ", "Enter Height: ", "Enter Fill Character: ", 
		"\n[1] Hollow Box\n[2] Filled Box\nEnter: "};
	int width_t; int height_t; char fill_t; int choice;
	//Initiate Input
	cout << "\n" << prompt[0]; cin >> width_t;
	cout << prompt[1]; cin >> height_t;
	cout << prompt[2]; 
	//Loop Ouput Input
	while (cin >> fill_t) {
		//Get Choice and Draw Ouput
		cout << prompt[3]; cin >> choice;
		if (choice == 1) {
			HollowBox HBtemp_shape = HollowBox(width_t, height_t, fill_t);
			cout << endl << HBtemp_shape.asString();
		};
		if (choice == 2) {
			FilledBox FBtemp_shape = FilledBox(width_t, height_t, fill_t);
			cout << endl << FBtemp_shape.asString();
		};
		cout << "\n" << prompt[0]; cin >> width_t;
		//Cycle Input
		cout << prompt[1]; cin >> height_t;
		cout << prompt[2];
	}	
	return 0;
}
