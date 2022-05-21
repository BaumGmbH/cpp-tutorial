#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void function1() {
	cout << "Function 1" << endl;
}
void function2() {
	cout << "Function 2" << endl;
}

int main() {
	
	// Function Pointers

	void (*myfunc)();
	myfunc = function2;
	myfunc();

	// Pointers to Pointers

	int f = 10;
	int *ptrF = &f;
	int **pptr = &ptrF;

	//cout << pptr << endl;

	// Void Pointers

	int e = 20;
	void *vp = &e; // Can point to everything

	char myChar = 'A';
	//cout << (void *) &myChar << endl;

	// Null Pointers

	int d = 10;
	int *prtD = &d;

	prtD = NULL; // C Way
	prtD = nullptr; // C++ Way | Best Practise 

	// Pointer Arthmatic

	int c = 10;
	int *prtC = &c;

	/*cout << prtC << endl;
	cout << *prtC << endl;
	cout << ++prtC << endl;
	cout << *prtC << endl;
	cout << ++prtC << endl;
	cout << *prtC << endl;
	cout << ++prtC << endl;
	cout << *prtC << endl;
	cout << ++prtC << endl;
	cout << *prtC << endl;
	cout << ++prtC << endl;
	cout << *prtC << endl;
	cout << ++prtC << endl;
	cout << *prtC << endl;*/
	
	// Array Pointers

	int arr[100];

	/*cout << arr << endl;
	cout << &arr << endl; // The Same
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr[2] << endl;*/

	int *prtArr = arr; // Arrays are pointers
	prtArr[4] = 69;

	//cout << arr[4] << endl;

	// Basic Pointers

	int b = 10;
	/*cout << sizeof(b) << endl;
	cout << &b << endl;*/

	int *pointerB = &b;

	//cout << *pointerB << endl;

	*pointerB = 20;

	//cout << b << endl;

	return 0;
}