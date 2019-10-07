#pragma once
class Matrixx
{
	int** m_ptr;
	int m_a; int m_b; // рядок столбец
public:
	Matrixx();
	Matrixx(int m, int n);
	void auto_inizialization(); // автоматическая инииализация
	void user_inizialization(); // инициализация юзера
	void printmass(); //вывод массива на экран
	void action(); //умножение парных элементов
	~Matrixx(); // деструктор для освобождения динамической памяти
	
	
};

