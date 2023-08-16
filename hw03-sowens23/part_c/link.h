/* 	Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-April-24
    Program Name: link.h
    Program Function: 
    D)
    * A default constructor
    * A public constructor that takes a `double`
    * A public destructor
    * A public member variable `double value`
    * A public member variable `Link * next`
    
    C)
    * In `Link.h`, declare a standalone function `std::ostream& operator<<(std::ostream& os, const Link& link);`
*/

#pragma once
#include <iostream>

class Link {
    public:
        Link();
        Link(double v);
        ~Link();
        double value;
        Link * next;
        friend std::ostream& operator<<(std::ostream& os, const Link& link);
    private:
};
