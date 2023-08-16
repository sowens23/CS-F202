/* 	Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-April-24
    Program Name: link.h
    Program Function: 
    D)
    * The constructor should
    * set the member variables, setting `next` to `nullptr` and value to 'user provided variable(?)'
    * print a message to `cerr` stating that the constructor is being called
    * The destructor should 
    * print a message to `cerr` stating that the destructor is being called
    * `delete next`
    * print a message to `cerr` stating that the destructor has been called
  
    C)
    * Add a public constructor `Link(double value)` to `Link.h`
    * In `Link.cpp`, implement the standalone function `std::ostream& operator<<(std::ostream& os, const Link& link)`
*/

#include <iostream>
#include "link.h"

Link::Link() {
    next = nullptr;
    value = 0.0;
    std::cerr << "Link object constructed using Link() default constructor" << std::endl;
}

Link::Link(double v) {
    next = nullptr;
    value = v;
    std::cerr << "Link object constructed using Link(" << value << ") constructor" << std::endl;
}

Link::~Link() {
    std::cerr << "Link(" << value << ") object is being destructed using ~Link() deconstructor" << std::endl;    
    delete next;
    std::cerr << "Link(" << value << ") object has been destructed using ~Link() deconstructor" << std::endl;    
}

std::ostream& operator<<(std::ostream& os, const Link& link) {
    os << link.value << std::endl;
    return os;
}