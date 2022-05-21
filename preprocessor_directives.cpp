// Pre Processor Statements start with a #

#include <iostream> // Copys the code from iostream

#define PI (3.14159)

// Replaces the a * a with whatever is passed as input => square(i++) -> i++ * i++
#define square(a) a * a // Not the same as:
int squareFunc(int a) {
	return a * a;
}

#define COND1
#define COND2

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

	#ifdef PI // Compiles the code only if PI is defined

	cout << PI << endl; // 'PI' gets replaced by the defined value
						// It's NOT a Constant Variable

	#endif

	#undef PI // Removes any defined keywords. They can now no longer be used

	#ifdef PI // Wont compile because its no longer defined

	cout << "Pi is still " << PI << endl;

	#else

	cout << "PI is not defined" << endl;

	#endif

	cout << square(4) << endl;

	#ifdef COND1
	#ifdef COND2

	// Throws a compile time error
	//#error Cond1 and Cond2 are defined

	#endif
	#endif

	return 0;
}