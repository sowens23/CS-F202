/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-May-5
	Program Name: Starship.cpp
	Program Function: part_a
		Add a function `virtual void draw() const = 0;` to `Starship`

		Create two child classes that each inherit from `Starship` 
		called `FederationStarship` and `Battlestar`. Each child class should implement 
		its own `void draw()` method that is appropriate for that type of starship 
		(see the ASCII art above).

		For each child class, write a default constructor 
		that calls the super-class constructor with the appropriate parameters.
*/

#include <iostream>
#include <string>
#include "Starship.h"
using std::string;

Starship::Starship() {
}

Starship::Starship(const Starship& copy_starship) {
	name = copy_starship.name;
	identifier = copy_starship.identifier;
	mission = copy_starship.mission;
}

string Starship::getName() const {
	return name;
}

string Starship::getID() const {
	return identifier;
}

string Starship::getMission() const {
	return mission;
}

std::ostream& operator<<(std::ostream& os, const Starship& s) {
	return os << s.getName() << " (" << s.getID() << ") is ready to " << s.getMission() << ".";
}

FederationStarship::FederationStarship() {
	name = "Starship Enterprise";
	identifier = "NCC 1701-D";
	mission = "explore strange new worlds";
}

void FederationStarship::draw() const {
	std::cout << "                       __...---'-----`---...__    " << std::endl;
	std::cout << "                  _===============================" << std::endl;
	std::cout << " ______________,/'      `---..._______...---'     " << std::endl;
	std::cout << "(____________LL). .    ,--'                       " << std::endl;
	std::cout << " /    /.---'       `. /                           " << std::endl;
	std::cout << "'--------_  - - - - _/                            " << std::endl;
	std::cout << "          `~~~~~~~~'                              " << std::endl;
}

Battlestar::Battlestar() {
	name = "Battlestar Galactica";
	identifier = "BS-75";
	mission = "lead a rag-tag fugitive fleet";
}

void Battlestar::draw() const {
	std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀    " << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀     " << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠋⠉⠉⠙⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀   " << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⠀⠀ ⠀⠀⣿⣿⣿⣷⠀⠀⠀⠀⠀    " << std::endl;
	std::cout << "⠀⣠⣶⣶⡄⠰⣿⣿⣿⣿⣦⣀⣀⣴⣿⣿⣿⣿⠆⢠⣶⣶⣄⠀  " << std::endl;
	std::cout << "⢠⣿⣿⣿⣿⡄⠀⠈⢹⣿⣿⣿⣿⣿⣿⡏⠁⠀⢠⣿⣿⣿⣿⡄  " << std::endl;
	std::cout << "⣿⣿⣿⣿⣿⣇⣀⣀⣠⣿⣿⣿⣿⣿⣿⣄⣀⣀⣸⣿⣿⣿⣿⣿ " << std::endl;
	std::cout << "⣿⣿⣿⣿⣿⣿⠿⠿⣿⣿⠛⠛⠛⠛⣿⣿⠿⠿⣿⣿⣿⣿⣿⣿ " << std::endl;
	std::cout << "⣿⣿⣿⣿⣿⣷⣤⣤⣿⣿⠀⢀⡀⠀⣿⣿⣤⣤⣾⣿⣿⣿⣿⣿  " << std::endl;
	std::cout << "⣿⣿⣿⣿⣿⡟⠛⠛⣿⣿⠐⢿⡿⠂⣿⣿⠛⠛⢻⣿⣿⣿⣿⣿ " << std::endl;
	std::cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  " << std::endl;
	std::cout << "⢿⣿⣿⣿⣿⡇⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⢸⣿⣿⣿⣿⡿  " << std::endl;
	std::cout << "⠀⢿⣿⣿⡟⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⢻⣿⣿⡿⠀  " << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀     " << std::endl;
	std::cout << "⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀	  " << std::endl;
}
