#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two nums:\n";
	int first, second;
	cin >> first >> second;
	int largest_num = first > second ? first : second;
	cout << "The largest num is " << largest_num << "\n";
	cout << "Sum: " << first + second << "\n";
	cout << "Sub: " << first - second << "\n";
	cout << "Mul: " << first * second << "\n";
	cout << "Div: " << first / second << "\n";
}