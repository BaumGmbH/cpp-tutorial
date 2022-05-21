#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

	// String Object

	string s = "Hello World!";
	string s2("Hello Friends");

	cout << s << endl;
	cout << s2 << endl;
	cout << s2.length() << endl;

	cout << s[6] << endl;
	cout << s.at(6) << endl; // Cleaner

	if (s == s2) {
		cout << "SAME" << endl;
	} else {
		cout << "NOT SAME" << endl;
	}

	string combined = s + s2;
	cout << combined << endl;

	// Char Arrays

	char text[10] = "Hello";
	text[1] = 'a';

	cout << text << endl;
	cout << sizeof(text) << endl;
	cout << strlen(text) << endl;

	char text2[16] = "AbcdefG";
	char text3[200];

	//cin >> text3;

	// DANGEROUS // strcpy(text2, text3);

	cout << strcmp(text2, text3) << endl;
	char concat[216];
	strcpy(concat, strcat(text2, text3)); // Save because no Buffer Overflow possible
	cout << concat << endl;

	return 0;
}