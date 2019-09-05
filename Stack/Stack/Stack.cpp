#include <iostream>
#include <stack>
#include <ctime>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	stack<int> st, parnoe, ne_parnoe;
	srand(time(NULL));
	for (int i = 0; i < 65; i++)
	{
		int secret = rand() % 100 + 1;
		st.emplace(secret); // заполнили стек рандомными числами, юзанули эмплейс
	}
	while (!st.empty()) { // пока не конец стека делаем проверку на четность или не четность
		if (st.top() % 2 == 0)
		{
			parnoe.push(st.top());
			st.pop();
		}
		else 
			ne_parnoe.push(st.top());
			st.pop();
	}
	cout << "Стек №1: ";
	while (!parnoe.empty())
	{
		cout << parnoe.top() << " ";
		parnoe.pop();
	}
	cout << "\nСтек №2: ";
	while (!ne_parnoe.empty())
	{
		cout << ne_parnoe.top() << " ";
		ne_parnoe.pop();
	}
	stack<int> example;
	example.peek();

	return 0;
}

