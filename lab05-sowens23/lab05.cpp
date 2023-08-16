/*  Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-March-03
    Program Name: lab05.cpp
    Program Function: To use the 'this->' reference inside of a class.
*/

#include <iostream>
#include <string>
/*
class myClass {
	public:
		myClass(std::string t, int y) {
			title = t;
			year = y;
		}
		void print () {
				std::cout << "'this->' reference is to myClass.example.y: " << this->x << std::endl;
		}
		std::string getTitle() {
			std::string temp_t = title;
			return temp_t;
		} 
		int getYear() {
			int temp_y = year;
			return temp_y;
		} 
		std::string x;
	private:
		std::string title;
		int year;
};

int main () {
	std::cout << "Please enter int year, and string title: ";
	int year;
	std::string title;
	std::cin >> year >> title;
	myClass example(title, year);
	std::cout << example.getYear() << ", Title: " << example.getTitle() << std::endl;
	return 0;
};*/

#include <iostream>
#include <string>

class HitPoints {
	public: 
		HitPoints(int x, int y) : current(x), max(y) {}
		int current;
		int max;
		HitPoints& operator--() {
			this->current -= 1;
			return *this;
		} // 	--bob.current;
};

int main() {
	char* hi = "Hello World";
	std::string s{hi};
	std::cout << s.length() << std::endl;
	return 0;
}

