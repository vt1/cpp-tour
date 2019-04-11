#include <iostream>
using namespace std;

int main()
{
	cout << "Guessing program number from 0 to 100" << endl;	

	int upper = 100;
	int low = 0;
	int middle;
	int tries = 7;
	char answer;	

	while (tries)
	{
		middle = (low + upper) / 2;
		cout << "Is your number less or equal than " << middle << "?:";
		cin >> answer;
		if (answer == 'y')
			upper = middle;
		else
			low = middle;	

		if (answer == 'e')
			break;

		--tries;
	}
	cout << "Your number is " << middle << endl;
}