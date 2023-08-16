/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-May-5
	Program Name: Starship.h
	Program Function: part_b
    Add a copy constructor to the `Starship` class.
*/

#pragma once

#include <iostream>
#include <string>
using std::string;

class Starship {

 public:
  Starship(string t_name, string t_id, string t_mission);
  Starship(const Starship& copy_starship);

  string getName() const;
  string getID() const;
  string getMission() const;
  friend std::ostream& operator<<(std::ostream& os, const Starship& s);

 private:
  std::string name;
  std::string identifier;
  std::string mission;
};

