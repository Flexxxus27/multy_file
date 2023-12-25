#pragma once


#include <iostream>


double sum(double num1, double num2);
void prime_range(int left, int right);

template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}
