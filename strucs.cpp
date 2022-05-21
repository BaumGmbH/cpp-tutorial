#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum Gender {
	MALE, FEMALE
};

struct person {
	Gender gender;
	string name;
	int age;

	void printInfo() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;

		switch (gender) {
			case MALE:
				cout << "Gender: Male" << endl;
				break;
			case FEMALE:
				cout << "Gender: Female" << endl;
				break;
		}
	}
};

int main() {

	struct person max;
	struct person sarah;

	max.name = "Max";
	max.age = 25;
	max.gender = MALE;

	sarah.name = "Sarah";
	sarah.age = 14;
	sarah.gender = FEMALE;

	max.printInfo();
	sarah.printInfo();

	return 0;
}