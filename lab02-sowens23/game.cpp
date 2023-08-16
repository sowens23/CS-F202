/*  Name: Spencer Owens
    Class: Fall CS F201
    Date: 2023-February-4
    Program Name: game.cpp
    Program Function: Main file for running game.cpp/data.cpp/data.h
*/

#include <iostream>
#include <vector>
#include "data.h"
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main() {
	vector<Character> characters = {};
	string prompt = {"\nWhat would you like to access? \n [1] Skills \n [2] Inventory \n [3] Basic Info \n [4] Spells \n [5] Stats \n [6] Exit \n\n Enter: "};
	int input;
	string clrs = "\033[2J\033[1;1H";
	cout << clrs << "What is your characters name: ";
	string character_name;
	cin >> character_name;
	Character temp_char = Character(character_name);
	cout << prompt;
    while(cin >> input) {
		cout << endl;
        if (input == 1) {
            cout << "These are your available Skills: \n";
            for (string i : temp_char.getSkills()) {
                cout << "  - " << i << "\n";
            }
        }
        if(input == 2) {
            cout << "This is what is in your Inventory: \n";
            for (string i : temp_char.getInventory()) {
                cout << "  - " << i << "\n";
            }
        }
        if (input == 3) {
            cout << "This is your BasicInfo\n";
            for (string i : temp_char.getBasicInfo()) {
                cout << "  - " << i << "\n";
            }
        }
        if (input == 4) {
            cout << "These are your available Spells\n";
            for (string i : temp_char.getSpells()) {
                cout << "  - " << i << "\n";
            }
        }
        if (input == 5) {
            cout << "These are your Stats\n";
            for (string i : temp_char.getStats()) {
                cout << "  - " << i << "\n";
            }
        }
        if (input == 6) break;
		else if (input < 1 || input > 6) cout << "Incorrect input, please try again.";
		cout << prompt;
    }
    return 0;
}
