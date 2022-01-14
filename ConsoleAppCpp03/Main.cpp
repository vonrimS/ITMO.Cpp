#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <stack>

using namespace std;



// Exercise 1-1
//void privet(string);
//
//int main() 
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	string name;
//	cout << "What is your name?" << endl;
//	cin >> name;
//	privet(name);
//	return 0;
//}
//
//
//void privet(string name)
//{
//	cout << name << ", " << "hello!" << endl;
//}


// Exercise 1-2
//string privet(string name)
//{
//	string str =  name + ", " + "hello!\n";
//	return str;
//}
//
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);	
//
//	string name;
//	cout << "What is your name?" << endl;
//	cin >> name;
//	string nameOut = privet(name);
//	cout << nameOut;
//	return 0;
//}


// Exercise 2
//
//string privet(string name)
//{
//	string str = name + ", " + "hello!\n";
//	return str;
//}
//
//void privet(string name, int k)
//{
//	cout << name << ", " << "hello! " << "you input " << k << endl;
//}
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	string name;
//	cout << "What is your name?" << endl;
//	cin >> name;
//
//	int k;
//	cout << "Input number: " << endl;
//	cin >> k;
//
//	cout << privet(name);
//	privet(name, k);
//	
//	return 0;
//}



// Exercise 3
//
//long double firBinSearch(double, int);
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	double a;
//	int b;
//	cout << setprecision(7);
//	cout << "¬ведите действительное число (1...1000):";
//	cin >> a;
//	cout << "¬ведите натуральное число (0...10):";
//	cin >> b;
//
//	cout << firBinSearch(a, b);
//
//	return 0;
//}
//
//long double firBinSearch(double a, int n)
//{
//	double L = 0;
//	double R = a;
//	while (R - L > 1e-10)
//	{
//		double M = (L + R) / 2;
//		if (pow(M, n) < a)
//		{
//			L = M;
//		}
//		else
//		{
//			R = M;
//		}
//	}
//	return R;
// }


// Exercise 3
//
//long double firBinSearch(double, int);
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	double a;
//	int b;
//	cout << setprecision(7);
//	cout << "¬ведите действительное число (1...1000):";
//	cin >> a;
//	cout << "¬ведите натуральное число (0...10):";
//	cin >> b;
//
//	cout << firBinSearch(a, b);
//
//	return 0;
//}
//
//long double firBinSearch(double a, int n)
//{
//	double L = 0;
//	double R = a;
//	while (R - L > 1e-10)
//	{
//		double M = (L + R) / 2;
//		if (pow(M, n) < a)
//		{
//			L = M;
//		}
//		else
//		{
//			R = M;
//		}
//	}
//	return R;
//
//}




//// Exercise 4-1
//
//int addNumbers(int n)
//{
//	if (n == 1) return 1; 
//	else return (n + addNumbers(n - 1));
//}
//
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//		
//	int a;
//	cout << "¬ведите целое положительное число: ";
//	cin >> a;
//
//	cout << "—умма чисел от 1 до " << a << " = " << addNumbers(a) << "\n\n";
//	
//	return 0;
//}


//// Exercise 4-2
//
//int gcd(int a, int b)
//{
//	if (b == 0) return a;
//	else return gcd(b, a % b);
//}
//
//
//int main()
//{
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	int a, b;
//	cout << "¬ведите первое число: "; cin >> a;
//	cout << "¬ведите второе число: "; cin >> b;
//
//	cout << "Ќаибольший общий делитель дл€ приведенных чисел равен " << gcd(a, b) << "\n\n";
//
//	return 0;
//}


