#include <iostream>
#include <ctime>
#include <queue>
using namespace std;

bool check(int a) { 
	if (a == 1)
		return false; // 1 is not a prime number
	for (int start = 2; start * start <= a; start++)
	{
		if (a % start == 0)
			return false;
	}
	return true;
	}

int main()
{
	queue <int> myQueue; // creating a queue with 100 random numbers
	srand(time(NULL));
	cout << "Numbers in a queue: ";
	for (int i = 0; i < 70; ++i)
	{
		int secret = rand() % 100 + 1; // random number from 1 to 100
		myQueue.emplace(secret);
		cout << myQueue.back() << " ";

	}

	/*int* a, * b; // Это не сработает, потому что очередь - динамический массив, т.е.
	a = &myQueue.front();
	b = &myQueue.back();
	while (a <= b)
	{
		cout << *a << " ";
		a++;
	}
	*/ 


	cout << "\nPrime numbers: ";

	
	while (!myQueue.empty())
	{

		if (check(myQueue.front()))
		{
			cout << myQueue.front() << " ";
		}
		myQueue.pop();
	}
	return 0;
}
