
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double firstnum = 0;
	double secondnum = 0;

	cout << "Введите первое число: ";
	cin >> firstnum;
	cout << "Введите второе число: ";
	cin >> secondnum;

	cout << endl;
	cout << "Сумма: " << firstnum + secondnum << endl;
	cout << "Разность: " << abs(firstnum - secondnum) << endl;
	cout << "Среднее арифметическое: " << (abs(firstnum) + abs(secondnum)) / 2 << endl;
	
	_getch();
	return 0;
}