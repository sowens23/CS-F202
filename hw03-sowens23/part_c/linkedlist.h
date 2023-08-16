/* 	Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-April-24
    Program Name: linkedlist.h
    Program Function: 
	C)
	* Create a file called LinkedList.h that contains a `LinkedList` class as described below:
		* A public default constructor
		* A public destructor
		* A private member variable `Link * head`
		* A public method `void LinkedList::push_back(double value)`
*/

#pragma once
#include "link.h"

class LinkedList {
	public: 
		LinkedList();
		~LinkedList();
		void push_back(double value);
	private:
		Link * head;
};