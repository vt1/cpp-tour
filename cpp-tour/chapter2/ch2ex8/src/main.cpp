#include <iostream>
using namespace std;

int main()
{
	double first = 0.0;
	double second = 0.0;
	char operation = '\0';

	cout << "Enter 2 double values and operation: ";
	while (cin >> first >> second >> operation)
	{			
		switch (operation)
		{
			case '+':
				cout << "Sum " << first << " and " << second << " is " << first + second << endl;
				break;
			case '-':
				cout << "Sub " << first << " and " << second << " is " << first - second << endl;
				break;
			case '*':
				cout << "Mul " << first << " and " << second << " is " << first * second << endl;
				break;
			case '/':
				cout << "Div " << first << " and " << second << " is " << first / second << endl;
				break;
		}			
	}
}