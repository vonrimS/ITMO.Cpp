#include "BinaryConverter.h"

#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <tuple>
#include <stack>
#include "RangeSum.h"

using namespace std;


int DecimalToBinary(int num)
{		
	int rem = num / 2;
	if (rem > 0) {
		DecimalToBinary(rem);
		cout << num % 2;
	}
	else
		cout << num % 2;
	return num;	
}


int main5()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);	

	/*int x;
	cout << "¬ведите DEC число дл€ преобразовани€ в BIN представление: ";
	cin >> x;
	DecimalToBinary(x);*/

	for (int i = 0; i < 21; i++) {
		cout << i << "\t=> ";
		DecimalToBinary(i);
		cout << endl;
	}

	return 0;
}