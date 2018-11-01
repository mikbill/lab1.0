// Вильковского О. С., 1 курс, ПИз-18
// Лабораторная 1, вариант 15
// Определить, находятся ли все три точки заданого множества на одной прямой
#include "pch.h"
#include <iostream>
#include <locale>
#define N 3

using namespace std;

void setOptions() {
	setlocale(LC_ALL, "Russian");
	system("color F0");
}

enum point {
	X1,
	Y1,
	X2,
	Y2,
	X3,
	Y3,
};

int* setPoints() {
	int arr[6];
	cout << "Введите x1: ";
	cin >> arr[point::X1];
	cout << "Введите y1: ";
	cin >> arr[point::Y1];
	cout << "Введите x2: ";
	cin >> arr[point::X2];
	cout << "Введите y2: ";
	cin >> arr[point::Y2];
	cout << "Введите x3: ";
	cin >> arr[point::X3];
	cout << "Введите y3: ";
	cin >> arr[point::Y3];
	return arr;
}

bool checkPointsToLine(int* arr) {
	if ((arr[point::X1] - arr[point::X3]) * (arr[point::Y2] - arr[point::Y3]) - (arr[point::X2] - arr[point::X3]) * (arr[point::X1] - arr[point::Y3]) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	setOptions();

	for (int i = 0; i < N; i++) {
		if (checkPointsToLine(setPoints()))
		{
			std::cout << "Точки принадлежат одной прямой\n";
		}
		else
		{
			std::cout << "Точки не принадлежат одной прямой\n";
		}
	}
	system("pause");
}
