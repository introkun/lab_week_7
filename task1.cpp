#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int total, intotal, cycle = 0, ok = 0, evaluation, attempts = 1, max1, max2, i1, i2;
	int complexity;
	srand(time(NULL));
	cout << "проверяем на знание таблицы умножения" "\n"
		"Программа выводит на экран два числа, пользователь должен ввести их произведение" "\n"
		"выбирете уровней сложности" "\n"
		"Easy = 1 " "\n"
		"Normal = 2" "\n"
		"Medium = 3" "\n"
		"Hard = 4" "\n"
		"Master = 5" "\n"
		"выход = 0 " "\n" "сделайте выбор: ";
	cin >> complexity;
	do
	{
		if (complexity == 0)
		{
			break;
		}
		switch (complexity)
		{
		case 1:
			attempts = 5;
			max1 = 10;
			max2 = 10;
			i1 = 1;
			i2 = 1;
			break;
		case 2:
			attempts = 10;
			max1 = 100;
			max2 = 10;
			i1 = 10;
			i2 = 1;
			break;
		case 3:
			attempts = 15;
			max1 = 100;
			max2 = 100;
			i1 = 10;
			i2 = 10;
			break;
		case 4:
			attempts = 25;
			max1 = 1000;
			max2 = 100;
			i1 = 100;
			i2 = 10;
			break;
		case 5:
			attempts = 50;
			max1 = 1000;
			max2 = 1000;
			i1 = 100;
			i2 = 100;
		default: 
		break;
		}
		int number1 = rand() % max1 + i1;
		int number2 = rand() % max2 + i2;
		cout << number1 << " * ";
		cout << number2 << " = ";
		cin >> intotal;
		total = number1 * number2;
		if (total == intotal)
		{
			cout << "верно" << endl;
			ok++;
		}
		else
		{
			cout << "верный ответ = " << total << endl;
		}
		cycle++;
	} while (cycle < attempts);
	evaluation = 10 * ok / attempts;
	cout << "итог: " "\n" "правельных ответов " << ok << " из " << attempts << "\n"
		"ваша оценка " << evaluation << " из 10" "\n";
}


/*Написать программу, которая проверяет пользователя на знание таблицы умножения.
Программа выводит на экран два числа, пользователь должен ввести их произведение.
Разработать несколько уровней сложности (отличаются сложностью и количеством вопросов).
Вывести пользователю оценку его знаний.*/