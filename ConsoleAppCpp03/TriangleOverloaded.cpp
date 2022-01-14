#include "TriangleOverloaded.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <stack>

using namespace std;


// Control point 03-3

// проверить вводимые пользователем значения для ветвления сценария рассчетов
int getUserInput()
{
	cout << "Площадь какого треугольника будет рассчитана? \n\t1 - равносторонний\n\t2 - остроугольный или равнобедренный" << endl;
	int t;
	cin >> t;
	if (t == 1 || t == 2)
	{
		return t;
	}
	else {
		cout << "...повторите ввод команды" << endl;
		getUserInput();
	}
}


// проверить вводимы значения сторон для неравностороннего треугольника и вернуть как кортеж
tuple <int,int,int> getTriangleSides()
{
	cout << "Введите длинны сторон треугольника: " << endl;
	int a, b, c;
	cin >> a >> b >> c;
	while ( ((a + b) < c) || ((a + c) < b) || ((c + b) < a)) {
		cout << "...очень странный треугольник. Давайте повторим ввод значений" << endl;
		cout << "Введите длинны сторон треугольника: " << endl;		
		cin >> a >> b >> c;
		if (((a + b) >= c) && ((a + c) >= b) && ((b + c) >= a))
			break;			
	}		
	return {a, b, c};
}


double getTriangleSquare(int a)
{
	double p = (a * 3 * 0.5);
	double s = sqrt(p * pow((p - a), 3));    
	return s;
}


double getTriangleSquare(int a, int b, int c)
{
	double p = (a + b + c) * 0.5;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}


int main3()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int a, b, c;
	int t = getUserInput();
	if (t == 1)
	{
		cout << "Введите длинну стороны равностороннего треугольника: " << endl;
		int a;
		cin >> a;
		cout << "Площадь равностороннего треугольника равна " << getTriangleSquare(a) << endl;
	}
	else if (t == 2)
	{		
		tie (a, b, c) =  getTriangleSides();
		// cout << a << endl << b << endl << c << endl;
		cout << "Площадь треугольника с заданными сторонами равна " << getTriangleSquare(a, b, c) << endl;
	}	
	return 0;
}

