#include "RangeSum.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <stack>

using namespace std;


//// Control point 03-4

int getSumViaRecurcion(int n)
{
	int sum = 5 * n;
	// cout << sum << endl;
	if (n == 1) 
	{
		return sum;
	}
	else
	{
		sum += getSumViaRecurcion(n - 1);
		return sum;
	}
}


int main4()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	int n;
	cout << "S = 5 + 10 + 15 + … + 5·n (при n > 0)\n\n";
	cout << "Ведите число n: ";
	cin >> n;
	cout << "\nСумма равна " << getSumViaRecurcion(n) << endl;
	return 0;
}



