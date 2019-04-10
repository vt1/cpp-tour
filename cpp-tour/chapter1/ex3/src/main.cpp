#include <iostream>
using namespace std;

int main()
{
	cout << "Enter 3 numbers:\n";
	int first, second, third;
	cin >> first >> second >> third;
	
	if (first > second && first > third)
	{
		if (second > third)
			cout << third << ", " << second << ", " << first;
		else
			cout << second << ", " << third << ", " << first;
	}

	if (second > first && second > third)
	{
		if (first > third)
			cout << third << ", " << first << ", " << second;
		else
			cout << first << ", " << third << ", " << second;
	}

	if (third > first && third > second)
	{
		if (first > second)
			cout << second << ", " << first << ", " << third;
		else
			cout << first << ", " << second << ", " << third;
	}
}