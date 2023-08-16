/*  Name: Spencer Owens
    Class: Fall CS F202
    Date: 2023-Feb-08
    Program Name: lab03.cpp
    Program Function: To display Hello World in Technicolor!
*/

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

enum class Style_val {
	reset=0, bold, faint, italic, underline, slowblink, fastblink
};

enum class Color_val {
	black=30, red, green, yellow, blue, magenta, cyan, white,
	bgyellow=103
};

void general_expressions () {
	constexpr char ESC{033};
	cout << ESC << "[47;" << int(Color_val::black) << "mBlack";
	cout << ESC << "[" << int(Style_val::reset) << "m, ";
	cout << ESC << "[" << int(Color_val::red) 	<< "mRed";
	cout << ESC << "[" << int(Style_val::reset) << "m, ";
	cout << ESC << "[" << int(Style_val::bold) <<";" << int(Color_val::green) << "mBoldGreen";
	cout << ESC << "[" << int(Style_val::reset) << "m, ";
	cout << ESC << "[" << int(Style_val::faint) <<";" << int(Color_val::yellow) << "mFaintYellow";
	cout << ESC << "[" << int(Style_val::reset) << "m, ";
	cout << ESC << "[" << int(Style_val::italic) <<";" << int(Color_val::blue) << "mItalicBlue";
	cout << ESC << "[" << int(Style_val::reset) << "m, ";
	cout << ESC << "[" << int(Style_val::underline) <<";" << int(Color_val::magenta) << "mUnderlineMagenta";
	cout << ESC << "[" << int(Style_val::reset) << "m, ";
	cout << ESC << "[" << int(Style_val::slowblink) <<";" << int(Color_val::cyan) << "mSlowblinkCyan";
	cout << ESC << "[" << int(Style_val::reset) << "m, ";
	cout << ESC << "[" << int(Style_val::fastblink) <<";" << int(Color_val::white) << "mFastblinkWhite";
	cout << ESC << "[" << int(Style_val::reset) << "m" << endl;
}

void skyline () {
	constexpr char ESC{033};

	cout << "           ________            ";
	cout << ESC << "[" << int(Style_val::slowblink) << ";" << int(Color_val::yellow) << "m*";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "                 ";
	cout << ESC << "[" << int(Style_val::slowblink) << ";" << int(Color_val::yellow) << "m*";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "      ";
	cout << ESC << "[30;" << int(Color_val::bgyellow) << "m|\\";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "       " << endl;
	cout << "          |        |                ";
	cout << ESC << "[" << int(Style_val::slowblink) << ";" << int(Color_val::yellow) << "m*";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "   ___             ";
	cout << ESC << "[30;" << int(Color_val::bgyellow) << "m| \\";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "  ";
	cout << ESC << "[" << int(Style_val::slowblink) << ";" << int(Color_val::yellow) << "m*";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "   " << endl;
	cout << "          |        |                 __/   \\_  ";
	cout << ESC << "[" << int(Style_val::slowblink) << ";" << int(Color_val::yellow) << "m*";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "         ";
	cout << ESC << "[30;" << int(Color_val::bgyellow) << "m\\ \\";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "     " << endl;
	cout << "          | __  __ |                /   \\__/ \\           ";
	cout << ESC << "[30;" << int(Color_val::bgyellow) << "m/ /";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "     " << endl;
	cout << "          ||__||__||                \\___/ \\__/          ";
	cout << ESC << "[30;" << int(Color_val::bgyellow) << "m/ /";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "      " << endl;
	cout << "          ||__||__||                                    ";
	cout << ESC << "[30;" << int(Color_val::bgyellow) << "m|/";
	cout << ESC << "[" << int(Style_val::reset) << "m";
	cout << "   ";
	cout << "   " << endl;
	cout << "          | __  __ |                                             " << endl;
	cout << "          ||__||__||                                             " << endl;
	cout << "          ||__||__||   ________                                  " << endl;
	cout << "          |        |  |        |                                 " << endl;
	cout << "          |        |  |        |                                 " << endl;
	cout << "          | __  __ |  | __  __ |                                 " << endl;
	cout << "  ____    ||__||__||  ||__||__||                                 " << endl;
	cout << " / << \\   ||__||__||  ||__||__||                                 " << endl;
	cout << " -_>>_-   |        |  |        |                                 " << endl;
	cout << "   ||     |        |  |        |                                 " << endl;
	cout << "___||_____|________|__|________|_________________________________" << endl;
	cout << "\n";
}



int main () {
	constexpr char ESC{033};
	string clrs {"\033[2J\033[1;1H"};
	string diag {"\n[1] General SGR Code Expressions;\n[2] Night Skyline;\n[3] Exit;\nEnter: "};
	int input;
	cout << clrs << diag;
	while (cin >> input) {
		if (input == 1) {cout << clrs; general_expressions(); cout << diag;};
		if (input == 2) {cout << clrs; skyline(); cout << diag;};
		if (input == 3) {cout << clrs; exit(0);};	
	}
	cout << "\n";
	return 0;
}
