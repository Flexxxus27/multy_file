#include "Functions.h"


extern int _A;
extern const double _PI = 3.14;

double sum(double num1, double num2) {
	return num1 + num2;
}

void prime_range(int left, int right) {
	std::cout << _A << std::endl; //test
	for (int i = left; i <= right; i++) {
		int counter = 0;
		for (int j = 1; j <= i; j++)
			if (i % j == 0)
				counter++;
		if (counter == 2)
			std::cout << i << ' ';
	}
	std::cout << std::endl;
}
