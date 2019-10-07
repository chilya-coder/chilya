#include "Matrixx.h"
#include <iostream>
#include <ctime>
#include <iomanip>


Matrixx::Matrixx()
{
	m_a = { 0 };
	m_b = { 0 };
}

Matrixx::Matrixx(int m, int n)
{
	m_a = m;
	m_b = n;
}

void Matrixx::printmass() {
	system("cls");
	std::cout << "���� �������:\n";
	for (int i{ 0 }; i < m_a; ++i)
	{
		for (int j{ 0 }; j < m_b; ++j)
		{
			std::cout << std::setw(3) << m_ptr[i][j] << " ";
		}
		std::cout << "\n";
	}
}
void Matrixx::auto_inizialization()
{
	srand(time(NULL));
	m_ptr = new int* [m_a]; // �������� ���������� ������� ���-�� ������
	for (int i{ 0 }; i < m_a; ++i) // ��������� ������
	{
		m_ptr[i] = new int[m_b]; // ���-�� ��������
	}
	for (int i{ 0 }; i < m_a; ++i)
	{
		for (int j{ 0 }; j < m_b; ++j)
		{
			m_ptr[i][j] = rand() % 100 + 1;
		}
	}
	printmass();
}
void Matrixx::user_inizialization()
{
	m_ptr = new int* [m_a]; // �������� ���������� ������� ���-�� ������
	for (int i{ 0 }; i < m_a; ++i) // ���������� ������� ������� �����
	{
		m_ptr[i] = new int[m_b]; // ���-�� ��������
	}
	for (int i{ 0 }; i < m_a; ++i)
	{
		for (int j{ 0 }; j < m_b; ++j)
		{
			std::cin >> m_ptr[i][j];
		}
	}
	printmass();
}
void Matrixx::action()
{
	int result = { 1 }; 
	for (int i{ 0 }; i < m_a; ++i)
	{
		for (int j{ 0 }; j < m_b; ++j)
		{
			if (m_ptr[i][j] % 2 == 0)
			{
				result *= m_ptr[i][j];
			}
		}
	
	}
	if (result)
		std::cout << "������������ ������ ����� = " << result << std::endl;
	else
		std::cout << "������ ����� ���������" << std::endl;
}
Matrixx::~Matrixx() {
	delete[]m_ptr;
	std::cout << "������������ ������ �����������!" << std ::endl;
}