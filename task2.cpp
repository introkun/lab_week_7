#include <locale.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int star, center;

	cout << "выводим ромб, размер не четный\nвведите размер = ";
	cin >> star;
	if (star%2 == 0)
	{
		cout << "вы ввели неверные данные!!!\n";
		return 1;
	}
	center = star / 2;

	for (int i = 0; i < star; i++)
	{
		for (int j = 0; j < star; j++)
		{
			if (i <= center)
			{
				if (j >= center - i && j <= center + i)
					cout << "*";
				else
					cout << " ";
			}
			else
			{
				if (j >= center + i - star + 1 && j <= center - i + star - 1)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
