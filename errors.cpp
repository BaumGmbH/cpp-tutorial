#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

float divide(float f1, float f2) {
	if (f2 == 0) {
		throw 15;
	}

	return f1 / f2;
}

int main() {

	float in;
	cin >> in;

	try {
		cout << divide(10.0, (float) in) << endl;
	} catch (int e) {
		std::cerr << "Error" << endl;
	}

	return 0;
}