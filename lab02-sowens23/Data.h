/*  Name: Spencer Owens
    Class: Fall CS F201
    Date: 2023-February-4
    Program Name: data.h
    Program Function: To contain class instructions for data.cpp
*/

#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;

class Character {
    Character();
    Character(string user_info, string user_spell, string user_item, string user_skill);

    vector<string> info;
    vector<string> spells;
    vector<int> stats;
    vector<string> inventory;
    vector<string> skills;
    string player_name;

    vector<string> getBasicInfo ();
    vector<string> getSpells ();
    vector<int> getStats ();
    vector<string> getInventory ();
    vector<string> getSkills ();

private:

};

