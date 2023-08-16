/* 	Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-April-24
    Program Name: linkedlist.cpp
    Program Function: 
	C)
	* Create a file called LinkedList.cpp that implements the methods of the `LinkedList` class.
	* The constructor should 
		- set the member variable, setting `head` to `nullptr`
		- print a message to `cerr` stating that the constructor is being called
	* The destructor should
		- print a message to `cerr` stating that the destructor is being called
		- `delete head`
		- print a message to `cerr` stating that the destructor has been called
	* The method `void LinkedList::push_back(double value)` should insert a new Link object at the end of the LinkedList,
			maintaining the other items in the list, and should print a message to `cerr` explaining 
			what is happening that uses the `operator<<` from `Link.h`
*/

#include <iostream>
#include "linkedlist.h"
#include "link.h"

LinkedList::LinkedList() {
	head = nullptr;
    std::cerr << "LinkedList object constructed using LinkedList() default constructor" <<std::endl;
}

LinkedList::~LinkedList() {
    std::cerr << "LinkedList(0) object is being destructed using ~LinkedList() deconstructor" <<std::endl;    
    delete head;
    std::cerr << "LinkedList(0) object has been destructed using ~LinkedList() deconstructor" <<std::endl;  
}

void LinkedList::push_back(double value) {
	// 
	Link* newLink = new Link {value};
	if (head == nullptr) {
		head = new Link {value};
	} 
	else {
		Link* current = head;
		while (current->next != nullptr) {
			current = current->next;
		}
		current->next - newLink;
	}
}
