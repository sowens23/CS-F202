/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-May-5
	Program Name: Starship.cpp
	Program Function: part_c 
*/

#include <iostream>
#include <string>
#include "Starship.h"
using std::string;


Starship::Starship(string t_name, string t_id, string t_mission) {
	name = t_name;
	identifier = t_id;
	mission = t_mission;
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