#include <iostream>
using namespace std;

int main()
{
	cout << "Enter operator and two numbers\n";
	string operation;
	double first, second;
	cin >> operation >> first >> second;
	if (operation == "+")
		cout << first + second;
	if (operation == "-")
		cout << first - second;
	if (operation == "*")
		cout << first * second;
	if (operation == "/")
		cout << first / second;
}