#include <iostream>

class Link {
    public:
    double value;
	Link * next;

    Link() {
    	next = nullptr;
    }
	Link(double v) {
    	next = nullptr;
    	value = v;
    }

  
	~Link() {
    	delete next;
    }
	
};

class LinkedList {
  	private:
  	Link * head;

	public: 
  
    LinkedList () {
    	head = nullptr;
    }
  	~LinkedList() {
		delete head;
    }
  	void push_back(double value) {
      	Link* newLink = new Link(value);
      	if (head == nullptr) {
          	head = newLink;
            return;
        }
      	else {
          	Link* current = head;
          	while (current->next != nullptr) {
              	current = current->next;
            }
          	current->next = newLink;
        }
    }
  	void printList(){
		Link* current = head;
		if(head == NULL){
			std::cout << "List is empty" << std::endl;
			return;
		}
		while (current != NULL) {
			std::cout << current->value << " ";
			current = current->next;
		}
		std::cout << std::endl;
    }
};

int main () {
	std::cout << "Initializing" << std::endl;
    LinkedList list;
	std::cout << "Initialized" << std::endl;
	std::cout << "Printing List" << std::endl;
	list.printList();
	std::cout << "List Printed" << std::endl;
	std::cout << "PushBack 37, 25.9,12.5" << std::endl;
    list.push_back(37.0);
    list.push_back(25.9);
    list.push_back(12.5);
	std::cout << "Printing List" << std::endl;
	list.printList();
	std::cout << "List Printed" << std::endl;
	return 0;
}