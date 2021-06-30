#include <iostream>
#include <Windows.h>
using namespace std;
#define tab "\t"
//#define LESSON
//#define FACTORIAL
//#define POWER_1
//#define MATRIX_ASCII
#define MATRIX_ASCII_2
//#define LESSON_2
//#define TIMER


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef LESSON
	int m;//количество итераций
	cout << "Введите количество итераций: "; cin >> m;
	for (int i = 0; //Start
		i < m; //Stop
		i++)//Step
	{
		cout << i << tab;

	}

	cout << endl;
#endif // LESSON


#ifdef FACTORIAL
	long long int n;
	long long int f = 1;
	cout << endl << "Вычисление факториала" << endl << "Введите число: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{

		f *= i;

		cout << i << "!=" << f << endl;
	}

	cout << endl << endl << "Факториал числа " << n << "!=" << f << endl;

#endif // FACTORIAL

#ifdef POWER_1
	int m;
	double a;
	cout << endl << "Возведение числа в степень" << endl << "Введите число: "; cin >> a;
	cout << "Введите степень: "; cin >> m;
	cout << a << " ^ " << m << "=";


	if (m < 0)
	{
		a = 1 / a;
		m = -m;
	}

	double power = 1;
	for (int i = 0; i < m; i++)
	{
		power *= a;
		//cout << a << "^" << i << "=" << power << endl;
	}
	cout << power << endl;



#endif // POWER_1

#ifdef MATRIX_ASCII
	cout << endl << "Вывод на экран ASCII-символов" << endl << endl;
	for (int i = 0; i < 16; i++) // кол-во строк
	{
		for (int j = i * 16; j < i * 16 + 16; j++) // кол-во символов в каждой строке
		{
			cout << j << ":" << char(j) << tab;

		}
		cout << endl; // переход на строку ниже
	}
#endif // MATRIX_ASCII

#ifdef MATRIX_ASCII_2
	for (int i = 0; i < 256; i++) // кол-во строк
	{
		if (i % 16 == 0) cout << endl;
		cout << char(i) << " ";
	}

	cout << endl; // переход на строку ниже  
#endif // MATRIX_ASCII_2


#ifdef LESSON_2
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i << tab << j << endl;
		}
		cout << "-----------------\n";
	}
#endif // LESSON_2

#ifdef TIMER
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			for (int s = 0; s < 60; s++)

			{
				system("CLS");
				cout << h << ":" << m << ":" << s << endl;
			}
		}

	}
#endif // TIMER


}