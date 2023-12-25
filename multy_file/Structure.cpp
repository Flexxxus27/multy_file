#include "Structure.hpp"

void print_person(const Person& P) {
	std::cout << "Name: " << P.name << std::endl;
	std::cout << "Birthday; " << P.birthday.day << '.' << P.birthday.month << '.' << P.birthday.year << std::endl;
	std::cout << "Gender: " << (P.gender == 'M' ? "male" : "female") << std::endl;

}
