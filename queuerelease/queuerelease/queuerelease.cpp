#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <queue>
#include <cmath>
using namespace std;

bool check(int a) { // check if number is prime one
	for (int i = 2; i < a; i++)
	{
		float n = static_cast<float> (a) / i;
		if (a / i == n) {
			return false;
		}
		else {
			return true;
		}
	}
}
int main()
{
	queue <int> myQueue; // creating a queue with 100 random numbers
	srand(time(NULL));
	cout << "Numbers in a queue: ";
	for (int i = 0; i < 70; ++i)
	{
		int secret = rand() % 100 + 1;
		myQueue.emplace(secret);
		cout << myQueue.back() << " ";
		
	}
	cout << "\nPrime numbers: ";

	while (!myQueue.empty())
	{
		check(myQueue.front());

		if (check)
		{
			cout << myQueue.front() << " ";
			myQueue.pop();
		}
		else {
			myQueue.pop();
		}
	}

	return 0;	
}

