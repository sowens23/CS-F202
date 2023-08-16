/* 	Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-May-5
    Program Name: Starship.h
    Program Function: part_a
      Add a function `virtual void draw() const = 0;` to `Starship`

      Create two child classes that each inherit from `Starship` 
      called `FederationStarship` and `Battlestar`. Each child class should implement 
      its own `void draw()` method that is appropriate for that type of starship 
      (see the ASCII art above).

      For each child class, write a default constructor 
      that calls the super-class constructor with the appropriate parameters.
*/

#pragma once

#include <iostream>
#include <string>
using std::string;

class Starship {
  public:
    Starship();
    Starship(const Starship& copy_starship);

    string getName() const;
    string getID() const;
    string getMission() const;
    friend std::ostream& operator<<(std::ostream& os, const Starship& s);

    virtual void draw() const = 0;

  private:
  protected:
    std::string name;
    std::string identifier;
    std::string mission;
};

class FederationStarship : public Starship{
  public:
    FederationStarship();
    void draw() const override;
};

class Battlestar : public Starship{
  public:
    Battlestar();
    void draw() const override;
};

