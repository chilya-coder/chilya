#include <iostream>
#include <ctime>
#include "Matrixx.h"
using namespace std;


int main()

{
	int a, b, wish;
	setlocale(LC_ALL, "rus");
	cout << "Задайте количество рядков в матрице: ";
	cin >> a;
	cout << "Задайте количество столбцов в матрице: ";
	cin >> b;
	Matrixx obj(a, b);
	cout << "Желаете ли Вы заполнить матрицу самостоятельно? 1 - да, 0 - нет\n";
	cout << "Ваш выбор : ";
	cin >> wish;
	if (wish)
	{
		cout << "Задайте желаемые числа в матрице: ";
		obj.user_inizialization();
	}
	else
	{
		obj.auto_inizialization();
	}
	obj.action();
	system("pause");

	return 0;
}
