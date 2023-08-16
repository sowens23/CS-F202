/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-May-5
	Program Name: Starship.cpp
	Program Function: part_a
    Copy your `Starship` code from `part_b` into the `part_a` subdirectory.

    Use the provided `main` that creates an instance of each type of ship, 
    and then calls `draw()` on each `Starship`
*/

#include "Starship.h"
#include <iostream>

using std::cout;
using std::endl;


int main() {
	
  const FederationStarship enterprise;
  const Battlestar galactica;

  cout << enterprise << endl;
  cout << endl;
  enterprise.draw();
  cout << endl;
  
  cout << galactica << endl;
  cout << endl;
  galactica.draw();
  cout << endl;

}

