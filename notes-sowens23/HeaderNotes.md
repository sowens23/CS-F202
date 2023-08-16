## Other-Stuff
- [README.md](https://github.com/2023-Spring-UAF-CS202/notes-sowens23/blob/main/README.md)

## General Programming Notes
* [Homework and Push Notation][#Homework-and-Push-Notation]
* [CLI-Commands](#CLI-Commands)
* [C++-ANSI-Escape-Codes](#C++-ANSI-Escape-Codes)
* [C++-Header-Files-and-Popular-Packages](#C++-Header-Files-and-Popular-Packages)
* [C++-Functions](#C++-Functions)
* [](#)

## Programming Tips
* 'using namespace std;' Do not use, this pollutes namespace, and can cause reference issues.
* 'using std::[function]' Use, but inside off class/function definitions. Do not use in global namespace.
* '#pragma once' //Used to ignore redundant header files


## Homework-and-Push-Notation
### Standard Program Notation
/* 	Name: Spencer Owens
	Class: Fall CS F202
	Date: 2023-Feb-8
	Program Name: a.cpp
	Program Function: TEST
*/

### Standard Commit Notation
* Commit stages;
	/* ProjectName v0.25 : Initial commit 
		//This includes MakeFile and .gitignore file
	ProjectName v0.50 : Variables initialized
	ProjectName v0.75 : I/O Streams established
	ProjectName v1.00 : Completed
	ProjectName vX.XX : Patch */


## CLI-Commands
### Git Commands
* Clone Git Repository: 		git clone "URL"
* Add all changed files in repository: 	git add -A
* Commit added changes: 		git commit -m "Message"
* Push committed changes:		git push

### CLI-Commands
* Linux
	* Force remove directory: rm -rf 'dir1'
	* To create files, and duplicate contents. 
		* touch targetfile{00..99}.cpp
		* tee<sourcefile.cpp targetfile{00..99}.cpp >/dev/null
	* Compiling
		* g++ -std=c++17 -o main main.cpp
		* g++ -std=c++17 -c main.cpp
		* g++ -std=c++17 -o main header1.o header2.o (Combines two header files)
		* ./executable

## C++-ANSI-Escape-Codes 
* [Wiki](https://en.wikipedia.org/wiki/ANSI_escape_code)
* Clear screen: cout << "\033[2J\033[1;1H";

## C++-Header-Files-and-Popular-Packages
*[TOP](#TOP)
* #include<[iostream](https://cplusplus.com/reference/iostream/)>
	* Automatically also includes <[ios](https://cplusplus.com/%3Cios%3E)> <[streambuf](https://cplusplus.com/%3Cstreambuf%3E)> 
<[istream](https://cplusplus.com/%3Cistream%3E)> <[ostream](https://cplusplus.com/%3Costream%3E)> <[iosfwd](https://cplusplus.com/%3Ciosfwd%3E)>
	```
	//This code below assumes variable Person, and functions getTitle and getFirst
	std::ostream& operator<<(std::ostream& os, const Person& d) {
		return os << d.getTitle() << ' ' << d.getFirst() << ' ' << d.getLast();
		std::cout << PersonA;
	}
	```
	```
	void iostream_demo () {
		std::cout << "Text goes here";
		std::string input_goes_here {};
		std::cin >> input_goes_here;
	}
	```
* #include<[string](https://en.cppreference.com/w/cpp/header/string)>
	```
	void string_demo () {
		std::string name {"Bob"};
		int age {100};
		name.length();
		//Convert INT to STRING
		std::string age_string = std::to_string(age);
	}
	```
* #include<[ifstream](https://cplusplus.com/reference/fstream/)>
* #include<[cmath](https://cplusplus.com/reference/cmath/)>
	```
	void cmath_demo () {
		std::cout << sqrt(2) << std::endl;
	}
	```
* #include<[climits](https://cplusplus.com/reference/climits/)>
	```
	void climits_demo () {
		int min {INT_MAX};
		int max {INT_MIN};
	}
	```
* #include<[ctime](https://cplusplus.com/reference/ctime/)>
* #include<[vector](https://cplusplus.com/reference/vector/)>
	```
	void vector_demo () {
		std::vector<int> numbers {};
		numbers.size();
		numbers[0];
		numbers.push_back(2);
		// sort(numbers); //This is included in stdlib.h and I can't figure it out yet.
		for (int i: numbers) {
			//For each loop, make sure variable type matches vector type.
		}
		return;
	}
	```
* #include<[algorithm](https://cplusplus.com/reference/algorithm/)>
* #include<[stdexcept](https://cplusplus.com/reference/stdexcept/)>
	* './program 1> my_out.txt' will stream-redirect-operator output STANDARD OUT to file
	* './program 2> my_out.txt' will stream-redirect-operator output ERROR OUT to file
		* The non-specified output will be printed to terminal
	* './program 1> my_out.txt 2> my_err.txt'
		* 1> will overwrite
		* 1>> will append
* #include<[]()>

## C++-Functions
* [TOP](#TOP)
### Enum-Class
	```
	enum class Month { 
		//You can declare an enum without "class", this will make the enum variables GLOBAL
		jan=1, feb, mar, apr, may, jun,
		jul, aug, sep, oct, nov, dec,
		bumpup=22 //next value will equal 23

	};
	
	void test_month () {
	//WORKS: do_something(Month::jan)
	//DOESNT WORK: do_something(Month::1)
	Month month=Month::jan;
		switch (month) {
			case Month::jan:
				cout << "Jan is cold\n";
				break;
		}
	}
	```

### Class/Ostream/Friend-example
	```
	//Put this inside of a class
	//friend means that this externally defined function, is granted access to private variables
	friend std::ostream& operator<<(std::ostream& stream, const Rectangle& r);

	//Then, externally define the function outside of the class
	//Also, const reference here requires that any functions called will need to have the const flag
	std::ostream& operator<<(std::ostream& stream, const Rectangle& r) {
		stream << r.width << "x" << r.height;
		return stream;
	}
	Rectangle& operator--() {
		this->width -= 1;
		return *this;
	} // 	--r.width, this command would reduce the width by one.
	
	//Call using syntax below in int main
	std::cout << square; //Output 4x5
	```

	```
	class Shape {
	public:
		//Default constructor
		Shape () {
			width = 0;
			height = 0;
		}
		//Class constructor;
		Shape (int w, int h) { 
			width = w;
			height = h; 
		}
		//More preferred Default Class constructor
		Shape (int w, int h) : width(w), height(h) {}
		//Default deconstructor
		~Shape();
	private:
		int width;
		int height;
	};
	```

### Declaring-Namespace
* Use namespace to avoid using global variables
	```
	namespace colors {
		string yellow = "5";
		// call using "colors::yellow"
	}
	```
	
### SwitchCase-Usage
	```
	void SwitchCase () {
		char unit = 'a';
		cout << "Use 'k' for kilometers or 'm' for miles :";
		cin >> unit;
		switch (unit) {
			case 'k': case 'K':
				cout << "You chose km" <<endl;
				break;
			case 'm':
				cout << "You chose mi" <<endl;
				break;
			default:
				cout << "incorrect input, try again." << endl;
				cout << "Use unit 'km' or 'mi' :";
				cin >> unit;
				break;
		}
	}
	```
[TOP](#TOP)

### Command Line Arguments

	```
	int main(int argc, char * * argv) {

		if (argc != 2) {
			//Checks for 3 arguments (remember, count from 0, and 0 is program name)
			return 1;
		}

		//Declare variables
		int numberOfArguments = argc;
		string programName = argv[0];
		string firstArgument = argv[1];

	```

### I/O Streams