#include <iostream>
#include <math.h>
#include <ctime>
#include <Windows.h>
using namespace std;


// Exercise 01
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	int x, y;
//	cout << "������� ����������: ";
//	cin >> x >> y;
//	cout << "(" << x << ", " << y << ")" << endl;
//	cout << "��������� ����� ��������� ";
//	if (x * x + y * y < 9 && y > 0)
//	{
//		cout << "������";
//	}
//	else if (x * x + y * y > 9 || y < 0)
//	{
//		cout << "�������";
//	}
//	else
//	{
//		cout << "�� �������";
//	}
//	cout << " ����-���������� � ������� (0, 0) � �������� 3.";
//
//	return 0;
//}

//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	char op;
//
//	cout << "S - sport, V - medium quality" << endl;
//	cout << "������ ���� �����, ������ ���� ���� �����: ";
//	cin >> op;
//
//	switch (op)
//	{
//	case 'S':
//		cout << "����� ������ ������\n";
//		/*cout << "������ �������\n";
//		cout << "������ ���������\n";*/
//		//break;
//	case 'V':
//		cout << "����������� ����\n";
//		/*cout << "����� ������ ������\n";*/
//		/*cout << "������ �������\n";
//		cout << "������ ���������\n";*/
//		//break;
//	default:
//		cout << "������ �������\n";
//		cout << "������ ���������\n";
//	}
//
//	return 0;
//}


// Exercise 02
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	double x, x1, x2, y;
//	cout << "x1 = "; cin >> x1;
//	cout << "x2 = "; cin >> x2;
//
//	cout << "\tx\tsin(x)\n";
//
//	x = x1;
//	do 
//	{
//		y = sin(x);
//		cout << "\t" << x << "\t" << y << endl;
//		x = x + 0.01;
//	} 
//	while (x <= x2);
//
//	return 0;
//}

//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);	
//
//	int a, b, temp;
//
//	cout << "a = "; cin >> a;
//	cout << "b = "; cin >> b;
//
//	while (a != b)
//	{
//		if (a > b)
//		{
//			// cout << a << endl;
//			a -= b;
//		}
//		else
//		{
//			// cout << b << endl;
//			b -= a;
//		}
//	}
//
//	cout << "��� = " << a << endl;
//	
//}

// while do
// 
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);	
//
//	double x, x1, x2, y;
//	cout << "x1 = "; cin >> x1;
//	cout << "x2 = "; cin >> x2;
//
//	cout << "\tx\tsin(x)\n";
//
//	x = x1;
//	
//	while ( x <= x2)	
//	{
//		y = sin(x);
//		cout << "\t" << x << "\t" << y << endl;
//		x = x + 0.01;
//	} 	
//	return 0;
//}


// do while
// 
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);	
//
//	int a, b, temp;
//
//	cout << "a = "; cin >> a;
//	cout << "b = "; cin >> b;
//
//	do
//	{
//		if (a > b)
//		{
//			// cout << a << endl;
//			a -= b;
//		}
//		else
//		{
//			// cout << b << endl;
//			b -= a;
//		}
//	}
//	while (a != b);
//
//	cout << "��� = " << a << endl;	
//}


// Exercise 03
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	srand(time(NULL));
//	int a, b, c;
//	int k = 0, n = 10;
//
//	for (int i = 1; i <= n; i++) 
//	{
//		a = rand() % 10 + 1;
//		b = rand() % 10 + 1;
//		cout << a << " * " << b << " = ";
//		cin >> c;
//
//		if (a * b != c)
//		{
//			k++;
//			cout << "Error!";
//			cout << a << " * " << b << " = " << a * b << endl;
//		}
//	}
//	
//	cout << "Count error: " << k << endl;
//
//	return 0;
//}



// Exercise 04
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	int k, m, s = 0;
//	srand(time(NULL));
//	k = rand() % 100 + 1;
//	m = rand() % 100 + 1;
//	/*k = 2;
//	m = 98;*/
//	cout << "k = " << k << endl;
//	cout << "m = " << m << endl;
//
//
//
//	for (int i = 1; i <= 100; i++)
//	{
//		if ((i > k) && (i < m))
//			continue;
//		s += i;
//		// cout << i<< " < "<<k<<" � " << " > "<<m<<", ������� ��������� � s = " << s << endl;
//	}
//
//	cout << " ����� �����: " << s;
//
//	return 0;
//}


//Control point 02-1

//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	srand(time(NULL));
//	int year = rand() % 2022 + 1;
//	cout << year << endl;
//	//int year = 2400;
//	int flag = 0;	
//
//	// https://docs.microsoft.com/ru-ru/office/troubleshoot/excel/determine-a-leap-year
//	if (year % 4 == 0) 
//	{
//		if (year % 100 == 0) 
//		{
//			if (year % 400 == 0)
//			{				
//				flag = 1;
//			}			
//		}		
//	}
//
//	if (flag ==1) {
//		cout << "��� �������� ����������";
//	}
//	else
//	{
//		cout << "��� �� �������� ����������";
//	} 	
//
//	return 0;
//}


//Control point 02-2

//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	srand(time(NULL));
//
//	int x = rand() % 100 + 1; cout << x << endl;
//	int y = rand() % 100 + 1; cout << y << endl;
//	int z = rand() % 100 + 1; cout << z << endl;
//
//	int temp = max(x,max(y,z));
//	cout << "���������� �����: " << temp;
//
//	return 0;
//}



//Control point 02-3
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	srand(time(NULL));
//
//	//int sum;
//	//cout << "������� ����� ��� �������: "; cin >> sum;
//	int sum = rand() % 100 + 1;
//	cout << "����� ��� �������: " << sum << " ���.";
//
//	// ����� ����� � ������ *assumption - ������� �� ����������� � �������
//	int coins[4] = { 10, 5, 2, 1 }; 
//	int count, delta;
//	string s;
//	cout << "\n�������� ����� ����� ��������� ��: " << endl;
//	for (int i = 0; i < sizeof(coins); ++i) {
//		count = floor(sum / coins[i]);
//		if (count > 0) 
//		{
//			switch (count)
//			{			
//			case 1:
//				s = "������";
//				break;
//			case 2:
//			case 3:
//			case 4:
//				s = "������";
//				break;
//			default:
//				s = "�����";
//				break;
//			}
//			cout << "\t..." << count << " " <<  s << " ��������� " << coins[i] << " ���." << endl;
//		}
//		delta = sum % coins[i];
//		if (delta == 0) {			
//			break;
//		}
//		else
//		{
//			sum = delta;
//		}		
//	}
//	return 0;
//}



//Control point 02-4
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//	srand(time(NULL));
//	
//	int x, y, score = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "������� ���������� ��������: "; cin >> x >> y;
//		cout << "\t...������� ����� � ���������� (" << x << ", " << y << ")" << endl;
//		if (x * x + y * y <= 1)
//		{
//			score += 10;
//			cout << "\t...+10\n";
//			continue;
//		}
//		else if (x * x + y * y <= 4)
//		{
//			score += 5;
//			cout << "\t...+5\n";
//			continue;
//		}
//		else if (x * x + y * y <= 9)
//		{
//			score += 1;
//			cout << "\t...+1\n";
//			continue;
//		}
//		else
//		{
//			cout << "\t...���� ����\n";
//		}	
//	}
//
//	if (score >= 25)
//		cout << "\n��� ������: ������� \n���-�� �����: " << score;
//	else if (score < 25 && score >=20)
//		cout << "\n��� ������: ������� \n���-�� �����: " << score;
//	else
//		cout << "\n��� ������: ������� \n���-�� �����: " << score;
//	
//	cout << "\n\n";
//	return 0;
//}


// ������ ��������� �������� � ����
int countScore(int score, double hit)
{
	if (hit <= 1)
	{
		score += 10;
		cout << "\t...+10\n";
	}
	else if (hit > 1 && hit <= 4)
	{
		score += 5;
		cout << "\t...+5\n";
	}
	else if (hit > 4 && hit <= 9)
	{
		score += 1;
		cout << "\t...+1\n";
	}
	else
	{
		cout << "\t...���� ����\n";
	}
	return score;
}


// ��������� ������� ������� ������ ��� ��������
double outmatching (double x)
{
	double x1 = -10 + rand() % 21;	
	double finalX = x + x1 / 100;
	cout << finalX << endl;	
	return finalX;	
}


// ������� ����������� �� ���-�� ������� �� ������ ������� ���-�� ������
void result(int count)
{
	if (5 <= count <= 8)
	{
		cout << "������ �������. �� ��������� ���� �� " << count << " �������.\n\n";
	}
	else if (8 < count <= 13)
	{
		cout << "������ �������. �� ��������� ���� �� " << count << " �������.\n\n";
	}
	else
	{
		cout << "������ �������. ���� ��������� �� " << count << " �������.\n\n";
	}
}



int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	
	cout << "��������� =�������� �������=\n\n";

	int a, b; // ���������� ������ ������ ��� �������� � ������	
	a = (-5) + (rand() % 6); // ���������� a � ��������� �� -5 �� 5
	b = (-5) + (rand() % 6); // ���������� b � ��������� �� -5 �� 5
	cout << "����� ������: ("<< a <<", "<< b<<")\n\n";

	double x0, y0; // ���������� ������ ����������� ��������
	double x, y; // ���������� ������ ��������� � ������ ���������� ������
	int score = 0, count = 0; // ���-�� ����� ������ � ���-�� �������

	while (score < 50)
	{		
		count += 1;
		cout << "\n������� #" << count << ". ������� ���������� ��������: "; cin >> x0 >> y0;
		x = outmatching(x0);
		y = outmatching(y0);
		cout << "\t...������� ����� � ���������� (" << x << ", " << y << ")" << endl;
		double hit = (x - a) * (x - a) + (y - b) * (y - b);
		score = countScore(score, hit);
	}

	cout << "\n�� ������� " << score << " �����.\n";
	result(count);
	
	return 0;
}
	

//int main()
//{
//	srand(time(NULL));
//
//	for (int i = 0; i < 10; i++) 
//	{
//		double y = -10 + rand() % 21;
//		cout << y / 100 << endl;
//	}	
//
//	return 0;
//}