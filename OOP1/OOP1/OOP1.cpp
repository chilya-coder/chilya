#include <iostream>
//#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

float calculate (int a, int b, int c){ //за тремя сторонами
	float p = ((a + b + c)/2);
	return sqrt(p * ((p - a) * (p - b) * (p - c)));
}
float calculate(int a, int b, float c) { // за двумя сторонами и углом между ними
	c = c * M_PI / 180;
	return 0.5 * a * b * sin (c) ;
}

float calculate(float a, float b) { // за двумя сторонами прямоугольника
	return a * b;
}
int wish()
{
	int desire;
	bool go;
	cout << "Желаете продолжить? 1 - да, 0 - нет\n";
	do {
		cin >> desire;
	} while (desire != 1 || desire != 0);
	return desire;
}

int main()
{
	bool go = true;
	setlocale(LC_ALL, "rus");
	int choice;
	int a, b, c;
	float triangle_square_1, triangle_square_2, rectangle_square;
	float degree;
	do{
		system("cls");
	cout << "Здравствуйте! Чтобы Вы хотели сделать?" << endl;
	cout << "1. Найти площадь треугольника за тремя сторонами" << endl;
	cout << "2. Найти площадь треугольника за двумя сторонами и углом между ними" << endl;
	cout << "3. Найти площадь прямоугольника за двумя сторонами" << endl;
	cout << "4. Выход" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Введите данные:\n \tпервая сторона: ";
			cin >> a;
			cout << "\tвторая сторона: ";
			cin >> b;
			cout << "\tтретья сторона: ";
			cin >> c;
			triangle_square_1 = calculate(a, b, c);
			cout << "Ваш результат: " << triangle_square_1 << endl;
			go = wish();
			break;
		case 2:
			cout << "Введите данные:\n \tпервая сторона: ";
			cin >> a;
			cout << "\tвторая сторона: ";
			cin >> b;
			cout << "\tугол между ними: ";
			cin >> degree;
			triangle_square_2 = calculate(a, b, degree);
			cout << "Ваш результат: " << triangle_square_2 << endl;
			go = wish();
			break;
		case 3:
			cout << "Введите данные:\n \tпервая сторона: ";
			cin >> a;
			cout << "\tвторая сторона: ";
			cin >> b;
			rectangle_square = calculate(a, b);
			cout << "Ваш результат: " << rectangle_square << endl;
			go = wish();
			break;
		case 4:
			go = false;
			break;
		default:
			cout << "Вы выбрали неверное значение. Попытайтесь еще\n";
		};
	} while (go);
	return 0;
}

