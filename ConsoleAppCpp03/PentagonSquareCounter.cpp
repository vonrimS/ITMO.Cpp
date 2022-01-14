#include "PentagonSquareCounter.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <stack>

using namespace std;


// Control point 03-1

// подсчет длины одной из сторон треугольника по координатам двух вершин
double getLength(int a[], int b[]) {
	double length = sqrt((a[0] - b[0]) * (a[0] - b[0]) + (a[1] - b[1]) * (a[1] - b[1]));
	// cout << length << endl;   // коорднаты (0, 0) и (3,5) => 5.83095
	return length;
}

double triangleS(int a[], int b[], int c[])
{
	// по вершинам (0, 0), (3, 5), (8, 0)
	double ab = getLength(a, b);
	// cout << ab << endl;    // => 5.83095
	double bc = getLength(b, c);
	// cout << bc << endl;    // => 7.07107
	double ca = getLength(c, a);
	// cout << ca << endl;    // => 8
	double p = 0.5 * (ab + bc + ca); //полупериметр
	// cout << p << endl;   // => 10.451
	double s = sqrt(p * (p - ab) * (p - bc) * (p - ca));    // => 19.99999......
	// cout << setprecision(16) << s << endl;   // как убрать округления?!!!
	return s;
}


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//даны координаты вершин выпуклого пятиугольника
	int a[2] = { 0, 0 };
	int b[2] = { 3, 5 };
	int c[2] = { 7, 7 };
	int d[2] = { 9, 4 };
	int e[2] = { 8, 0 };
	
	double s1 = triangleS(a, b, e);
	double s2 = triangleS(b, e, d);
	double s3 = triangleS(b, c, d);

	double s = s1 + s2 + s3;
	cout << setprecision(16) << s << "\n\n";   // => 40.5

	return 0;
}