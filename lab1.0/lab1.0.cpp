// Вильковского О. С., 1 курс, ПИз-18
// Лабораторная 1, вариант 15
// Определить, находятся ли все три точки заданного множества на одной прямой
#include "pch.h"
#include <iostream>
#include <locale>
#define NumberOfChecks 3

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

void setPoints(int points[6]) {	
	cout << "Введите x1: ";
	cin >> points[point::X1];
	cout << "Введите y1: ";
	cin >> points[point::Y1];
	cout << "Введите x2: ";
	cin >> points[point::X2];
	cout << "Введите y2: ";
	cin >> points[point::Y2];
	cout << "Введите x3: ";
	cin >> points[point::X3];
	cout << "Введите y3: ";
	cin >> points[point::Y3];
}

bool checkPointsToLine(int points[6]) {
	return (points[point::X1] - points[point::X3]) * (points[point::Y2] - points[point::Y3]) - (points[point::X2] - points[point::X3]) * (points[point::X1] - points[point::Y3]) == 0;
}

int main()
{
	setOptions();

	int points[6];
	for (int i = 0; i < NumberOfChecks; i++) {
		setPoints(points);
		if (checkPointsToLine(points))
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
