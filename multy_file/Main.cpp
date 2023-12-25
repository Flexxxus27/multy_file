#include <iostream>
#include "Functions.h"
#include "Structure.hpp"
#include "Data.hpp"



int main() {
	setlocale(0, "");
	int n;


	//файл с функциями
	
	std::cout << sum(5, 4) << std::endl;
	prime_range(7, 20);

	const int size = 3;
	int arr[size]{ 10, 20, 30 };
	print_arr(arr, size);
	

	//Файл со структурами
	
	Person p1{
		"Lara Croft",
		{20, 5, 1995 },
		'F'
	};
	print_person(p1);
	


	// Файлы с переменными

	_A = 7;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	print_arr(_ARR, _SIZE);

	prime_range(1, 10);



	return 0;



	
}

//Области применения многофайловых проектов:
//1. Сокращение объема кода в главном файле 
//2. Разделение обязаностей разработчиков
//3. Создание своих библиотек.
//4. Ускорение сборки