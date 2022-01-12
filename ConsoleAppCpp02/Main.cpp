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
//	cout << "Введите координаты: ";
//	cin >> x >> y;
//	cout << "(" << x << ", " << y << ")" << endl;
//	cout << "Указанная точка находится ";
//	if (x * x + y * y < 9 && y > 0)
//	{
//		cout << "внутри";
//	}
//	else if (x * x + y * y > 9 || y < 0)
//	{
//		cout << "снаружи";
//	}
//	else
//	{
//		cout << "на границе";
//	}
//	cout << " полу-окружности с центром (0, 0) и радиусом 3.";
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
//	cout << "Сделай свой выбор, собери авто свой мечты: ";
//	cin >> op;
//
//	switch (op)
//	{
//	case 'S':
//		cout << "Радио играть должно\n";
//		/*cout << "Колеса круглые\n";
//		cout << "Мощный двигатель\n";*/
//		//break;
//	case 'V':
//		cout << "Кондиционер хочу\n";
//		/*cout << "Радио играть должно\n";*/
//		/*cout << "Колеса круглые\n";
//		cout << "Мощный двигатель\n";*/
//		//break;
//	default:
//		cout << "Колеса круглые\n";
//		cout << "Мощный двигатель\n";
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
//	cout << "НОД = " << a << endl;
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
//	cout << "НОД = " << a << endl;	
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
//		// cout << i<< " < "<<k<<" и " << " > "<<m<<", поэтому суммируем и s = " << s << endl;
//	}
//
//	cout << " Сумма равна: " << s;
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
//		cout << "Год является високосным";
//	}
//	else
//	{
//		cout << "Год НЕ ЯВЛЯЕТСЯ високосным";
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
//	cout << "Наибольшее число: " << temp;
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
//	//cout << "Введите сумму для размена: "; cin >> sum;
//	int sum = rand() % 100 + 1;
//	cout << "Сумма для размена: " << sum << " руб.";
//
//	// набор монет в рублях *assumption - копейки не принемаются в рассчет
//	int coins[4] = { 10, 5, 2, 1 }; 
//	int count, delta;
//	string s;
//	cout << "\nЗаданную сумму можно разменять на: " << endl;
//	for (int i = 0; i < sizeof(coins); ++i) {
//		count = floor(sum / coins[i]);
//		if (count > 0) 
//		{
//			switch (count)
//			{			
//			case 1:
//				s = "монету";
//				break;
//			case 2:
//			case 3:
//			case 4:
//				s = "монеты";
//				break;
//			default:
//				s = "монет";
//				break;
//			}
//			cout << "\t..." << count << " " <<  s << " номиналом " << coins[i] << " руб." << endl;
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
//		cout << "Введите координаты выстрела: "; cin >> x >> y;
//		cout << "\t...выстрел попал в координаты (" << x << ", " << y << ")" << endl;
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
//			cout << "\t...мимо цели\n";
//		}	
//	}
//
//	if (score >= 25)
//		cout << "\nВаш статус: СНАЙПЕР \nКол-во очков: " << score;
//	else if (score < 25 && score >=20)
//		cout << "\nВаш статус: СТРЕЛОК \nКол-во очков: " << score;
//	else
//		cout << "\nВаш статус: НОВИЧОК \nКол-во очков: " << score;
//	
//	cout << "\n\n";
//	return 0;
//}


// оценка поподания выстрела в цель
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
		cout << "\t...мимо цели\n";
	}
	return score;
}


// иммитация сбитого прицела оружия при выстреле
double outmatching (double x)
{
	double x1 = -10 + rand() % 21;	
	double finalX = x + x1 / 100;
	cout << finalX << endl;	
	return finalX;	
}


// подсчет результатов по кол-ву попыток до набора итогого кол-ва баллов
void result(int count)
{
	if (5 <= count <= 8)
	{
		cout << "Статус СНАЙПЕР. Вы закончили игру за " << count << " попыток.\n\n";
	}
	else if (8 < count <= 13)
	{
		cout << "Статус СТРЕЛОК. Вы закончили игру за " << count << " попыток.\n\n";
	}
	else
	{
		cout << "Статус НОВИЧОК. Игра завершена за " << count << " попыток.\n\n";
	}
}



int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	
	cout << "Атракцион =СТРЕЛЬБА ВСЛЕПУЮ=\n\n";

	int a, b; // координаты центра мишени при стрельбе в слепую	
	a = (-5) + (rand() % 6); // координата a в диапазоне от -5 до 5
	b = (-5) + (rand() % 6); // координата b в диапазоне от -5 до 5
	cout << "Центр мишени: ("<< a <<", "<< b<<")\n\n";

	double x0, y0; // координаты центра прицельного выстрела
	double x, y; // координаты центра поподания с учетом неточности оружия
	int score = 0, count = 0; // кол-во очков игрока и кол-во попыток

	while (score < 50)
	{		
		count += 1;
		cout << "\nПопытка #" << count << ". Введите координаты выстрела: "; cin >> x0 >> y0;
		x = outmatching(x0);
		y = outmatching(y0);
		cout << "\t...выстрел попал в координаты (" << x << ", " << y << ")" << endl;
		double hit = (x - a) * (x - a) + (y - b) * (y - b);
		score = countScore(score, hit);
	}

	cout << "\nВы набрали " << score << " очков.\n";
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