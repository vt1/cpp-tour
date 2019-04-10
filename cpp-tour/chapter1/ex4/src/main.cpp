#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number to check if it's even or odd: \n";
	int number;
	cin >> number;
	if (number % 2 == 0)
		cout << "The number " << number << " is even\n";
	else
		cout << "The number " << number << " is odd\n";
}