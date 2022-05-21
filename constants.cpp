#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

	// Constant Pointers

	int a = 10;
	const int *ptr1 = &a; // Points to a CONSTANT value
	int* const ptr2 = &a; // Points to a CONSTANT address
	const int* const ptr3 = &a; // Points to a CONSTANT value with a CONSTANT address

	// Basic Constants

	const int MY_CONSTANT = 10;

	//cout << MY_CONSTANT << endl;
	//cout << MY_CONSTANT + 20 << endl;

	int b = MY_CONSTANT;

	//cout << b << endl;
	b += 50;
	//cout << b << endl;

	return 0;
}