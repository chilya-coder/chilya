#pragma once
class Matrixx
{
	int** m_ptr;
	int m_a; int m_b; // ����� �������
public:
	Matrixx();
	Matrixx(int m, int n);
	void auto_inizialization(); // �������������� ������������
	void user_inizialization(); // ������������� �����
	void printmass(); //����� ������� �� �����
	void action(); //��������� ������ ���������
	~Matrixx(); // ���������� ��� ������������ ������������ ������
	
	
};

