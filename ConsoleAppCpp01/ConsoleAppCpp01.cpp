// ConsoleAppCpp01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

// Exercise 01
//int main()
//{
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//    
//    string name;
//    cout << "What is your name ? ";
//    /*cin >> name;*/
//    getline(cin, name);
//    cout << "Hello, " << name << "!\n";
//
//}


// Exercise 02
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	string name;
//	cout << "������� ���� ���: ";
//	double x;
//	//int x;
//	double a, b;
//	cout << "\n������� a � b: ";
//	//cout << "������� a = ";
//	cin >> a;
//	cin >> name;
//	//cout << "\n������� b = ";
//	cin >> b;
//	x = a / b;
//	//cout.precision(3);
//	//cout << "\n��������� x = " << x << endl;
//	//cout << "\n��������� x = " << x << endl;
//	//cout << sizeof(a/b) << ends << sizeof(x) << endl;
//	cout << "\nx = " << x << endl;
//	cout << "������, " << name << "!\n";
//	return 0;
//}

// Exercise 03
//int main()
//{
//    SetConsoleOutputCP(1251);
//    SetConsoleCP(1251);
//     
//    double a, b, c, p, pp;
//    double s;
//    cout << "������� �������� ���������: ";
//    cin >> p;
//    a = b = c = p / 3;
//    pp = p / 2;  
//    
//    s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
//    //s = sqrt(1255);
//    cout << "�������\t\t�������\n";
//    cout << a << "\t\t";
//    cout << fixed << setprecision(2) << s;   
//}


// Control poin 01

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;

	cout << "������� X1 � Y1: ";
	cin >> x1;
	cin >> y1;
	cout << "����� #1: (" << x1 << ", " << y1 << ")\n";
	
	cout << "������� X2 � Y2: ";
	cin >> x2;
	cin >> y2;
	cout << "����� #2: (" << x2 << ", " << y2 << ")\n";

	cout << "������� X3 � Y3: ";
	cin >> x3;
	cin >> y3;
	cout << "����� #3: (" << x3 << ", " << y3 << ")\n";

	cout << "������� X4 � Y4: ";
	cin >> x4;
	cin >> y4;
	cout << "����� #4: (" << x4 << ", " << y4 << ")\n";

	cout << "������� X5 � Y5: ";
	cin >> x5;
	cin >> y5;
	cout << "����� #5: (" << x5 << ", " << y5 << ")\n";

	double s;

	s = 0.5 * abs((x1*y2) + (x2*y3) + (x3*y4) + (x4*y5) + (x5*y1) - (x2*y1) - (x3*y2) - (x4*y3) - (x5*y4) - (x1*y5));

	cout << "������� �������������� �����: " << s;
}