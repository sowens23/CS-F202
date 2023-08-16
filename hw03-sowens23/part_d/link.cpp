/* 	Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-April-18
    Program Name: link.h
    Program Function: 
        * The constructor should
        - set the member variables, setting `next` to `nullptr` and value to 'user provided variable(?)'
        - print a message to `cerr` stating that the constructor is being called
        * The destructor should 
        - print a message to `cerr` stating that the destructor is being called
        - `delete next`
        - print a message to `cerr` stating that the destructor has been called
*/

#include <iostream>
#include "link.h"

Link::Link() {
    next = nullptr;
    value = 0.0;
    std::cerr << "Link object constructed using Link() default constructor" <<std::endl;
}

Link::~Link() {
    std::cerr << "Link(0) object is being destructed using ~Link() deconstructor" <<std::endl;    
    delete next;
    std::cerr << "Link(0) object has been destructed using ~Link() deconstructor" <<std::endl;    
}

/*Link::Link(double v) {
    next = nullptr;
    std::cerr << "Link object constructed using Link() default constructor";
}*/
