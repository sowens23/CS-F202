/*  Name: Spencer Owens
    Class: Fall CS F201
    Date: 2023-February-4
    Program Name: data.cpp
    Program Function: To contain class functions for data.h
*/

#include "data.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

/*
Character::Character() { 
	Skills = {"Sprint", "Double Jump", "Glide"};
	Inventory = {"Stick", "$5", "Bottle of Water"};
	BasicInfo = {"Freddy", "10 hours, 15 minutes, 27 seconds", "Last save: 1/31 9:31 AM"};
	Spells = {"Fireball", "Blizzard", "Weak Ward"};
	Stats = {"100 Health", "150 Stamina", "300 Mana"};
}
*/

Character::Character(string character_name) { 
	Skills = {"Sprint", "Double Jump", "Glide"};
	Inventory = {"Stick", "$5", "Bottle of Water"};
	BasicInfo = {character_name, "0 hours, 0 minutes, 27 seconds", "Last save: 1/31 9:31 AM"};
	Spells = {"Fireball", "Blizzard", "Weak Ward"};
	Stats = {"100 Health", "150 Stamina", "300 Mana"};
}

Character::Character(vector<string> skills, vector<string> inventory, vector<string> basicinfo, vector<string> spells, vector<string> stats) {
    Skills = skills;
	Inventory = inventory;
	BasicInfo = basicinfo;
    Spells = spells;
    Stats = stats;
}

vector<string> Character::getSkills() {
	vector<string> temp_skill = Skills;
	return temp_skill;
}

vector<string> Character::getInventory() {
	vector<string> temp_inv = Inventory;
	return temp_inv;
}

vector<string> Character::getBasicInfo() {
	vector<string> temp_info = BasicInfo;
    return temp_info;
}

vector<string> Character::getSpells() {
	vector<string> temp_spell = Spells;
    return temp_spell;
}

vector<string> Character::getStats() {
	vector<string> temp_stat = Stats;
    return temp_stat;
}
