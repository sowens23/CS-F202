/* 	Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-April-18
    Program Name: link.h
    Program Function: 
        * A default constructor
        * A public constructor that takes a `double`
        * A public destructor
        * A public member variable `double value`
        * A public member variable `Link * next`
*/

#pragma once

class Link {
    public:
        Link();
        //Link(double v);
        ~Link();
        double value;
        Link * next;
    private:
};
