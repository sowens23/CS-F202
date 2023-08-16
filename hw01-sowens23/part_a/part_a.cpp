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
#include "FancyBox.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void style_set (int select) {
	constexpr char ESC{033};
	//Reset
		if (select==0) cout << ESC <<"[0m";
	//Colors		
		if (select==1) cout << ESC <<"[31m"; //Red
		if (select==2) cout << ESC <<"[32m"; //Green
		if (select==3) cout << ESC <<"[33m"; //Yellow
		if (select==4) cout << ESC <<"[34m"; //Blue
		if (select==5) cout << ESC <<"[35m"; //Magenta
		if (select==6) cout << ESC <<"[36m"; //Cyan
}

void FancyMachine (int count, string char_t) {
	style_set(count);
	cout << char_t;
}

int main () {
	//Declar Variables
	vector <string> prompt {"Enter Width: ", "Enter Height: ", "Enter Fill Character: ", 
		"\n[1] Hollow Box\n[2] Filled Box\n[3] Fancy Box\n[4] Super Fancy Box\nEnter: "};
	int width_t; int height_t; char fill_t; int choice; int counta;
	//Initiate Input
	cout << "\n" << prompt[0]; cin >> width_t;
	cout << prompt[1]; cin >> height_t;
	cout << prompt[2]; 
	//Loop Ouput Input
	while (cin >> fill_t) {
		//Get Choice and Draw Ouput
		cout << prompt[3]; cin >> choice;
		if (choice == 1) {
			HollowBox HBtemp = HollowBox(width_t, height_t, fill_t);
			cout << endl << HBtemp.asString();
		};
		if (choice == 2) {
			FilledBox FBtemp = FilledBox(width_t, height_t, fill_t);
			cout << endl << FBtemp.asString();
		};
		if (choice == 3) {
			FancyBox FaBtemp = FancyBox(width_t, height_t, fill_t);
			cout << endl << FaBtemp.asString();
		};
		if (choice == 4) {
			FancyBox SFaBtemp = FancyBox(width_t, height_t, fill_t);
			vector <string> SFaBprint = SFaBtemp.SuperFancy();
			counta = 1;
			cout << endl;
			for (string i: SFaBprint) {
				FancyMachine(counta, i);
				counta += 1;
				if (counta == 7) counta = 1;
			}
			style_set(0);
		};
		cout << "\n" << prompt[0]; cin >> width_t;
		//Cycle Input
		cout << prompt[1]; cin >> height_t;
		cout << prompt[2];
	}	
	return 0;
}
