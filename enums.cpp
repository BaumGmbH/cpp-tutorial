#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum Color {
	RED, GREEN, BLUE, PURPLE, ORANGE
};

int main() {

	Color color = BLUE;

	cout << color << endl; // Prints the number which is internally used

	return 0;
}