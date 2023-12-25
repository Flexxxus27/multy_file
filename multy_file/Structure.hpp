#pragma once

#include <iostream>
#include <string>


struct Date {
	int day = 1;
	int month = 1;
	int year = 1970;
};

struct Person {
	std::string name;
	Date birthday;
	char gender = 'M';
};


void print_person(const Person& P);