#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

//возвращает площадь прямоугольника со сторонами а и b
double area(double a, double b) {
	return a * b;
}
//возвращает площадь окружности с радиусом r
double area(double r) {
	return 3.1416 * r*r;// 3.1416 * pow(r, 2)
}

//шаблонная функция
template<typename T>
void foo(T num) {

}





int main() {
	system("chcp 1251>nul");
	int n, m;

	//ПЕРЕГРУЗКА ФУНКЦИИ
	/*
	n = 7; m = 8;
	std::cout << "Площадь прямоугольника = " << area(n, m) << std::endl;

	double radius = 6;
	std::cout << "Площадь окружности равна -> " << area(radius) << std::endl;*/


	//УКАЗАТЕЛИ!!!на переменные
	/*n = 7; m = 15;
	std::cout << "Адрес n: " << &n << std::endl;

	int* pn = &n;//записали адрес в указатель
	std::cout << "pn = " << pn << std::endl;

	std::cout << "Разыменование указателя *pn " << *pn << std::endl;

	*pn = 42;
	std::cout << "Новое значение n = " << n << std::endl;


	pn = &m;//перенаправление указателя на область памяти, в которой хранится m
    std::cout << "pn = " << pn << std::endl;
	std::cout << "*pn = " << *pn << std::endl;*/

	const int size = 5;
	int arr[size]{ 30,40,50,60,70 };

	std::cout << *arr << std::endl;
	std::cout << *(arr + 1) << std::endl;

	std::cout << "Массив: \n";
	for (int i = 0; i < size; i++)
		std::cout << *(arr + i) << ' ';
	std::cout << std::endl;






	return 0;
}