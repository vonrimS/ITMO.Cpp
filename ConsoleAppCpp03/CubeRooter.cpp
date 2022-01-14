#include "CubeRooter.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <stack>

using namespace std;



// Control point 03-2

double getCubeRootSimple(double a)
{
	return pow(a, 1.0 / 3);
}


double getCubeRootItr(double a)
{
	double ai = a;   // ��������� �������� ��� ������
	double ai1 = 0;   // �������� a i+1

	while (true)
	{
		double b1 = 1;
		double b2 = 3;			
		ai1 = (b1/b2) * ((a / (ai * ai)) + 2 * ai);
		// cout << ai1 << endl;		
		if (abs(ai1 - ai) < pow(10.0, -5.0))    // ����� �� ����� while 
		{
			// cout << pow(10.0, -5.0);
			break;
		}
		ai = ai1;
		// cout << ai << endl;
	}
	return ai;	
}


int main2()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double a;
	cout << "������� ����� ��� ���������� ����������� �����: ";
	cin >> a;

	cout << getCubeRootSimple(a) << " (��������� ���������� ����������� ����� ����� ���������� �������)" << endl;

	cout << getCubeRootItr(a) << " (��������� ���������� ����������� ����� �� ������������ �������)"  << endl;

	return 0;
}
